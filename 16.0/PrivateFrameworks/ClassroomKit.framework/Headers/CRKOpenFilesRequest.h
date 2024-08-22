// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKOPENFILESREQUEST_H
#define CRKOPENFILESREQUEST_H

@class CATTaskRequest, NSSet, NSData, NSString;



@interface CRKOpenFilesRequest : CATTaskRequest

@property (nonatomic) BOOL autoAccept; // ivar: _autoAccept
@property (copy, nonatomic) NSSet *fileItems; // ivar: _fileItems
@property (copy, nonatomic) NSData *previewImageData; // ivar: _previewImageData
@property (copy, nonatomic) NSString *senderName; // ivar: _senderName
@property (copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif