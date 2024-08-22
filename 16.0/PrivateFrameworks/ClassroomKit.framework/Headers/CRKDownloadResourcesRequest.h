// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKDOWNLOADRESOURCESREQUEST_H
#define CRKDOWNLOADRESOURCESREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier, NSData, NSArray, NSString;



@interface CRKDownloadResourcesRequest : CATTaskRequest

@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (nonatomic) BOOL openAfterDownloadCompletes; // ivar: _openAfterDownloadCompletes
@property (retain, nonatomic) NSData *previewImageData; // ivar: _previewImageData
@property (copy, nonatomic) NSArray *resources; // ivar: _resources
@property (copy, nonatomic) NSString *resourcesDescription; // ivar: _resourcesDescription
@property (copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif