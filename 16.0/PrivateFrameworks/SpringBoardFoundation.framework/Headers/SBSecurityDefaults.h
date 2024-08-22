// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSECURITYDEFAULTS_H
#define SBSECURITYDEFAULTS_H

@class NSNumber;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBSecurityDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL allowLockAndUnlockWithCase;
@property (retain, nonatomic) NSNumber *blockStateGeneration;
@property (retain, nonatomic, getter=isBlockedForPasscode) NSNumber *blockedForPasscode;
@property (nonatomic, getter=isBlockedForThermal) BOOL blockedForThermal;
@property (readonly, nonatomic, getter=isDeviceWipeEnabled) BOOL deviceWipeEnabled;
@property (readonly, nonatomic) BOOL dontLockEver;
@property (readonly, nonatomic) BOOL enableLayerBasedViewSecurity;
@property (retain, nonatomic) NSNumber *numberOfFailedPasscodeAttempts;
@property (retain, nonatomic, getter=isPendingDeviceWipe) NSNumber *pendingDeviceWipe;
@property (readonly, nonatomic) BOOL reportSecureDrawViolations;
@property (retain, nonatomic) NSNumber *unblockTimeFromReferenceDate;


-(id)deviceLockDefaultForKey:(id)arg0 ;
-(void)_bindAndRegisterDefaults;
-(void)setDeviceLockDefault:(id)arg0 forKey:(id)arg1 ;


@end


#endif