// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKSHAREREQUEST_H
#define CRKSHAREREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier, NSData, NSDictionary, NSString, NSArray;



@interface CRKShareRequest : CATTaskRequest

@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (retain, nonatomic) NSData *previewImageData; // ivar: _previewImageData
@property (retain, nonatomic) NSDictionary *sandboxExtensions; // ivar: _sandboxExtensions
@property (copy, nonatomic) NSString *shareDescription; // ivar: _shareDescription
@property (copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (copy, nonatomic) NSString *targetIdentifier; // ivar: _targetIdentifier
@property (copy, nonatomic) NSString *targetType; // ivar: _targetType
@property (copy, nonatomic) NSArray *urls; // ivar: _urls


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif