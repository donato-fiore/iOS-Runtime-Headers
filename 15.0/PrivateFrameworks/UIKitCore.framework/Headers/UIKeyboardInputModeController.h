// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDINPUTMODECONTROLLER_H
#define UIKEYBOARDINPUTMODECONTROLLER_H

@class NSArray, NSString;
@protocol UIKeyboardInputModeControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIKeyboardInputMode.h"
#import "UITextInputMode.h"

@interface UIKeyboardInputModeController : NSObject {
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSArray *_allExtensions;
    BOOL _skipExtensionInputModes;
    BOOL _excludeExtensionInputModes;
    BOOL _cacheNeedsRefresh;
    int _notifyPasscodeChangedToken;
    *__CFUserNotification _userNotification;
    *__CFRunLoopSource _userNotificationRunLoopSource;
    NSString *_newModeForUserNotification;
    NSObject *_keyboardTagForUserNotification;
    BOOL _suppressCurrentPublicInputMode;
}


@property (readonly, nonatomic) NSArray *activeDictationLanguages;
@property (readonly, nonatomic) NSArray *activeDictationSupportedInputModeIdentifiers;
@property (readonly) NSArray *activeInputModeIdentifiers;
@property (readonly) NSArray *activeUserSelectableInputModeIdentifiers;
@property (copy, nonatomic) NSArray *additionalTextInputLocales; // ivar: _additionalTextInputLocales
@property (readonly, nonatomic) NSArray *allowedExtensions; // ivar: _allowedExtensions
@property (readonly, nonatomic) BOOL containsDictationSupportedInputMode;
@property (readonly, nonatomic) BOOL containsEmojiInputMode;
@property (retain) UIKeyboardInputMode *currentInputMode;
@property (nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property (readonly, nonatomic) UIKeyboardInputMode *currentLinguisticInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *currentPublicInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *currentSystemInputMode;
@property (retain, nonatomic) UIKeyboardInputMode *currentUsedInputMode; // ivar: _currentUsedInputMode
@property (retain) NSArray *defaultInputModes; // ivar: defaultInputModes
@property (retain) NSArray *defaultKeyboardInputModes; // ivar: defaultKeyboardInputModes
@property (retain) NSArray *defaultNormalizedInputModes; // ivar: defaultNormalizedInputModes
@property (copy, nonatomic) NSArray *defaultRawInputModes; // ivar: defaultRawInputModes
@property (nonatomic) NSObject<UIKeyboardInputModeControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableFloatingKeyboardFilter; // ivar: disableFloatingKeyboardFilter
@property (nonatomic) BOOL disablesUpdateLastUsedInputModeTimer; // ivar: _disablesUpdateLastUsedInputModeTimer
@property (retain, nonatomic) UITextInputMode *documentInputMode; // ivar: _documentInputMode
@property (readonly, nonatomic) NSArray *enabledDictationLanguages;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (readonly) NSArray *enabledInputModeLanguages;
@property (retain) NSArray *enabledInputModes; // ivar: enabledInputModes
@property (retain, nonatomic) id *extensionMatchingContext; // ivar: _extensionMatchingContext
@property (readonly, nonatomic) UIKeyboardInputMode *hardwareInputMode;
@property (copy, nonatomic) NSString *inputModeContextIdentifier; // ivar: _inputModeContextIdentifier
@property (readonly) NSArray *inputModesWithoutHardwareSupport;
@property (retain) NSArray *keyboardInputModeIdentifiers; // ivar: keyboardInputModeIdentifiers
@property (retain) NSArray *keyboardInputModes; // ivar: keyboardInputModes
@property (nonatomic) BOOL lastInputModeSwitchTriggeredByASCIIToggle; // ivar: _lastInputModeSwitchTriggeredByASCIIToggle
@property (retain, nonatomic) UIKeyboardInputMode *lastUsedInputMode; // ivar: _lastUsedInputMode
@property (readonly, nonatomic) UIKeyboardInputMode *lastUsedInputModeForCurrentContext;
@property (retain, nonatomic) UIKeyboardInputMode *nextInputModeToUse; // ivar: _nextInputModeToUse
@property (readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property (retain) NSArray *normalizedInputModes; // ivar: normalizedInputModes
@property (nonatomic) BOOL shouldRunContinuousDiscovery; // ivar: _shouldRunContinuousDiscovery
@property (retain) NSArray *suggestedInputModesForSiriLanguage; // ivar: suggestedInputModesForSiriLanguage
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (retain) NSArray *userSelectableKeyboardInputModeIdentifiers; // ivar: _userSelectableKeyboardInputModeIdentifiers
@property (retain) NSArray *userSelectableKeyboardInputModes; // ivar: _userSelectableKeyboardInputModes


+(BOOL)dictationInputModeIsFunctional;
+(id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+(id)disallowedDictationLanguagesForDeviceLanguage;
+(id)inputModeIdentifierForPreferredLanguages:(id)arg0 passingTest:(id)arg1 ;
+(id)sharedInputModeController;
-(BOOL)_mayContainExtensionInputModes;
-(BOOL)currentLocaleRequiresExtendedSetup;
-(BOOL)deviceStateIsLocked;
-(BOOL)identifierIsValidSystemInputMode:(id)arg0 ;
-(BOOL)isDictationLanguageEnabled:(id)arg0 ;
-(BOOL)isLockscreenPasscodeKeyboard;
-(BOOL)verifyKeyboardExtensionsWithApp;
-(id)_MCFilteredExtensionIdentifiers;
-(id)_allExtensionsFromMatchingExtensions:(id)arg0 ;
-(id)_systemInputModePassingLanguageTest:(id)arg0 ;
-(id)_systemInputModePassingTest:(id)arg0 ;
-(id)activeInputModes;
-(id)activeUserSelectableInputModes;
-(id)appendPasscodeInputModes:(id)arg0 ;
-(id)currentSystemInputModeExcludingEmoji:(BOOL)arg0 ;
-(id)defaultDictationLanguages:(id)arg0 ;
-(id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg0 ;
-(id)enabledInputModeIdentifiers:(BOOL)arg0 ;
-(id)extensionInputModes;
-(id)fallbackCurrentInputModeForFilteredInputMode:(id)arg0 fromInputModes:(id)arg1 ;
-(id)fallbackCurrentInputModeForFilteredInputModeIdentifier:(id)arg0 fromInputModeIdentifiers:(id)arg1 ;
-(id)filteredInputModesForSiriLanguageFromInputModes:(id)arg0 ;
-(id)filteredPadInputModesFromInputModes:(id)arg0 withRules:(id)arg1 ;
-(id)filteredTVInputModesFromInputModes:(id)arg0 ;
-(id)fullInputModeFromIdentifier:(id)arg0 hardwareKeyboardLanguage:(id)arg1 ;
-(id)getDictationSLSLanguagesEnabled;
-(id)hardwareLayoutToUseForInputMode:(id)arg0 ;
-(id)hardwareLayoutToUseForInputMode:(id)arg0 hardwareKeyboardLanguage:(id)arg1 countryCode:(id)arg2 ;
-(id)identifiersFromInputModes:(id)arg0 ;
-(id)init;
-(id)inputModeByReplacingSoftwareLayoutWithSoftwareLayout:(id)arg0 inInputMode:(id)arg1 ;
-(id)inputModeForASCIIToggleWithTraits:(id)arg0 ;
-(id)inputModeIdentifierLastUsedForLanguage:(id)arg0 ;
-(id)inputModeIdentifierLastUsedForLanguage:(id)arg0 includingExtensions:(BOOL)arg1 ;
-(id)inputModeLastUsedForLanguage:(id)arg0 ;
-(id)inputModeLastUsedForLanguage:(id)arg0 includingExtensions:(BOOL)arg1 ;
-(id)inputModeToAddForKeyboardLanguage:(id)arg0 countryCode:(id)arg1 activeModes:(id)arg2 ;
-(id)inputModeWithIdentifier:(id)arg0 ;
-(id)inputModesByAppendingApplicationLanguagesToInputModes:(id)arg0 ;
-(id)inputModesFromIdentifiers:(id)arg0 ;
-(id)keyboardLanguageForDictationLanguage:(id)arg0 ;
-(id)lastUsedInputModeForTextInputMode:(id)arg0 ;
-(id)nextInputModeFromList:(id)arg0 withFilter:(NSUInteger)arg1 withTraits:(id)arg2 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg0 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg0 updatePreference:(BOOL)arg1 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg0 updatePreference:(BOOL)arg1 skipEmoji:(BOOL)arg2 ;
-(id)nextInputModeToUseForTraits:(id)arg0 ;
-(id)nextInputModeToUseForTraits:(id)arg0 updatePreference:(BOOL)arg1 ;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(id)suggestedInputModesForCurrentHardwareKeyboardAndSuggestedInputModes:(id)arg0 ;
-(id)suggestedInputModesForCurrentLocale;
-(id)suggestedInputModesForCurrentLocale:(BOOL)arg0 fallbackToDefaultInputModes:(BOOL)arg1 ;
-(id)suggestedInputModesForHardwareKeyboardLanguage:(id)arg0 countryCode:(id)arg1 inputModes:(id)arg2 ;
-(id)suggestedInputModesForLocales:(id)arg0 ;
-(id)suggestedInputModesForPreferredLanguages;
-(id)supportedFullModesForHardwareKeyboard:(id)arg0 countryCode:(id)arg1 activeModes:(id)arg2 matchedMode:(*id)arg3 ;
-(id)supportedInputModesFromArray:(id)arg0 ;
-(id)textInputModeForResponder:(id)arg0 ;
-(id)updateEnabledDictationLanguages:(BOOL)arg0 ;
-(id)userSelectableInputModeIdentifiersFromInputModeIdentifiers:(id)arg0 ;
-(id)userSelectableInputModesFromInputModes:(id)arg0 ;
-(void)_beginContinuousDiscoveryIfNeeded;
-(void)_clearAllExtensions;
-(void)_clearAllExtensionsIfNeeded;
-(void)_inputModeChangedWhileContextTracked;
-(void)_removeInputModes:(id)arg0 ;
-(void)_setCurrentAndNextInputModePreference;
-(void)_trackInputModeIfNecessary:(id)arg0 ;
-(void)changePreferredEmojiSearchInputModeForInputDelegate:(id)arg0 ;
-(void)clearNextInputModeToUse;
-(void)dealloc;
-(void)didAcceptAddKeyboardInputMode;
-(void)didEnterBackground:(id)arg0 ;
-(void)forceDictationReturnToKeyboardInputMode;
-(void)getHardwareKeyboardLanguage:(*id)arg0 countryCode:(*id)arg1 ;
-(void)handleLastUsedInputMode:(id)arg0 withNewInputMode:(id)arg1 ;
-(void)handleSpecificHardwareKeyboard:(id)arg0 ;
-(void)keyboardsPreferencesChanged:(id)arg0 ;
-(void)loadSuggestedInputModesForSiriLanguage;
-(void)performWithForcedExtensionInputModes:(id)arg0 ;
-(void)performWithoutExtensionInputModes:(id)arg0 ;
-(void)releaseAddKeyboardNotification;
-(void)saveDeviceUnlockPasscodeInputModes;
-(void)setDictationSLSLanguagesEnabled:(id)arg0 ;
-(void)showAddKeyboardAlertForInputModeIdentifier:(id)arg0 ;
-(void)startConnectionForFileAtURL:(id)arg0 forInputModeIdentifier:(id)arg1 ;
-(void)startDictationConnectionForFileAtURL:(id)arg0 forInputModeIdentifier:(id)arg1 ;
-(void)stopDictation;
-(void)stopDictationAndResignFirstResponder;
-(void)switchToCurrentSystemInputMode;
-(void)switchToDictationInputMode;
-(void)switchToDictationInputModeWithOptions:(id)arg0 ;
-(void)updateCurrentAndNextInputModes;
-(void)updateCurrentInputMode:(id)arg0 ;
-(void)updateDefaultInputModesIfNecessaryForIdiom;
-(void)updateEnabledDictationAndSLSLanguagesWithCompletionBlock:(id)arg0 ;
-(void)updateLastUsedInputMode:(id)arg0 ;
-(void)updateUserSelectableInputModes;
-(void)willEnterForeground:(id)arg0 ;


@end


#endif