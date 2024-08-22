// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSERECIPIENTTEXTVIEW_H
#define MFCOMPOSERECIPIENTTEXTVIEW_H

@class UITextView, UIColor, NSMutableArray, NSMutableDictionary, NSTimer, NSArray, NSUndoManager, UIButton, UIView, UIFont, NSString;
@protocol UITextViewDelegate, NSLayoutManagerDelegate, MFComposeRecipientAtomDelegate, MFRecipientDraggingDelegate, MFComposeRecipientTextViewDelegate;


#import "MFComposeHeaderView.h"
#import "_MFAtomTextView.h"
#import "MFDragSource.h"
#import "MFDropTarget.h"
#import "_MFAtomTextAttachment.h"

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFComposeRecipientAtomDelegate, MFRecipientDraggingDelegate>

 {
    _MFAtomTextView *_textView;
    UITextView *_inactiveTextView;
    UIColor *_inactiveTextColor;
    NSMutableArray *_atomViews;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSMutableDictionary *_atomLayoutOptionsByRecipient;
    MFDragSource *_dragSource;
    MFDropTarget *_dropTarget;
    CGRect _currentTextRect;
    NSInteger _atomViewAnimationDepth;
    BOOL _parentIsClosing;
    BOOL _textViewExclusionPathsAreValid;
    BOOL _isTextFieldCollapsed;
    BOOL _collapsedStateInitialized;
    BOOL _notifyDelegateOfSizeChange;
    NSTimer *_collapsableUpdateTimer;
    NSArray *_properties;
    NSMutableArray *_recipientsBeingRemoved;
    NSUndoManager *_undoManager;
    CGRect _addButtonFrame;
}


