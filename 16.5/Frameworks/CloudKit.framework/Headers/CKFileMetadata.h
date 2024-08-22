// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFILEMETADATA_H
#define CKFILEMETADATA_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKFileMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (readonly, copy, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (readonly, copy, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (readonly, copy, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (readonly, copy, nonatomic) NSNumber *modTimeInSeconds; // ivar: _modTimeInSeconds


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceID:(id)arg0 fileID:(id)arg1 generationID:(id)arg2 modTimeInSeconds:(id)arg3 fileSize:(id)arg4 ;
-(id)initWithFileSize:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif