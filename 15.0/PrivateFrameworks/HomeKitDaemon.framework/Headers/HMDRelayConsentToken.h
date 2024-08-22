// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYCONSENTTOKEN_H
#define HMDRELAYCONSENTTOKEN_H

@class HMFObject, NSUUID, NSData, NSDate;
@protocol NSSecureCoding;


#import "HMDHAPAccessory.h"
#import "HMDUser.h"

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding>



@property (weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy, nonatomic) NSData *consentToken; // ivar: _consentToken
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (weak, nonatomic) HMDUser *user; // ivar: _user
@property (retain, nonatomic) NSUUID *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConsentToken:(id)arg0 expiration:(id)arg1 accessory:(id)arg2 user:(id)arg3 ;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif