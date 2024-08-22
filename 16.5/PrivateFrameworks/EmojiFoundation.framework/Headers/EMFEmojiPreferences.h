// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFEMOJIPREFERENCES_H
#define EMFEMOJIPREFERENCES_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSString;
@protocol EMFEmojiPreferenceActions;

#import <Foundation/Foundation.h>


@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions>

 {
    NSMutableDictionary *_defaults;
    BOOL _isDefaultDirty;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_typingNames;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_categoryIndexes;
    NSInteger _currentSequence;
}


@property (readonly, nonatomic) NSArray *allRecents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDisplayedSkinToneHelp;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumRecentsCount; // ivar: _maximumRecentsCount
@property (readonly, nonatomic) NSString *previouslyUsedCategory;
@property (readonly, nonatomic) NSArray *recentEmojis;
@property (readonly) Class superclass;


+(BOOL)deviceStateIsLocked;
+(id)_allRecentStrings;
+(id)_cacheDomain;
+(id)_cachedFlagCategoryEmoji:(id)arg0 ;
+(id)_recentEmojiStrings;
+(id)_recentStringsInCharacterSet:(id)arg0 ;
+(id)defaultsDomain;
-(BOOL)hasLastUsedVariantForEmoji:(id)arg0 ;
-(BOOL)shouldCountEmojiStringForUsageHistory:(id)arg0 ;
-(CGFloat)scoreForEmojiString:(id)arg0 ;
-(CGFloat)scoreForSequence:(NSInteger)arg0 ;
-(NSUInteger)previouslyUsedIndexInCategory:(id)arg0 ;
-(id)init;
-(id)lastUsedVariantEmojiForEmoji:(id)arg0 ;
-(id)recentVariantEmojiForEmoji:(id)arg0 ;
-(id)recentsInCharacterSet:(id)arg0 ;
-(id)typingNameForEmoji:(id)arg0 ;
-(void)_checkForDingbatDuplicates;
-(void)_cleanUpOldFlagsCaches;
-(void)_pruneInvalidEmojiFromHistory;
-(void)_pruneOldestEmojiUsageFromHistory;
-(void)_readPreferencesFromDefaults;
-(void)_setRecentStrings:(id)arg0 ;
-(void)didDisplaySkinToneHelp;
-(void)didUseEmoji:(id)arg0 ;
-(void)didUseEmoji:(id)arg0 usageMode:(id)arg1 ;
-(void)didUseEmoji:(id)arg0 usageMode:(id)arg1 typingName:(id)arg2 ;
-(void)didViewEmojiIndex:(NSInteger)arg0 forCategory:(id)arg1 ;
-(void)loadDefaultsIfNecessary;
-(void)migrateFromMajorOSVersion:(NSInteger)arg0 ;
-(void)migrateInDidDisplaySkinToneHelp:(BOOL)arg0 ;
-(void)migrateInPreviouslyUsedCategory:(id)arg0 ;
-(void)migrateInPreviouslyUsedCategoryIndexes:(id)arg0 ;
-(void)migrateInRecentEmoji:(id)arg0 usages:(id)arg1 typingNames:(id)arg2 ;
-(void)migrateInSkinTonePreferences:(id)arg0 ;
-(void)readEmojiDefaults;
-(void)resetEmojiDefaults;
-(void)writeEmojiDefaults;
-(void)writeEmojiDefaultsAndNotify:(BOOL)arg0 ;


@end


#endif