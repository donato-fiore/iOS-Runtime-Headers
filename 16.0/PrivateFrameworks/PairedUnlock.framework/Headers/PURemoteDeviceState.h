// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREMOTEDEVICESTATE_H
#define PUREMOTEDEVICESTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PURemotePasscodePolicy.h"

@interface PURemoteDeviceState : NSObject <NSSecureCoding>



@property (nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked; // ivar: _passcodeLocked
@property (retain, nonatomic) PURemotePasscodePolicy *passcodePolicy; // ivar: _passcodePolicy
@property (nonatomic, getter=hasPasscodeSet) BOOL passcodeSet; // ivar: _passcodeSet
@property (nonatomic, getter=isUnlockOnly) BOOL unlockOnly; // ivar: _unlockOnly
@property (nonatomic) unsigned int version; // ivar: _version
@property (nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled; // ivar: _wristDetectEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif