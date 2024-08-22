// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTINPUTTRAITS_H
#define UITEXTINPUTTRAITS_H

@class NSIndexSet, NSString;
@protocol UITextInputTraits, UITextInputTraits_Private, NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIInputContextHistory.h"
#import "UITextInputPasswordRules.h"
#import "UIImage.h"
#import "_UISupplementalLexicon.h"
#import "UITextRange.h"

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying>

 {
    *__CFCharacterSet textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIColor *underlineColorForTextAlternatives;
    UIColor *underlineColorForSpelling;
    id *textSuggestionDelegate;
    ? _privateInputTraitFlags;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // ivar: PINEntrySeparatorIndexes
@property (nonatomic) BOOL acceptsDictationSearchResults; // ivar: acceptsDictationSearchResults
@property (nonatomic) BOOL acceptsEmoji; // ivar: acceptsEmoji
@property (nonatomic) BOOL acceptsFloatingKeyboard; // ivar: acceptsFloatingKeyboard
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard; // ivar: acceptsInitialEmojiKeyboard
@property (nonatomic) BOOL acceptsPayloads; // ivar: acceptsPayloads
@property (nonatomic) BOOL acceptsSplitKeyboard; // ivar: acceptsSplitKeyboard
@property (readonly, nonatomic) BOOL allowsSuggestionsOnlyMode;
@property (nonatomic) NSInteger autocapitalizationType; // ivar: autocapitalizationType
@property (copy, nonatomic) NSString *autocorrectionContext; // ivar: autocorrectionContext
@property (nonatomic) NSInteger autocorrectionType; // ivar: autocorrectionType
@property (nonatomic) BOOL contentsIsSingleValue; // ivar: contentsIsSingleValue
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder; // ivar: deferBecomingResponder
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry; // ivar: devicePasscodeEntry
@property (readonly, nonatomic) NSInteger dictationInfoKeyboardType;
@property (readonly, nonatomic) NSInteger dictationKeyboardType;
@property (nonatomic) BOOL disableHandwritingKeyboard; // ivar: disableHandwritingKeyboard
@property (nonatomic) BOOL disableInputBars; // ivar: disableInputBars
@property (nonatomic) BOOL disablePrediction; // ivar: disablePrediction
@property (nonatomic) BOOL displaySecureEditsUsingPlainText; // ivar: displaySecureEditsUsingPlainText
@property (nonatomic) BOOL displaySecureTextUsingPlainText; // ivar: displaySecureTextUsingPlainText
@property (nonatomic) int emptyContentReturnKeyType; // ivar: emptyContentReturnKeyType
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // ivar: enablesReturnKeyAutomatically
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; // ivar: enablesReturnKeyOnNonWhiteSpaceContent
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets; // ivar: floatingKeyboardEdgeInsets
@property (nonatomic) BOOL forceDefaultDictationInfo; // ivar: forceDefaultDictationInfo
@property (nonatomic) NSInteger forceDictationKeyboardType; // ivar: forceDictationKeyboardType
@property (nonatomic) BOOL forceDisableDictation; // ivar: forceDisableDictation
@property (nonatomic) BOOL forceEnableDictation; // ivar: forceEnableDictation
@property (nonatomic) BOOL forceFloatingKeyboard; // ivar: forceFloatingKeyboard
@property (nonatomic) BOOL forceSpellingDictation; // ivar: forceSpellingDictation
@property (nonatomic) BOOL hasDefaultContents; // ivar: hasDefaultContents
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidePrediction; // ivar: hidePrediction
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory; // ivar: inputContextHistory
@property (retain, nonatomic) UIColor *insertionPointColor; // ivar: _insertionPointColor
@property (nonatomic) NSUInteger insertionPointWidth; // ivar: insertionPointWidth
@property (nonatomic) BOOL isCarPlayIdiom; // ivar: isCarPlayIdiom
@property (nonatomic) BOOL isSingleLineDocument; // ivar: isSingleLineDocument
@property (nonatomic) NSInteger keyboardAppearance; // ivar: keyboardAppearance
@property (nonatomic) NSInteger keyboardType; // ivar: keyboardType
@property (nonatomic) BOOL learnsCorrections; // ivar: learnsCorrections
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage; // ivar: loadKeyboardsForSiriLanguage
@property (nonatomic) BOOL manageRecentInputs; // ivar: manageRecentInputs
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules; // ivar: passwordRules
@property (nonatomic) BOOL preferOnlineDictation; // ivar: preferOnlineDictation
@property (nonatomic) NSInteger preferredKeyboardStyle; // ivar: _preferredKeyboardStyle
@property (copy, nonatomic) NSString *recentInputIdentifier; // ivar: recentInputIdentifier
@property (copy, nonatomic) NSString *responseContext; // ivar: responseContext
@property (nonatomic) BOOL returnKeyGoesToNextResponder; // ivar: returnKeyGoesToNextResponder
@property (nonatomic) NSInteger returnKeyType; // ivar: returnKeyType
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // ivar: secureTextEntry
@property (retain, nonatomic) UIColor *selectionBarColor; // ivar: _selectionBarColor
@property (retain, nonatomic) UIColor *selectionBorderColor; // ivar: _selectionBorderColor
@property (nonatomic) CGFloat selectionBorderWidth; // ivar: _selectionBorderWidth
@property (nonatomic) CGFloat selectionCornerRadius; // ivar: _selectionCornerRadius
@property (retain, nonatomic) UIImage *selectionDragDotImage; // ivar: selectionDragDotImage
@property (nonatomic) UIEdgeInsets selectionEdgeInsets; // ivar: _selectionEdgeInsets
@property (retain, nonatomic) UIColor *selectionHighlightColor; // ivar: _selectionHighlightColor
@property (nonatomic) int shortcutConversionType; // ivar: shortcutConversionType
@property (nonatomic) BOOL showDictationButton; // ivar: showDictationButton
@property (nonatomic) NSInteger smartDashesType; // ivar: smartDashesType
@property (nonatomic) NSInteger smartInsertDeleteType; // ivar: smartInsertDeleteType
@property (nonatomic) NSInteger smartQuotesType; // ivar: smartQuotesType
@property (nonatomic) NSInteger spellCheckingType; // ivar: spellCheckingType
@property (readonly) Class superclass;
@property (retain, nonatomic) _UISupplementalLexicon *supplementalLexicon; // ivar: supplementalLexicon
@property (retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon; // ivar: supplementalLexiconAmbiguousItemIcon
@property (nonatomic) BOOL suppressReturnKeyStyling; // ivar: suppressReturnKeyStyling
@property (copy, nonatomic) NSString *textContentType; // ivar: textContentType
@property (nonatomic) int textLoupeVisibility; // ivar: textLoupeVisibility
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType; // ivar: textScriptType
@property (nonatomic) int textSelectionBehavior; // ivar: textSelectionBehavior
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing; // ivar: useAutomaticEndpointing
@property (nonatomic) BOOL useInterfaceLanguageForLocalization; // ivar: useInterfaceLanguageForLocalization
@property (nonatomic) _NSRange validTextRange; // ivar: validTextRange


+(BOOL)keyboardTypeRequiresASCIICapable:(NSInteger)arg0 ;
+(NSInteger)accessibleAppearanceForAppearance:(NSInteger)arg0 ;
+(NSInteger)configuredAppearanceForAppearance:(NSInteger)arg0 withTraitEnvironment:(id)arg1 ;
+(NSInteger)translateToUIAutocapitalizationType:(NSUInteger)arg0 ;
+(NSInteger)translateToUIAutocorrectionType:(NSUInteger)arg0 ;
+(NSInteger)translateToUIKeyboardAppearance:(NSUInteger)arg0 ;
+(NSInteger)translateToUIKeyboardType:(NSUInteger)arg0 ;
+(NSInteger)translateToUIReturnKeyType:(NSUInteger)arg0 ;
+(NSInteger)translateToUISmartInsertDeleteEnabled:(BOOL)arg0 ;
+(NSInteger)translateToUISpellCheckingType:(NSUInteger)arg0 ;
+(NSInteger)translateToUITextScriptType:(NSUInteger)arg0 ;
+(id)defaultTextInputTraits;
+(id)traitEnvironmentFromTraits:(id)arg0 ;
+(id)traitsByAdoptingTraits:(id)arg0 ;
+(id)traitsByAdoptingTraits:(id)arg0 lightweight:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)publicTraitsMatchTraits:(id)arg0 ;
-(NSInteger)updateResultComparedToTraits:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(void)_setColorsToMatchTintColor:(id)arg0 ;
-(void)dealloc;
-(void)extendedPathToObtainTraitsFrom:(id)arg0 lightweight:(BOOL)arg1 ;
-(void)fastPathToObtainTraitsFrom:(id)arg0 ;
-(void)overlayWithTITextInputTraits:(id)arg0 ;
-(void)overrideWithPrivateTraits:(id)arg0 ;
-(void)overrideWithTraits:(id)arg0 ;
-(void)setToDefaultValues;
-(void)setToSecureValues;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)takeTraitsFrom:(id)arg0 lightweight:(BOOL)arg1 ;


@end


#endif