@property (readonly, nonatomic) UIButton *addButton; // ivar: _addButton
@property (copy, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) UIView *atomContainerView; // ivar: _atomContainerView
@property (retain, nonatomic) UIFont *baseFont; // ivar: _baseFont
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFComposeRecipientTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didIgnoreFirstResponderResign; // ivar: _didIgnoreFirstResponderResign
@property (nonatomic) BOOL editable; // ivar: _editable
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (nonatomic) int hideLastAtomComma; // ivar: _hideLastAtomComma
@property (retain, nonatomic) UIColor *inactiveTextColor;
@property (nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed; // ivar: _indicatesUnsafeRecipientsWhenCollapsed
@property (nonatomic) NSInteger maxRecipients; // ivar: _maxRecipients
@property (readonly, nonatomic) NSUInteger numberOfRowsOfTextInField;
@property (readonly, nonatomic) CGFloat offsetForRowWithTextField;
@property (retain, nonatomic) _MFAtomTextAttachment *placeholderAttachment; // ivar: _placeholderAttachment
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden; // ivar: _separatorHidden
@property (nonatomic) BOOL showsAddButtonWhenExpanded; // ivar: _showsAddButtonWhenExpanded
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIColor *typingTextColor; // ivar: _typingTextColor
@property (readonly, copy, nonatomic) NSArray *uncommentedAddresses;


+(id)defaultFont;
-(BOOL)_canAddAdditionalAtoms;
-(BOOL)_hasUnsafeRecipients;
-(BOOL)_isAddButtonVisible;
-(BOOL)_isTextViewCollapsed;
-(BOOL)_shouldAnimateAtomViewChanges;
-(BOOL)_shouldEmbedLabelInTextView;
-(BOOL)_useRightToLeftLayout;
-(BOOL)becomeFirstResponder;
-(BOOL)containsAddress:(id)arg0 ;
-(BOOL)finishEnteringRecipient;
-(BOOL)hasContent;
-(BOOL)isFirstResponder;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(CGFloat)textFieldOffsetForNumberOfRowsToScroll:(NSUInteger)arg0 numberOfRowsAboveField:(NSInteger)arg1 ;
-(NSUInteger)_atomPresentationOptionsForRecipient:(id)arg0 ;
-(NSUInteger)indexOfRecipientForInsertionAtPoint:(struct CGPoint )arg0 ;
-(id)_atomAttachmentForRecipient:(id)arg0 ;
-(id)_atomViewAtCharacterIndex:(NSUInteger)arg0 ;
-(id)_attributedStringWithAtomizedRecipients;
-(id)_baseAttributes;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg0 ;
-(id)_toString;
-(id)_userEnteredTextWithRange:(struct _NSRange *)arg0 ;
-(id)_valueForAtomLayoutOption:(id)arg0 withRecipient:(id)arg1 ;
-(id)atomViewForRecipient:(id)arg0 ;
-(id)atomViewsInRange:(struct _NSRange )arg0 ;
-(id)dragPreviewForDraggedItem:(id)arg0 withContainer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 dragDropDelegate:(id)arg1 ;
-(id)selectedAtoms;
-(id)undoManager;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )_rangeForComposeRecipientAtom:(id)arg0 ;
-(void)_addAddressAtomSubview:(id)arg0 ;
-(void)_addButtonTapped:(id)arg0 ;
-(void)_addRecord:(*void)arg0 identifier:(int)arg1 ;
-(void)_beginAtomViewAnimations;
-(void)_didRemoveRecipient:(id)arg0 ;
-(void)_ensureAddButton;
-(void)_ensureInactiveTextView;
-(void)_insertAtomAttachment:(id)arg0 andReplaceCharactersInRange:(struct _NSRange )arg1 ;
-(void)_insertAtomAttachment:(id)arg0 atCharacterIndex:(NSUInteger)arg1 ;
-(void)_invalidateAtomPresentationOptionsCache;
-(void)_invalidateTextContainerExclusionPaths;
-(void)_longPressGestureRecognized:(id)arg0 ;
-(void)_notifyDelegateOfNewSize:(struct CGSize )arg0 ;
-(void)_notifyDelegateOfSizeChange;
-(void)_recipientsWereAdded:(id)arg0 ;
-(void)_recomputeTextContainerExclusionPaths;
-(void)_removeAddressAtomSubview:(id)arg0 ;
-(void)_removeAllRecipients;
-(void)_resetSelectionState;
-(void)_setValue:(id)arg0 forAtomLayoutOption:(id)arg1 withRecipient:(id)arg2 ;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)_updateAddButtonVisibility;
-(void)_updateInactiveTextView;
-(void)addAddress:(id)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)addRecipient:(id)arg0 index:(NSUInteger)arg1 animate:(BOOL)arg2 ;
-(void)addRecipient:(id)arg0 index:(NSUInteger)arg1 animate:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)addRecipient:(id)arg0 notify:(BOOL)arg1 ;
-(void)addRecord:(*void)arg0 property:(int)arg1 identifier:(int)arg2 ;
-(void)atomTextView:(id)arg0 didChangeWritingDirection:(NSInteger)arg1 ;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg0 ;
-(void)atomTextViewDidResignFirstResponder:(id)arg0 ;
-(void)clearText;
-(void)composeRecipientAtomSelectNext:(id)arg0 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg0 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg0 ;
-(void)dealloc;
-(void)deselectComposeRecipientAtom:(id)arg0 ;
-(void)dragEnteredAtPoint:(struct CGPoint )arg0 ;
-(void)dragExited;
-(void)dragMovedToPoint:(struct CGPoint )arg0 ;
-(void)dropItems:(id)arg0 ;
-(void)invalidateAtomPresentationOptions;
-(void)invalidateAtomPresentationOptionsForRecipient:(id)arg0 ;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)parentDidClose;
-(void)parentWillClose;
-(void)reflow;
-(void)refreshPreferredContentSize;
-(void)removeRecipient:(id)arg0 ;
-(void)selectComposeRecipientAtom:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setProperties:(id)arg0 ;
-(void)setProperty:(int)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;


@end


#endif