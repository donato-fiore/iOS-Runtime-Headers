// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (readonly, nonatomic) NSInteger deviceToDeviceDataPrivacyStatus;
@property (nonatomic) NSInteger deviceToDeviceEncryptionAvailability; // ivar: _deviceToDeviceEncryptionAvailability
@property BOOL hasEncryptionIdentity; // ivar: _hasEncryptionIdentity
@property (nonatomic) BOOL hasValidCredentials; // ivar: _hasValidCredentials
@property (nonatomic) BOOL isFromCache; // ivar: _isFromCache
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property (readonly, nonatomic) NSInteger walrusStatus; // ivar: _walrusStatus


+(BOOL)supportsSecureCoding;
+(id)new;
+(void)invalidateCachedAccountInfo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)copyWithFakeDeviceToDeviceEncryptionAvailability:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAccountStatus:(NSInteger)arg0 accountPartition:(NSInteger)arg1 hasValidCredentials:(BOOL)arg2 deviceToDeviceEncryptionAvailability:(NSInteger)arg3 walrusStatus:(NSInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif