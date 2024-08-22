// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTLANGUAGESELECTIONCONTROLLER_H
#define PKTEXTINPUTLANGUAGESELECTIONCONTROLLER_H

@class UIMenu, NSMutableDictionary, NSTimer, NSArray, NSString, UIImage;
@protocol PKTextInputLanguageSelectionTokenStore;

#import <Foundation/Foundation.h>


@interface PKTextInputLanguageSelectionController : NSObject <PKTextInputLanguageSelectionTokenStore>

 {
    UIMenu *_cachedLanguageMenu;
    NSMutableDictionary *_observers;
    NSTimer *_iconDisplayTimer;
}


@property (copy, nonatomic) NSArray *_cachedLanguageIdentifiers; // ivar: __cachedLanguageIdentifiers
@property (readonly, copy, nonatomic) NSArray *currentLanguageIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *languageIdentificationIcon;
@property (readonly, nonatomic) UIMenu *languageSelectionMenu;
@property (readonly) Class superclass;


+(BOOL)hasSomeSupportedAndEnabledLocale;
+(id)_filterEnglishWithLanguages:(id)arg0 outRemapTarget:(*id)arg1 ;
+(id)_inputModesForTesting;
+(id)_preferencesLanguagesForTesting;
+(id)_preferredLanguagesForTesting;
+(id)_preferredRecognitionLocaleIdentifierFromIdentifiers:(id)arg0 ;
+(id)_sortedStringsArray:(id)arg0 withArray:(id)arg1 ;
+(id)filteredEnabledLocaleIdentifiers;
+(id)sharedInstance;
+(id)supportedAndEnabledLocaleIdentifiers;
+(void)_enumerateSupportedAndEnabledLocaleIdentifiersWithBlock:(id)arg0 ;
+(void)_getNormalizedLanguageIdentifier:(*id)arg0 dedupLanguageKey:(*id)arg1 forInputMode:(id)arg2 ;
+(void)_getNormalizedLanguageIdentifier:(*id)arg0 dedupLanguageKey:(*id)arg1 forInputModeIdentifier:(id)arg2 ;
// +(void)_performOperations:(id)arg0 withActiveInputModeIdentifiers:(unk)arg1 preferencesLanguages:(id)arg2 preferredLanguages:(id)arg3  ;
// +(void)_performOperations:(id)arg0 withActiveInputModes:(unk)arg1 preferencesLanguages:(id)arg2 preferredLanguages:(id)arg3  ;
+(void)set_inputModesForTesting:(id)arg0 ;
+(void)set_preferencesLanguagesForTesting:(id)arg0 ;
+(void)set_preferredLanguagesForTesting:(id)arg0 ;
-(BOOL)shouldIdentifyLanguages;
-(id)_currentKeyboardIdentifier;
-(id)_enabledLanguagesByPreference;
-(id)_iconForLanguageIdentifier:(id)arg0 ;
-(id)init;
-(id)registerObserver:(id)arg0 ;
-(void)_clearCachesAndUpdateIconObservers;
-(void)_handleKeyboardCurrentInputModeChanged:(id)arg0 ;
-(void)_handleKeyboardPreferencesChanged:(id)arg0 ;
-(void)_notifyLanguageObserversIncludingIcon:(BOOL)arg0 ;
-(void)_pencilPreferencesChangedCallback:(id)arg0 ;
-(void)_switchToLanguageIfSupported:(id)arg0 ;
-(void)_updateLanguageMenuIfNecessary;
-(void)_updateSelectedLanguageInCachedMenu;
-(void)_updateWithLanguageIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)ensureKeyboardLanguageConsistencyIfNeeded;
-(void)notifyObserversOfCurrentLanguageWithTimeout;
-(void)removeObserver:(id)arg0 ;


@end


#endif