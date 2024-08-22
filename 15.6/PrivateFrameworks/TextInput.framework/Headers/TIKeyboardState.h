// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDSTATE_H
#define TIKEYBOARDSTATE_H

@class NSDictionary, NSArray, NSString, NSUUID, BKSHIDEventAuthenticationMessage;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardCandidate.h"
#import "TIDocumentState.h"
#import "TIInputContextHistory.h"
#import "TIKeyboardLayout.h"
#import "TIKeyboardLayoutState.h"
#import "TIKeyboardSecureCandidateRenderTraits.h"
#import "TITextInputTraits.h"

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding>

 {
    ? _mask;
    ? _autocorrectionListUIState;
}


@property (nonatomic) BOOL autocapitalizationEnabled;
@property (nonatomic) NSUInteger autocapitalizationType;
@property (nonatomic) BOOL autocorrectionEnabled;
@property (nonatomic) BOOL autocorrectionListUIAutoDisplayMode;
@property (nonatomic) BOOL autocorrectionListUIDisplayed;
@property (retain, nonatomic) NSDictionary *autofillContext; // ivar: _autofillContext
@property (nonatomic) NSUInteger autofillMode; // ivar: _autofillMode
@property (copy, nonatomic) NSArray *auxiliaryInputModeLanguages; // ivar: _auxiliaryInputModeLanguages
@property (nonatomic) BOOL canSendCurrentLocation;
@property (nonatomic) BOOL canSuggestSupplementalItemsForCurrentSelection;
@property (nonatomic) BOOL candidateSelectionPredictionEnabled;
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) TIKeyboardCandidate *currentCandidate; // ivar: _currentCandidate
@property (retain, nonatomic) NSUUID *documentIdentifier; // ivar: _documentIdentifier
@property (retain, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (nonatomic) BOOL emojiPopoverMode;
@property (nonatomic) BOOL emojiSearchMode;
@property (copy, nonatomic) BKSHIDEventAuthenticationMessage *eventAuthenticationMessage; // ivar: _eventAuthenticationMessage
@property (nonatomic) BOOL floatingKeyboardMode;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (retain, nonatomic) TIInputContextHistory *inputContextHistory; // ivar: _inputContextHistory
@property (copy, nonatomic) NSString *inputForMarkedText; // ivar: _inputForMarkedText
@property (copy, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (nonatomic) BOOL isScreenLocked;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout; // ivar: _keyLayout
@property (nonatomic) BOOL keyboardEventsLagging;
@property (nonatomic) NSUInteger keyboardType;
@property (nonatomic) BOOL landscapeOrientation;
@property (copy, nonatomic) TIKeyboardLayoutState *layoutState; // ivar: _layoutState
@property (nonatomic) BOOL longPredictionListEnabled;
@property (nonatomic) BOOL needAutofill;
@property (readonly, nonatomic) BOOL needContactAutofill;
@property (nonatomic) BOOL needOneTimeCodeAutofill;
@property (nonatomic) BOOL needsCandidateMetadata;
@property (nonatomic) BOOL omitEmojiCandidates;
@property (copy, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (copy, nonatomic) NSString *responseContext; // ivar: _responseContext
@property (copy, nonatomic) NSString *searchStringForMarkedText; // ivar: _searchStringForMarkedText
@property (copy, nonatomic) TIKeyboardSecureCandidateRenderTraits *secureCandidateRenderTraits; // ivar: _secureCandidateRenderTraits
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) int shiftState; // ivar: _shiftState
@property (nonatomic) BOOL shortcutConversionEnabled;
@property (readonly, nonatomic) BOOL shouldOutputFullwidthSpace;
@property (nonatomic) BOOL shouldSkipCandidateSelection;
@property (nonatomic) BOOL splitKeyboardMode;
@property (copy, nonatomic) NSArray *statisticChanges; // ivar: _statisticChanges
@property (nonatomic) NSUInteger supplementalLexiconIdentifier; // ivar: _supplementalLexiconIdentifier
@property (copy, nonatomic) NSArray *supportedPayloadIds; // ivar: _supportedPayloadIds
@property (nonatomic) BOOL suppressingCandidateSelection;
@property (retain, nonatomic) TITextInputTraits *textInputTraits; // ivar: _textInputTraits
@property (nonatomic) BOOL userSelectedCurrentCandidate;
@property (nonatomic) BOOL wordLearningEnabled;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_createTextInputTraitsIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif