// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACPREFERENCES_H
#define CACPREFERENCES_H

@class NSDictionary, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CACPreferences : NSObject {
    NSDictionary *_builtInCommandsTableCache;
    NSMutableDictionary *_builtInLocalizedCommandStringsByLocaleIdentifier;
    NSMutableArray *_propertyTransactions;
}




+(id)sharedPreferences;
-(BOOL)additionalLoggingForCommands;
-(BOOL)allowLetterKeysAsTapCommands;
-(BOOL)commandAndControlIsEnabled;
-(BOOL)didShowOnboarding;
-(BOOL)forceAllCommandsToBeActive;
-(BOOL)gridOverlayCustomColumnsEnabled;
-(BOOL)gridOverlayCustomRowsEnabled;
-(BOOL)gridOverlayMaxDensityEnabled;
-(BOOL)gridOverlayPressOnFirstLevelEnabled;
-(BOOL)gridOverlayShowsNumbersInTopLeft;
-(BOOL)hidePreferencesForCommandSetIdentifier:(id)arg0 ;
-(BOOL)isCommandIdentifier:(id)arg0 availableForLocaleIdentifier:(id)arg1 ;
-(BOOL)isConfirmationRequiredForCommandIdentifier:(id)arg0 ;
-(BOOL)isEnabledForCommandIdentifier:(id)arg0 ;
-(BOOL)overlayFadingEnabled;
-(BOOL)playSoundUponRecognition;
-(BOOL)shouldDisableDeviceIdleTimer;
-(BOOL)showTextResponseUponRecognition;
-(BOOL)sleepOnAttentionLost;
-(BOOL)wakeOnAttentionGained;
-(CGFloat)lastCommandDate;
-(CGFloat)overlayFadeDelay;
-(NSInteger)correctionCount;
-(NSInteger)gridOverlayCustomColumnsCount;
-(NSInteger)gridOverlayCustomRowsCount;
-(NSInteger)gridOverlayMaxLevel;
-(NSInteger)messageTracesSinceLastReport;
-(NSInteger)userHintsFeatures;
-(float)overlayFadeOpacity;
-(id)_allPropertyIdentifiers;
-(id)_commandIdentifiersForCommandSetIdentifier:(id)arg0 localeIdentifier:(id)arg1 enabledOnly:(BOOL)arg2 ;
-(id)_mutablePropertiesForIdentifier:(id)arg0 create:(BOOL)arg1 ;
-(id)_pathToBuiltinCommandsCatalog;
-(id)_propertiesForIdentifier:(id)arg0 ;
-(id)allCustomCommandProperties;
-(id)alwaysShowOverlayType;
-(id)attentionAwareAction;
-(id)availableCommandSetIdentifiers;
-(id)bestLocaleIdentifier;
-(id)builtInCommandsStringsTableForLocaleIdentifier:(id)arg0 ;
-(id)builtInCommandsTable;
-(id)commandCounts;
-(id)commandIdentifiersForCommandSetIdentifier:(id)arg0 localeIdentifier:(id)arg1 ;
-(id)displayNameForCommandSetIdentifier:(id)arg0 ;
-(id)divertedCommandsLogPath;
-(id)enabledCommandIdentifiersForCommandSetIdentifier:(id)arg0 ;
-(id)externalContextOverrideFilePath;
-(id)init;
-(id)localeIdentifier;
-(id)localeIdentifiersRepresentedByAllVocabularyEntries;
-(id)propertiesForCommandIdentifier:(id)arg0 ;
-(id)propertiesForCommandIdentifier:(id)arg0 localeIdentifier:(id)arg1 ;
-(id)rawCustomCommandsPreferencesDictionary;
-(id)recentCommandEntries;
-(id)setOfApplicationIdentifiersUsedByCustomCommands;
-(id)targetApplicationCounts;
-(id)targetApplicationProperties;
-(id)textDisambiguationStrategy;
-(id)uniqueCustomCommandIdentifier;
-(id)userHintsHistory;
-(id)userSelectableLocaleIdentifiers;
-(id)vocabularyEntries;
-(id)vocabularyEntriesForLocaleIdentifier:(id)arg0 ;
-(void)_flushBuiltInCommandsStringsTable;
-(void)_propertyTransactionPostNotification:(id)arg0 identifier:(id)arg1 ;
-(void)_propertyTransactionSynchronize;
-(void)_setProperties:(id)arg0 forIdentifier:(id)arg1 client:(BOOL)arg2 ;
-(void)_writeDefaultCommandSettingsIfNecessary;
-(void)addOrUpdateCommandPropertiesFromImportedTable:(id)arg0 ;
-(void)addVocabularyEntryWithString:(id)arg0 ;
-(void)addVocabularyEntryWithString:(id)arg0 forLocaleIdentifier:(id)arg1 ;
-(void)beginPropertyTransaction;
-(void)deleteAllCustomCommandEntries;
-(void)endPropertyTransaction;
-(void)fixMissingLocalesForVocabularyEntriesIfNecessary;
-(void)removePropertiesForCommandIdentifier:(id)arg0 ;
-(void)removeUserCommandHistory;
-(void)setAdditionalLoggingForCommands:(BOOL)arg0 ;
-(void)setAllowLetterKeysAsTapCommands:(BOOL)arg0 ;
-(void)setAlwaysShowOverlayType:(id)arg0 ;
-(void)setAttentionAwareAction:(id)arg0 ;
-(void)setCommandAndControlEnabled:(BOOL)arg0 ;
-(void)setCommandCounts:(id)arg0 ;
-(void)setCorrectionCount:(NSInteger)arg0 ;
-(void)setDidShowOnboarding:(BOOL)arg0 ;
-(void)setGridOverlayCustomColumnsCount:(NSInteger)arg0 ;
-(void)setGridOverlayCustomColumnsEnabled:(BOOL)arg0 ;
-(void)setGridOverlayCustomRowsCount:(NSInteger)arg0 ;
-(void)setGridOverlayCustomRowsEnabled:(BOOL)arg0 ;
-(void)setGridOverlayMaxDensityEnabled:(BOOL)arg0 ;
-(void)setGridOverlayMaxLevel:(NSInteger)arg0 ;
-(void)setGridOverlayPressOnFirstLevelEnabled:(BOOL)arg0 ;
-(void)setGridOverlayShowsNumbersInTopLeft:(BOOL)arg0 ;
-(void)setLastCommandDate:(CGFloat)arg0 ;
-(void)setLocaleIdentifier:(id)arg0 ;
-(void)setMessageTracesSinceLastReport:(NSInteger)arg0 ;
-(void)setOverlayFadeDelay:(CGFloat)arg0 ;
-(void)setOverlayFadeOpacity:(float)arg0 ;
-(void)setOverlayFadingEnabled:(BOOL)arg0 ;
-(void)setPlaySoundUponRecognition:(BOOL)arg0 ;
-(void)setProperties:(id)arg0 forCommandIdentifier:(id)arg1 ;
-(void)setProperties:(id)arg0 forCommandIdentifier:(id)arg1 client:(BOOL)arg2 ;
-(void)setRecentCommandEntries:(id)arg0 ;
-(void)setShowTextResponseUponRecognition:(BOOL)arg0 ;
-(void)setSleepOnAttentionLost:(BOOL)arg0 ;
-(void)setTargetApplicationCounts:(id)arg0 ;
-(void)setTargetApplicationProperties:(id)arg0 ;
-(void)setTextDisambiguationStrategy:(id)arg0 ;
-(void)setUserHintsFeatures:(NSInteger)arg0 ;
-(void)setUserHintsHistory:(id)arg0 ;
-(void)setVocabularyEntries:(id)arg0 ;
-(void)setVocabularyEntries:(id)arg0 forLocaleIdentifier:(id)arg1 ;
-(void)setWakeOnAttentionGained:(BOOL)arg0 ;


@end


#endif