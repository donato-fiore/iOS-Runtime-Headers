// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPCOMMAND_H
#define SPCOMMAND_H

@class NSUUID, NSNumber, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPHandle.h"

@interface SPCommand : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (copy, nonatomic) NSNumber *duration; // ivar: _duration
@property (nonatomic) BOOL enableLostMode; // ivar: _enableLostMode
@property (copy, nonatomic) NSDate *expiration; // ivar: _expiration
@property (copy, nonatomic) SPHandle *handle; // ivar: _handle
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *lostModeEmail; // ivar: _lostModeEmail
@property (copy, nonatomic) NSString *lostModeMessage; // ivar: _lostModeMessage
@property (copy, nonatomic) NSString *lostModePhoneNumber; // ivar: _lostModePhoneNumber
@property (copy, nonatomic) NSString *obfuscatedIdentifier; // ivar: _obfuscatedIdentifier
@property (nonatomic) NSInteger playSoundContext; // ivar: _playSoundContext
@property (readonly, copy, nonatomic) NSString *taskName;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)acceptShareWithBeaconUUID:(id)arg0 ;
+(id)beginLeashingWithBeaconUUID:(id)arg0 ;
+(id)connectToBeaconUUID:(id)arg0 ;
+(id)declineShareWithBeaconUUID:(id)arg0 ;
+(id)disableLostModeForBeaconUUID:(id)arg0 ;
+(id)disableNotifyWhenFound:(id)arg0 ;
+(id)enableLostModeForBeaconUUID:(id)arg0 message:(id)arg1 phoneNumber:(id)arg2 email:(id)arg3 ;
+(id)enableNotifyWhenFound:(id)arg0 ;
+(id)endLeashingWithBeaconUUID:(id)arg0 ;
+(id)locate:(id)arg0 ;
+(id)playSoundWithBeaconUUID:(id)arg0 ;
+(id)playSoundWithBeaconUUID:(id)arg0 duration:(CGFloat)arg1 ;
+(id)playSoundWithBeaconUUID:(id)arg0 withContext:(NSInteger)arg1 ;
+(id)startNotifyWhenFound:(id)arg0 ;
+(id)startSharingWithBeaconUUID:(id)arg0 handle:(id)arg1 expiration:(id)arg2 ;
+(id)stopNotifyWhenFound:(id)arg0 ;
+(id)stopSharingWithBeaconUUID:(id)arg0 handle:(id)arg1 ;
+(id)stopSoundWithBeaconUUID:(id)arg0 ;
+(id)unpairWithBeaconUUID:(id)arg0 ;
+(id)updateAccessoryFirmware:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBeaconUUID:(id)arg0 type:(NSInteger)arg1 expiration:(id)arg2 duration:(id)arg3 handle:(id)arg4 lostModeEmail:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 identifier:(id)arg9 ;
-(id)initWithBeaconUUID:(id)arg0 type:(NSInteger)arg1 expiration:(id)arg2 duration:(id)arg3 handle:(id)arg4 lostModeMessage:(id)arg5 lostModePhoneNumber:(id)arg6 obfuscatedIdentifier:(id)arg7 ;
-(id)initWithBeaconUUID:(id)arg0 type:(NSInteger)arg1 expiration:(id)arg2 duration:(id)arg3 playSoundContext:(NSInteger)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 identifier:(id)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif