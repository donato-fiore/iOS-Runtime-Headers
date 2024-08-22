// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TILANGUAGESELECTIONCONTROLLER_H
#define TILANGUAGESELECTIONCONTROLLER_H

@class NSArray, NSMutableArray, NSMutableDictionary, NSDictionary;
@protocol TILanguageSelectionControllerDelegate, TILanguageLikelihoodModeling, TIMultilingualPreferenceProviding;

#import <Foundation/Foundation.h>

#import "TILanguageModelAdaptationContext.h"
#import "TIInputMode.h"

@interface TILanguageSelectionController : NSObject {
    ? m_buffered_tokens;
}


@property (retain, nonatomic) NSArray *activeInputModes; // ivar: _activeInputModes
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // ivar: _adaptationContext
@property (readonly, nonatomic) NSMutableArray *bufferedTokenStrings; // ivar: _bufferedTokenStrings
@property (nonatomic) NSObject<TILanguageSelectionControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TIInputMode *inferredSecondaryInputMode; // ivar: _inferredSecondaryInputMode
@property (readonly, nonatomic) NSMutableDictionary *inputModeProbabilities; // ivar: _inputModeProbabilities
@property (readonly, nonatomic) NSObject<TILanguageLikelihoodModeling> *languageLikelihoodModel; // ivar: _languageLikelihoodModel
@property (readonly, nonatomic) NSObject<TIMultilingualPreferenceProviding> *preferenceProvider; // ivar: _preferenceProvider
@property (retain, nonatomic) TIInputMode *preferredSecondaryInputMode; // ivar: _preferredSecondaryInputMode
@property (retain, nonatomic) TIInputMode *primaryInputMode; // ivar: _primaryInputMode
@property (copy, nonatomic) NSDictionary *referenceInputModeProbabilities; // ivar: _referenceInputModeProbabilities
@property (retain, nonatomic) NSArray *userEnabledInputModes; // ivar: _userEnabledInputModes


+(id)inferInputModeForLanguage:(id)arg0 enabled:(id)arg1 ;
+(id)inferSecondaryInputModeForPrimary:(id)arg0 enabled:(id)arg1 ;
+(id)inferSecondaryInputModeForPrimary:(id)arg0 enabled:(id)arg1 enabledExcludingPreferredLanguages:(id)arg2 ;
+(id)inputModeForLanguageIdentifier:(id)arg0 ;
+(id)inputModesForLanguageIdentifiers:(id)arg0 ;
+(id)multilingualInputModesForInputModes:(id)arg0 ;
+(id)sharedLanguageLikelihoodModel;
+(void)reportTypedTokens:(*void)arg0 activeInputModes:(id)arg1 ;
-(BOOL)bufferIsCompatibleWithContext:(struct TITokenID *)arg0 contextLength:(NSUInteger)arg1 ;
-(BOOL)didProbabilityChangeSignificantly;
-(BOOL)updateInputModeProbabilities;
-(CGFloat)lastOfflineAdaptationTimeForApp:(id)arg0 ;
-(float)priorProbabilityForInputMode:(id)arg0 ;
-(id)fetchPreferredSecondaryInputMode;
-(id)fetchUserEnabledInputModes;
-(id)fetchUserEnabledInputModesExcludingPreferredLanguages;
-(id)init;
-(id)initWithLanguageLikelihoodModel:(id)arg0 preferenceProvider:(id)arg1 ;
-(void)addTokenString:(id)arg0 tokenID:(struct TITokenID )arg1 context:(struct TITokenID *)arg2 contextLength:(NSUInteger)arg3 ;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg0 ;
-(void)appleKeyboardsPreferencesChanged:(id)arg0 ;
-(void)dealloc;
-(void)feedBufferedTokenStringsToModel;
-(void)flushBuffer;
-(void)removeTokenString:(id)arg0 tokenID:(struct TITokenID )arg1 context:(struct TITokenID *)arg2 contextLength:(NSUInteger)arg3 ;
-(void)updateActiveInputModesSuppressingNotification:(BOOL)arg0 ;


@end


#endif