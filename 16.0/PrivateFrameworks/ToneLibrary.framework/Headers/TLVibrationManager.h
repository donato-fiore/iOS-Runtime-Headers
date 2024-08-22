// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLVIBRATIONMANAGER_H
#define TLVIBRATIONMANAGER_H

@class NSMutableDictionary, NSDictionary, NPSDomainAccessor;

#import <Foundation/Foundation.h>

#import "TLAccessQueue.h"

@interface TLVibrationManager : NSObject {
    TLAccessQueue *_accessQueue;
    NSUInteger _specialBehaviors;
    NSMutableDictionary *_cachedSystemVibrationIdentifiers;
    NSMutableDictionary *_cachedSystemVibrationCompleteSubdirectories;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    NSDictionary *_synchronizedVibrationPatternFromToneIdentifierMapping;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
}


@property (nonatomic) BOOL allowsAutoRefresh; // ivar: _allowsAutoRefresh
@property (readonly, nonatomic) BOOL needsRefresh; // ivar: _needsRefresh
@property (readonly, nonatomic) BOOL shouldVibrateForCurrentRingerSwitchState;
@property (readonly, nonatomic) BOOL shouldVibrateOnRing;
@property (readonly, nonatomic) BOOL shouldVibrateOnSilent;


+(id)sharedVibrationManager;
+(void)_handleVibrateOnRingOrSilentDidChangeNotification;
+(void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(NSUInteger)arg0 atInitiativeOfVibrationManager:(id)arg1 ;
-(BOOL)_areSynchronizedVibrationsAllowedForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(BOOL)_booleanPreferenceForKey:(struct __CFString *)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_isUnitTestingModeEnabled;
-(BOOL)_migrateLegacySettings;
-(BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(*id)arg0 ;
-(BOOL)_removeAllUserGeneratedVibrationsWithError:(*id)arg0 ;
-(BOOL)_saveUserGeneratedVibrationPatterns:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)arg0 error:(*id)arg1 ;
-(BOOL)_vibrationIsSettableForAlertType:(NSInteger)arg0 ;
-(BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasSpecificDefaultVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(BOOL)refresh;
-(BOOL)setName:(id)arg0 forUserGeneratedVibrationWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)vibrationWithIdentifierIsValid:(id)arg0 ;
-(NSInteger)_currentVibrationWatchAlertPolicyForAlertType:(NSInteger)arg0 ;
-(NSInteger)_currentVibrationWatchAlertPolicyForAlertType:(NSInteger)arg0 accountIdentifier:(id)arg1 ;
-(NSInteger)_currentVibrationWatchAlertPolicyForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(NSInteger)_currentVibrationWatchAlertPolicyForAlertType:(NSInteger)arg0 topic:(id)arg1 didFindPersistedWatchAlertPolicy:(*BOOL)arg2 ;
-(NSUInteger)_numberOfUserGeneratedVibrations;
-(NSUInteger)_storedSystemVibrationDataMigrationVersion;
-(id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)arg0 ;
-(id)_currentVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)_currentVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 correspondingToneIdentifier:(id)arg2 ;
-(id)_currentVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 correspondingToneIdentifier:(id)arg2 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)arg3 ;
-(id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)_defaultPreferablyNonSilentVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 correspondingToneIdentifier:(id)arg2 ;
-(id)_defaultVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 correspondingToneIdentifier:(id)arg2 ;
-(id)_initWithSpecialBehaviors:(NSUInteger)arg0 ;
-(id)_localizedNameForVibrationWithIdentifier:(id)arg0 ;
-(id)_nameOfVibrationWithIdentifier:(id)arg0 ;
-(id)_newServiceConnection;
-(id)_patternForSystemVibrationWithIdentifier:(id)arg0 shouldLogAssetPath:(BOOL)arg1 ;
-(id)_retrieveUserGeneratedVibrationPatternsUsingService;
-(id)_sanitizeVibrationIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 didFallbackToCurrentVibrationIdentifier:(*BOOL)arg4 ;
-(id)_sanitizeVibrationIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 useDefaultVibrationAsFallback:(BOOL)arg4 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)arg5 didFallback:(*BOOL)arg6 ;
-(id)_synchronizedVibrationIdentifierForToneIdentifier:(id)arg0 ;
-(id)_systemVibrationIdentifiersForSubdirectory:(id)arg0 ;
-(id)_systemWideVibrationPatternPreferenceKeyForAlertType:(NSInteger)arg0 ;
-(id)_userGeneratedVibrationPatterns;
-(id)addUserGeneratedVibrationPattern:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(id)allUserGeneratedVibrationIdentifiers;
-(id)allUserSelectableSystemVibrationIdentifiers;
-(id)currentVibrationIdentifierForAlertType:(NSInteger)arg0 ;
-(id)currentVibrationIdentifierForAlertType:(NSInteger)arg0 accountIdentifier:(id)arg1 ;
-(id)currentVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)currentVibrationNameForAlertType:(NSInteger)arg0 ;
-(id)currentVibrationPatternForAlertType:(NSInteger)arg0 ;
-(id)defaultVibrationIdentifierForAlertType:(NSInteger)arg0 ;
-(id)defaultVibrationIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)defaultVibrationNameForAlertType:(NSInteger)arg0 ;
-(id)defaultVibrationPatternForAlertType:(NSInteger)arg0 ;
-(id)init;
-(id)nameOfVibrationWithIdentifier:(id)arg0 ;
-(id)noneVibrationName;
-(id)noneVibrationPattern;
-(id)patternForVibrationWithIdentifier:(id)arg0 ;
-(id)patternForVibrationWithIdentifier:(id)arg0 repeating:(BOOL)arg1 ;
-(void)_didChangeUserGeneratedVibrationPatterns;
-(void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg0 inDomain:(id)arg1 usingPreferencesOfKind:(NSUInteger)arg2 ;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
-(void)_performBlockInAccessQueue:(id)arg0 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(NSInteger)arg0 forAlertType:(NSInteger)arg1 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(NSInteger)arg0 forAlertType:(NSInteger)arg1 accountIdentifier:(id)arg2 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(NSInteger)arg0 forAlertType:(NSInteger)arg1 topic:(id)arg2 ;
-(void)dealloc;
-(void)setCurrentVibrationIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 ;
-(void)setCurrentVibrationIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 accountIdentifier:(id)arg2 ;
-(void)setCurrentVibrationIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 topic:(id)arg2 ;


@end


#endif