// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCHACKS_H
#define MCHACKS_H


#import <Foundation/Foundation.h>


@interface MCHacks : NSObject



+(id)sharedHacks;
-(BOOL)_applyHeuristicsToRestrictions:(id)arg0 forProfile:(id)arg1 outError:(*id)arg2 ;
-(BOOL)isGreenTea;
-(BOOL)isJapanSKU;
-(BOOL)isSetupBuddyDone;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg0 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg0 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg0 ;
-(id)_deviceSpecificDefaultSettings;
-(id)_permittedGracePeriodNumbers;
-(id)_selectLargestNumberFromSortedArray:(id)arg0 equalToOrLessThanNumber:(id)arg1 ;
-(id)permittedAutoLockNumbers;
-(id)quantizedAutoLockInSeconds:(id)arg0 ;
-(id)quantizedGracePeriodInSeconds:(id)arg0 ;
-(void)_applyHeuristicsToEffectiveUserSettings:(id)arg0 ;
-(void)_applyHeuristicsToGranfatheredRestrictionPayloadKeys:(id)arg0 ;
-(void)_applyImpliedSettingsToSettingsDictionary:(id)arg0 currentSettings:(id)arg1 restrictions:(id)arg2 ;
-(void)_applyInternalDiagnosticEnforcementToSettings:(id)arg0 ;
-(void)_applyMandatorySettingsToEffectiveUserSettings:(id)arg0 ;
-(void)_applyServerSideChangesWithOldRestrictions:(id)arg0 newRestrictions:(id)arg1 oldEffectiveUserSettings:(id)arg2 newEffectiveUserSettings:(id)arg3 ;
-(void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg0 ;
-(void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg0 ;
-(void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg0 ;


@end


#endif