// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIPREFERENCESCONTROLLER_H
#define TIPREFERENCESCONTROLLER_H

@class NSMutableDictionary, NSTimer, NSString, NSArray;
@protocol TIPreferencesControllerActions;

#import <Foundation/Foundation.h>


@interface TIPreferencesController : NSObject <TIPreferencesControllerActions>

 {
    NSMutableDictionary *_configuredDomains;
    NSMutableDictionary *_configuredPreferences;
    NSMutableDictionary *_cachedMCRestrictedValue;
    NSTimer *_synchronizePreferencesTimer;
}


@property (nonatomic) BOOL automaticMinimizationEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger floatingKeyboardDockedEdge;
@property (nonatomic) CGPoint floatingKeyboardPosition;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreNextSyncNotification; // ivar: _ignoreNextSyncNotification
@property (nonatomic) BOOL inhibitGlobalNotification; // ivar: _inhibitGlobalNotification
@property (copy, nonatomic) NSArray *inputModeSelectionSequence;
@property (nonatomic) BOOL isInternalInstall; // ivar: isInternalInstall
@property (nonatomic) CGPoint keyboardPosition;
@property (nonatomic) BOOL keyboardShownByTouch;
@property (nonatomic) BOOL predictionEnabled;
@property (readonly) Class superclass;


+(id)sharedPreferencesController;
+(void)registerPreferredLanguagesForInputModes:(id)arg0 replacingInputModes:(id)arg1 ;
-(BOOL)_isOneTimeAction:(id)arg0 ;
-(BOOL)allEnabledInputModesAreValid;
-(BOOL)boolForKey:(int)arg0 ;
-(BOOL)boolForPreferenceKey:(id)arg0 ;
-(BOOL)isKeyLockedDown:(int)arg0 ;
-(BOOL)isPreferenceKeyLockedDown:(id)arg0 ;
-(BOOL)oneTimeActionCompleted:(id)arg0 ;
-(id)_configuredPreferencesForDomain:(id)arg0 ;
-(id)init;
-(id)valueForKey:(int)arg0 ;
-(id)valueForPreferenceKey:(id)arg0 ;
-(int)MCValueForManagedPreferenceKey:(id)arg0 ;
-(void)_configureDomain:(id)arg0 notification:(id)arg1 ;
-(void)_configureDomains;
-(void)_configureKey:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 ;
-(void)_configureKey:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 fallbackKey:(id)arg3 ;
-(void)_configureKey:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 fallbackKey:(id)arg3 isAnalyzed:(BOOL)arg4 ;
-(void)_configureKey:(id)arg0 domain:(id)arg1 fallbackKey:(id)arg2 ;
-(void)_configureKeyForAnalytics:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 ;
-(void)_configurePreferences;
-(void)_pushValue:(id)arg0 toPreference:(id)arg1 domain:(id)arg2 ;
-(void)clearSynchronizePreferencesTimer;
-(void)dealloc;
-(void)didSeeHardwareKeyboard:(id)arg0 ;
-(void)didTriggerOneTimeAction:(id)arg0 ;
-(void)didUnseeHardwareKeyboard:(id)arg0 ;
-(void)managedKeyboardSettingDidChange:(id)arg0 ;
-(void)performWithWriteability:(BOOL)arg0 operations:(id)arg1 ;
-(void)preferencesChangedCallback:(id)arg0 ;
-(void)profileSettingDidChange:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(int)arg1 ;
-(void)setValue:(id)arg0 forManagedPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)synchronizeDomainIfNeedsGet:(id)arg0 ;
-(void)synchronizePreferences;
-(void)touchSynchronizePreferencesTimer;
-(void)updateDidPerformFirstReachableKeyboardInteraction;
-(void)updateEnableProKeyboard:(BOOL)arg0 ;
-(void)updateEnabledDictationLanguages:(id)arg0 ;
-(void)updateInputModes:(id)arg0 ;
-(void)updateKeyboardHandBias:(id)arg0 ;
-(void)updateKeyboardIsFloating:(BOOL)arg0 ;
-(void)updateKeyboardIsSplit:(BOOL)arg0 locked:(BOOL)arg1 ;
-(void)updateLastUsedDictationLanguages:(id)arg0 ;
-(void)updateLastUsedInputMode:(id)arg0 ;
-(void)updateLastUsedKeyboards:(id)arg0 ;
-(void)updateLastUsedLayout:(id)arg0 ;
-(void)updateVisceral:(id)arg0 ;


@end


#endif