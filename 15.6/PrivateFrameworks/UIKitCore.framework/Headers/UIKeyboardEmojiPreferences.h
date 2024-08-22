// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJIPREFERENCES_H
#define UIKEYBOARDEMOJIPREFERENCES_H

@class EMFEmojiPreferencesClient, NSArray, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UIKeyboardEmojiPreferences : NSObject {
    EMFEmojiPreferencesClient *_preferencesClient;
    NSObject<OS_dispatch_queue> *_clientDispatchQueue;
    NSArray *_localRecentsWithClient;
    NSArray *_localRecentsWithoutClient;
    BOOL _deviceWasLockedWhenKeyboardWasShown;
}


@property (nonatomic) BOOL hasCheckedMemojiPreference; // ivar: _hasCheckedMemojiPreference
@property (readonly, nonatomic) BOOL hasDisplayedSkinToneHelp;
@property (nonatomic) NSUInteger maximumRecentsCount;
@property (readonly, nonatomic) EMFEmojiPreferencesClient *preferencesClient;
@property (retain, nonatomic) NSArray *recents;
@property (nonatomic) NSInteger selectedCategoryType;
@property (retain, nonatomic) NSDictionary *skinToneBaseKeyPreferences;
@property (nonatomic) BOOL supportsMemoji; // ivar: _supportsMemoji


+(id)sharedInstance;
-(BOOL)deviceSupportsMemoji;
-(BOOL)hasLastUsedVariantForEmojiString:(id)arg0 ;
-(BOOL)memojiSettingEnabled;
-(BOOL)shouldShowRecents;
-(NSInteger)emojiCategoryDefaultsIndex:(id)arg0 ;
-(id)emojiWithoutDuplicateRecents:(id)arg0 ;
-(id)init;
-(id)lastUsedVariantEmojiForEmojiString:(id)arg0 ;
-(id)recentEmojiAtIndex:(NSInteger)arg0 size:(*NSUInteger)arg1 ;
-(id)typingNameForEmoji:(id)arg0 language:(id)arg1 ;
-(void)_updateCachedDeviceLockState;
-(void)_usageForEmoji:(id)arg0 language:(id)arg1 mode:(id)arg2 typingName:(id)arg3 ;
-(void)clearEmojiKeyboardPreferenceClient;
-(void)clearLocalRecentsCache;
-(void)dealloc;
-(void)didDisplaySkinToneHelp;
-(void)emojiPredicted:(id)arg0 typingName:(id)arg1 language:(id)arg2 ;
-(void)emojiUsed:(id)arg0 ;
-(void)emojiUsed:(id)arg0 language:(id)arg1 ;
-(void)emojiUsed:(id)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)handleRead:(id)arg0 ;
-(void)handleSuspend:(id)arg0 ;
-(void)handleWrite:(id)arg0 ;
-(void)readEmojiDefaults;
-(void)refreshLocalRecents;
-(void)setEmojiCategoryDefaultsIndex:(NSInteger)arg0 forCategory:(id)arg1 ;
-(void)updateSkinToneBaseKey:(id)arg0 variantUsed:(id)arg1 ;
-(void)writeEmojiDefaults;


@end


#endif