// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSERECIPIENTVIEW_H
#define MFCOMPOSERECIPIENTVIEW_H

@class NSArray, NSCountedSet, NSTimer, UITapGestureRecognizer, UIFont, UIView, NSMutableDictionary, NSString, UITextField;
@protocol MFCorecipientsIndicatorAtomDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, MFComposeRecipientAtomDelegate, MFComposeRecipientViewDelegate;


#import "MFComposeHeaderView.h"
#import "MFModernComposeRecipientAtom.h"
#import "MFComposeRecipient.h"
#import "MFCorecipientsIndicatorAtom.h"

@interface MFComposeRecipientView : MFComposeHeaderView <MFCorecipientsIndicatorAtomDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, MFComposeRecipientAtomDelegate>

 {
    NSArray *_textFieldConstraints;
    NSCountedSet *_uncommentedAddresses;
    *__CFDictionary _atomPresentationOptionsByRecipient;
    MFModernComposeRecipientAtom *_selectedAtom;
    MFComposeRecipient *_placeholderRecipient;
    NSInteger _dragSourceOriginalIndex;
    BOOL _picking;
    NSArray *_properties;
    BOOL _parentIsClosing;
    BOOL _deselectOnNextKeyboardInput;
    BOOL _clearSelectionUIAfterFirstResponder;
    NSTimer *_delayTimer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _needsReflow;
    BOOL _needsLayoutConstraintUpdate;
    UIFont *_baseFont;
}


@property (readonly, nonatomic) UIView *addButton; // ivar: _addButton
@property (copy, nonatomic) NSArray *addresses;
@property (nonatomic) BOOL allowsDragAndDrop; // ivar: _allowsDragAndDrop
@property (retain, nonatomic) NSMutableDictionary *atoms; // ivar: _atoms
@property (retain, nonatomic) UIFont *baseFont;
@property (retain, nonatomic) MFCorecipientsIndicatorAtom *corecipientsIndicator; // ivar: _corecipientsIndicatorAtom
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultAtomPresentationOptions; // ivar: _defaultAtomPresentationOptions
@property (weak, nonatomic) NSObject<MFComposeRecipientViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didIgnoreFirstResponderResign; // ivar: _didIgnoreFirstResponderResign
@property (nonatomic) BOOL editable; // ivar: _editable
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (nonatomic) int hideLastAtomComma; // ivar: _hideLastAtomComma
@property (nonatomic) CGFloat inputDelay; // ivar: _inputDelay
@property (nonatomic) NSInteger maxRecipients; // ivar: _maxRecipients
@property (readonly, nonatomic) NSInteger numberOfRowsOfTextInField;
@property (readonly, nonatomic) CGFloat offsetForRowWithTextField;
@property (retain, nonatomic) MFComposeRecipient *placeholderRecipient;
@property (readonly, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden; // ivar: _separatorHidden
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


-(BOOL)_addable;
-(BOOL)becomeFirstResponder;
-(BOOL)containsAddress:(id)arg0 ;
-(BOOL)finishEnteringRecipient;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasContent;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)keyboardInputShouldDelete:(id)arg0 ;
-(BOOL)mf_chooseSelectedSearchResultForTextField:(id)arg0 ;
-(BOOL)mf_presentSearchResultsForTextField:(id)arg0 ;
-(BOOL)mf_textFieldShowingSearchResults:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_topRowTextWidth;
-(CGFloat)textFieldOffsetForNumberOfRowsToScroll:(NSUInteger)arg0 numberOfRowsAboveField:(NSInteger)arg1 ;
-(NSUInteger)_addressAtomPresentationOptionsForRecipient:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)uncommentedAddresses;
-(void)_addRecord:(*void)arg0 identifier:(int)arg1 ;
-(void)_addUncommentedAddress:(id)arg0 ;
-(void)_cancelDelayTimer;
-(void)_delayTimerFired:(id)arg0 ;
-(void)_deleteSelectedAtom;
-(void)_deselectAtom;
-(void)_reflowAnimated:(BOOL)arg0 ;
-(void)_removeAddressAtomPresentationOptionsForRecipient:(id)arg0 ;
-(void)_removeAllRecipients;
-(void)_removeUncommentedAddress:(id)arg0 ;
-(void)_setNeedsLayoutConstraintUpdate;
-(void)_setNeedsReflow;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)_updateLayoutConstraintsAndGetNumberOfRows:(*NSUInteger)arg0 textFieldWillBeLastRow:(*BOOL)arg1 ;
-(void)addAddress:(id)arg0 ;
-(void)addButtonClicked:(id)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)addRecipient:(id)arg0 index:(NSUInteger)arg1 animate:(BOOL)arg2 ;
-(void)addRecord:(*void)arg0 property:(int)arg1 identifier:(int)arg2 ;
-(void)clearAllAddressAtomPresentationOptions;
-(void)clearText;
-(void)composeRecipientAtomSelectNext:(id)arg0 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg0 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg0 ;
-(void)dealloc;
-(void)deselectComposeRecipientAtom:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didTapShowCorecipientsForIndicatorAtom:(id)arg0 recipients:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)mf_dismissSearchResults:(id)arg0 ;
-(void)mf_recipientTextField:(id)arg0 didAddRecipientAddress:(id)arg1 ;
-(void)mf_selectNextSearchResultForTextField:(id)arg0 ;
-(void)mf_selectPreviousSearchResultForTextField:(id)arg0 ;
-(void)parentDidClose;
-(void)parentWillClose;
-(void)reflow;
-(void)refreshPreferredContentSize;
-(void)removeRecipient:(id)arg0 ;
-(void)selectComposeRecipientAtom:(id)arg0 ;
-(void)setAddressAtomPresentationOptions:(NSUInteger)arg0 forRecipient:(id)arg1 ;
-(void)setLabel:(id)arg0 ;
-(void)setProperties:(id)arg0 ;
-(void)setProperty:(int)arg0 ;
-(void)showCorecipientIndicator:(BOOL)arg0 withCorecipients:(id)arg1 animated:(BOOL)arg2 ;
-(void)textChanged:(id)arg0 ;
-(void)textFieldDidBecomeFirstResponder:(id)arg0 ;
-(void)textFieldDidResignFirstResponder:(id)arg0 ;


@end


#endif