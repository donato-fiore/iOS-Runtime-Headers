// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGEENTRYTEXTVIEW_H
#define CKMESSAGEENTRYTEXTVIEW_H

@class EMKTextView, NSString, NSAttributedString, UIColor, UILabel, UIKeyboardInputMode, UIScribbleInteraction;
@protocol UIScribbleInteractionDelegate;



@interface CKMessageEntryTextView : EMKTextView <UIScribbleInteractionDelegate>



@property (nonatomic) CGFloat adjustedLineFragmentPadding; // ivar: _adjustedLineFragmentPadding
@property (copy, nonatomic) NSString *autocorrectionContext; // ivar: _autocorrectionContext
@property (copy, nonatomic) NSAttributedString *compositionText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideCaret; // ivar: _hideCaret
@property (nonatomic) BOOL hideCaretUntilUserTypes; // ivar: _hideCaretUntilUserTypes
@property (nonatomic, getter=isInPencilMode) BOOL inPencilMode; // ivar: _inPencilMode
@property (nonatomic, getter=isPencilWriting) BOOL pencilWriting; // ivar: _pencilWriting
@property (nonatomic) CGFloat placeHolderWidth; // ivar: _placeHolderWidth
@property (copy, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (nonatomic) CGFloat placeholderExpandedWidth; // ivar: _placeholderExpandedWidth
@property (retain, nonatomic) UILabel *placeholderLabel; // ivar: _placeholderLabel
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) BOOL preventShowingCalloutMenu; // ivar: _preventShowingCalloutMenu
@property (copy, nonatomic) NSString *responseContext; // ivar: _responseContext
@property (retain, nonatomic) UIKeyboardInputMode *savedKeyboardInputMode; // ivar: _savedKeyboardInputMode
@property (retain, nonatomic) UIScribbleInteraction *scribbleInteraction; // ivar: _scribbleInteraction
@property (nonatomic) BOOL sendCurrentLocationFromKeyboardEnabled; // ivar: _sendCurrentLocationFromKeyboardEnabled
@property (nonatomic) BOOL shouldStripEmojis; // ivar: _shouldStripEmojis
@property (nonatomic, getter=isShowingDictationPlaceholder) BOOL showingDictationPlaceholder; // ivar: _showingDictationPlaceholder
@property (readonly, nonatomic, getter=isSingleLine) BOOL singleLine;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updatesFontOnTextChange; // ivar: _updatesFontOnTextChange


-(BOOL)resignFirstResponder;
-(SEL)_sendCurrentLocationAction;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_stripEmojisIfNecessary;
-(void)dealloc;
-(void)layoutSubviews;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;
-(void)restoreKeyboardInputMode;
-(void)saveKeyboardInputMode;
-(void)scribbleInteractionDidFinishWriting:(id)arg0 ;
-(void)scribbleInteractionWillBeginWriting:(id)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setupScribbleInteraction;
-(void)textViewDidChange:(id)arg0 ;
-(void)updateFontIfNeeded;
-(void)updateTextView;


@end


#endif