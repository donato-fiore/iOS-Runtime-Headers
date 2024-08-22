// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLTONEMANAGER_H
#define TLTONEMANAGER_H

@class NSDictionary, NPSDomainAccessor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TLAccessQueue.h"

@interface TLToneManager : NSObject {
    TLAccessQueue *_accessQueue;
    NSDictionary *_tonesByIdentifier;
    NSDictionary *_toneIdentifiersBySyncIdentifier;
    NSDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    id<NSCopying> *_contentProtectionStateObserverToken;
    BOOL _cachedWatchPrefersSalientNotifications;
    BOOL _hasValidCachedWatchPrefersSalientNotifications;
    BOOL _shouldSkipNextWatchPrefersSalientNotificationsDidChangeNotification;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    BOOL _shouldUseServiceToAccessTonePreferences;
    NSDictionary *_cachedTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
}


@property (readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property (readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property (readonly, nonatomic) NSString *_rootDirectory;
@property (readonly, nonatomic) NSString *_systemRingtoneDirectory;


+(BOOL)_ensureTCCAccessPreflightAndCheckForFileExistenceAtPath:(id)arg0 ;
+(BOOL)_migrateLegacyToneSettings;
+(id)_abbreviatedDescriptionOfMediaPlaybackArchive:(id)arg0 ;
+(id)_abbreviatedDescriptionOfToneIdentifierWithUnderlyingMediaPlaybackArchiveForLogging:(id)arg0 ;
+(id)_currentOverridePolicyPreferenceKeyForAlertType:(NSInteger)arg0 ;
+(id)_defaultToneIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
+(id)_systemWideTonePreferenceKeyForAlertType:(NSInteger)arg0 ;
+(id)sharedToneManager;
-(BOOL)_ensureDirectoryExistsAtPath:(id)arg0 ;
-(BOOL)_hasUnderlyingPlaybackArchiveForToneIdentifier:(id)arg0 ;
-(BOOL)_importSyncedToneWithMetadata:(id)arg0 fileName:(id)arg1 ;
-(BOOL)_loadITunesRingtoneInfoPlistAtPath:(id)arg0 ;
-(BOOL)_removeAllTones;
-(BOOL)_removeToneFromManifestAtPath:(id)arg0 fileName:(id)arg1 ;
-(BOOL)_removeToneWithIdentifier:(id)arg0 ;
-(BOOL)_removeToneWithIdentifier:(id)arg0 orSyncIdentifier:(id)arg1 ;
-(BOOL)_removeToneWithSyncIdentifier:(id)arg0 ;
-(BOOL)_removeTonesFromManifestAtPath:(id)arg0 fileNames:(id)arg1 shouldSkipReload:(BOOL)arg2 alreadyLockedManifest:(BOOL)arg3 removedEntries:(*id)arg4 ;
-(BOOL)_setToneIdentifierUsingService:(id)arg0 keyedByTopic:(id)arg1 forPreferenceKey:(id)arg2 ;
-(BOOL)_toneWithIdentifierIsAlarmWakeUp:(id)arg0 ;
-(BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg0 ;
-(BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg0 ;
-(BOOL)_toneWithIdentifierIsMediaPlaybackArchive:(id)arg0 ;
-(BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg0 ;
-(BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg0 ;
-(BOOL)_toneWithIdentifierIsValid:(id)arg0 ;
-(BOOL)_transferPurchasedToITunes:(id)arg0 ;
-(BOOL)_wasAffectedByAccidentalToneDeletion;
-(BOOL)_watchPrefersSalientNotifications;
-(BOOL)hasSpecificDefaultToneIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(BOOL)toneWithIdentifierIsValid:(id)arg0 ;
-(CGFloat)_unduckTimeForToneIdentifier:(id)arg0 ;
-(NSInteger)_currentOverridePolicyForAlertType:(NSInteger)arg0 ;
-(NSInteger)_currentOverridePolicyForAlertType:(NSInteger)arg0 didFindAlertOverridePolicy:(*BOOL)arg1 ;
-(NSInteger)_currentToneWatchAlertPolicyForAlertType:(NSInteger)arg0 ;
-(NSInteger)_currentToneWatchAlertPolicyForAlertType:(NSInteger)arg0 accountIdentifier:(id)arg1 ;
-(NSInteger)_currentToneWatchAlertPolicyForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(NSInteger)_currentToneWatchAlertPolicyForAlertType:(NSInteger)arg0 topic:(id)arg1 didFindPersistedWatchAlertPolicy:(*BOOL)arg2 ;
-(NSInteger)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(BOOL)arg0 returningFilePathsForFoundOrphans:(*id)arg1 wasAffectedByAccidentalToneDeletion:(*BOOL)arg2 ;
-(NSInteger)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(*id)arg0 ;
-(NSUInteger)_installedTonesSize;
-(id)_addToneEntries:(id)arg0 toManifestAtPath:(id)arg1 mediaDirectory:(id)arg2 shouldSkipReload:(BOOL)arg3 ;
-(id)_addToneToManifestAtPath:(id)arg0 metadata:(id)arg1 fileName:(id)arg2 mediaDirectory:(id)arg3 ;
-(id)_alarmWakeUpRingtoneDirectory;
-(id)_aliasForToneIdentifier:(id)arg0 ;
-(id)_allSyncedTones;
-(id)_baseDirectoryForAlertToneSoundFiles;
-(id)_currentToneIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)_defaultPreferablyNonSilentToneIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)_defaultRingtoneName;
-(id)_defaultRingtonePath;
-(id)_fileNameFromToneIdentifier:(id)arg0 withPrefix:(id)arg1 ;
-(id)_filePathForToneIdentifier:(id)arg0 isValid:(*BOOL)arg1 ;
-(id)_importPurchasedToneWithMetadata:(id)arg0 fileName:(id)arg1 ;
-(id)_installedTones;
-(id)_localizedNameOfToneWithIdentifier:(id)arg0 ;
-(id)_nameForToneIdentifier:(id)arg0 isValid:(*BOOL)arg1 ;
-(id)_newServiceConnection;
-(id)_previewSoundForToneIdentifier:(id)arg0 ;
-(id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg0 mediaDirectory:(id)arg1 ;
-(id)_soundForToneIdentifier:(id)arg0 ;
-(id)_systemEmbeddedModernSoundDirectory;
-(id)_systemEmbeddedSoundDirectory;
-(id)_systemNewSoundDirectory;
-(id)_systemSoundDirectory;
-(id)_systemWatchSoundDirectory;
-(id)_toneForSyncIdentifier:(id)arg0 ;
-(id)_toneIdentifierForFileAtPath:(id)arg0 isValid:(*BOOL)arg1 ;
-(id)_toneIdentifierWithUnderlyingPlaybackArchive:(id)arg0 ;
-(id)_tonePreferencesFromService;
-(id)_toneWithIdentifier:(id)arg0 ;
-(id)_tonesFromManifestPath:(id)arg0 mediaDirectoryPath:(id)arg1 ;
-(id)_underlyingPlaybackArchiveForToneIdentifier:(id)arg0 ;
-(id)currentToneIdentifierForAlertType:(NSInteger)arg0 ;
-(id)currentToneIdentifierForAlertType:(NSInteger)arg0 accountIdentifier:(id)arg1 ;
-(id)currentToneIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)currentToneNameForAlertType:(NSInteger)arg0 ;
-(id)defaultRingtoneIdentifier;
-(id)defaultToneIdentifierForAlertType:(NSInteger)arg0 ;
-(id)defaultToneIdentifierForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)filePathForToneIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithITunesRingtonePlistAtPath:(id)arg0 ;
-(id)nameForToneIdentifier:(id)arg0 ;
-(id)subtitleForToneIdentifier:(id)arg0 ;
-(int)_lockManifestAtPath:(id)arg0 ;
-(unsigned int)currentToneSoundIDForAlertType:(NSInteger)arg0 ;
-(unsigned int)currentToneSoundIDForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg0 inDomain:(id)arg1 usingPreferencesOfKind:(NSUInteger)arg2 ;
-(void)_handleDeviceRingtonesChangedNotification;
-(void)_handleProtectionContentUnlockedEvent;
-(void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(NSUInteger)arg0 ;
-(void)_handleWatchPrefersSalientNotificationDidChange;
-(void)_loadAlertToneInfo;
-(void)_loadToneIdentifierAliasMap;
-(void)_performBlockInAccessQueue:(id)arg0 ;
-(void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
-(void)_reloadTones;
-(void)_reloadTonesAfterExternalChange;
-(void)_removeAllSyncedData;
-(void)_setCurrentOverridePolicy:(NSInteger)arg0 forAlertType:(NSInteger)arg1 ;
-(void)_setCurrentToneWatchAlertPolicy:(NSInteger)arg0 forAlertType:(NSInteger)arg1 ;
-(void)_setCurrentToneWatchAlertPolicy:(NSInteger)arg0 forAlertType:(NSInteger)arg1 accountIdentifier:(id)arg2 ;
-(void)_setCurrentToneWatchAlertPolicy:(NSInteger)arg0 forAlertType:(NSInteger)arg1 topic:(id)arg2 ;
-(void)_setWatchPrefersSalientNotifications:(BOOL)arg0 ;
-(void)dealloc;
-(void)importTone:(id)arg0 metadata:(id)arg1 completionBlock:(id)arg2 ;
-(void)removeImportedToneWithIdentifier:(id)arg0 ;
-(void)setCurrentToneIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 ;
-(void)setCurrentToneIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 accountIdentifier:(id)arg2 ;
-(void)setCurrentToneIdentifier:(id)arg0 forAlertType:(NSInteger)arg1 topic:(id)arg2 ;


@end


#endif