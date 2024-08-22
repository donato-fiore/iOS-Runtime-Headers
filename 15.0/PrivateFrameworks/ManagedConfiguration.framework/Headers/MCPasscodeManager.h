// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPASSCODEMANAGER_H
#define MCPASSCODEMANAGER_H


#import <Foundation/Foundation.h>


@interface MCPasscodeManager : NSObject



+(BOOL)_passcodeCharacteristics:(id)arg0 compliesWithPolicyFromRestrictions:(id)arg1 outError:(*id)arg2 ;
+(BOOL)isDeviceUnlocked;
+(BOOL)passcode:(id)arg0 compliesWithPolicyFromRestrictions:(id)arg1 checkHistory:(BOOL)arg2 outError:(*id)arg3 ;
+(id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg0 shouldBeDefault:(BOOL)arg1 ;
+(id)characteristicsDictionaryFromPasscode:(id)arg0 ;
+(id)deviceLockedError;
+(id)generateSalt;
+(id)hashForPasscode:(id)arg0 usingMethod:(int)arg1 salt:(id)arg2 customIterations:(unsigned int)arg3 ;
+(id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)arg0 ;
+(id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg0 ;
+(id)sharedManager;
+(int)defaultNewPasscodeEntrySimplePasscodeType;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg0 ;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg0 outSimplePasscodeType:(*int)arg1 ;
+(int)unlockScreenTypeForRestrictions:(id)arg0 ;
+(int)unlockScreenTypeForRestrictions:(id)arg0 outSimplePasscodeType:(*int)arg1 ;
-(BOOL)_checkPasscode:(id)arg0 againstHistoryWithRestrictions:(id)arg1 outError:(*id)arg2 ;
-(BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg0 outError:(*id)arg1 ;
-(BOOL)isCurrentPasscodeCompliantOutError:(*id)arg0 ;
-(BOOL)isDeviceLocked;
-(BOOL)isPasscodeCompliantWithNamedPolicy:(id)arg0 outError:(*id)arg1 ;
-(BOOL)isPasscodeSet;
-(BOOL)passcode:(id)arg0 compliesWithPolicyCheckHistory:(BOOL)arg1 outError:(*id)arg2 ;
-(BOOL)unlockDeviceWithPasscode:(id)arg0 outError:(*id)arg1 ;
-(id)_privatePasscodeDictWithOutError:(*id)arg0 ;
-(id)_publicPasscodeDict;
-(id)_wrongPasscodeError;
-(id)localizedDescriptionOfDefaultNewPasscodePolicy;
-(id)localizedDescriptionOfPasscodePolicy;
-(id)passcodeExpiryDateOutError:(*id)arg0 ;
-(int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(*int)arg0 shouldBeMinimum:(BOOL)arg1 ;
-(int)currentUnlockScreenType;
-(int)currentUnlockSimplePasscodeType;
-(int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(*int)arg0 ;
-(int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(*int)arg0 ;
-(int)newPasscodeEntryScreenType;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(*int)arg0 ;
-(void)lockDevice;
-(void)lockDeviceImmediately:(BOOL)arg0 ;
-(void)passcodeExpiryDateCompletionBlock:(id)arg0 ;


@end


#endif