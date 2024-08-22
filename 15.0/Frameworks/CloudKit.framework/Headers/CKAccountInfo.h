// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKACCOUNTINFO_H
#define CKACCOUNTINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAccountInfo : NSObject <NSSecureCoding>

 {
    NSInteger _validationCounter;
}


@property (nonatomic) NSInteger accountPartition; // ivar: _accountPartition
@property (nonatomic) NSInteger accountStatus; // ivar: _accountStatus
@property (nonatomic) NSInteger deviceToDeviceEncryptionAvailability; // ivar: _deviceToDeviceEncryptionAvailability
@property (nonatomic) BOOL hasValidCredentials; // ivar: _hasValidCredentials
@property (nonatomic) BOOL isFromCache; // ivar: _isFromCache
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;


+(BOOL)supportsSecureCoding;
+(void)invalidateCachedAccountInfo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif