// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMKTEXTVIEW_H
#define EMKTEXTVIEW_H

@class UITextView, EMFEmojiPreferences, NSTimer;


#import "EMKOverlayView.h"
#import "EMKGestureRecognizerDelegate.h"

@interface EMKTextView : UITextView {
    EMKOverlayView *_overlayView;
    NSUInteger _tappedGlyphIndex;
    _NSRange _tappedGlyphRange;
    EMKGestureRecognizerDelegate *_gestureRecognizerDelegate;
    EMFEmojiPreferences *_emojiPreferences;
    NSTimer *_timer;
    CGRect _displayRect;
    BOOL _emojiConversionActive;
}


@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled;


-(BOOL)_shouldSuppressSelectionCommands;
-(BOOL)touchHasEmojiSignificance:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)personalizedEmojiTokenListForList:(id)arg0 ;
-(struct CGRect )anchorRect;
-(void)calculateDisplayRect;
-(void)dealloc;
-(void)deleteBackward;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)dismissOverlayView;
-(void)emojifyingDisabled:(id)arg0 ;
-(void)inputModeDidChange:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)layoutSubviews;
-(void)replaceRange:(struct _NSRange )arg0 withEmojiToken:(id)arg1 language:(id)arg2 ;
-(void)setDelayFrames:(NSUInteger)arg0 ;
-(void)setEmojiConversionLanguagesAndActivateConversion:(BOOL)arg0 ;
-(void)setEmojiConversionLanguagesForInputModeChange:(id)arg0 ;
-(void)setEmojiConversionLanguagesForKeyboardShow:(id)arg0 ;
-(void)setPostFrames:(NSUInteger)arg0 ;
-(void)setPreFrames:(NSUInteger)arg0 ;
-(void)startTimer:(id)arg0 ;
-(void)stopTimer:(id)arg0 ;
-(void)textTapGestureRecognized:(id)arg0 ;
-(void)updateEmojiDisplay:(id)arg0 ;
-(void)updateOverlayView:(id)arg0 ;


@end


#endif