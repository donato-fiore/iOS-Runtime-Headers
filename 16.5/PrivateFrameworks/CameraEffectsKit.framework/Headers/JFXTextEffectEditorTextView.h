// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXTEXTEFFECTEDITORTEXTVIEW_H
#define JFXTEXTEFFECTEDITORTEXTVIEW_H

@class UITextView;


#import "JFXTextEffectEditorView.h"

@interface JFXTextEffectEditorTextView : UITextView

@property (weak, nonatomic) JFXTextEffectEditorView *editorView; // ivar: _editorView
@property (nonatomic) CGRect textFrameWithoutFudge; // ivar: _textFrameWithoutFudge


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(NSUInteger)JFX_countNumberOfLines;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithTextEditingProperties:(id)arg0 editorView:(id)arg1 ;
-(id)initWithTextEditingProperties:(id)arg0 editorView:(id)arg1 textContainer:(id)arg2 ;
-(id)textColorForCaretSelection;
-(id)textStylingAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(struct CGRect )textEditingFrame;
-(void)JFX_adjustSizeToMatchExpectedNumberOfLines:(id)arg0 ;
-(void)JFX_adjustTextEditingViewFrameAndInsetsForShadow:(id)arg0 ;
-(void)JFX_adjustTextEditingViewInsetsForVerticalAlignment:(NSInteger)arg0 textAreaHeight:(CGFloat)arg1 textHeight:(CGFloat)arg2 ;
-(void)applyTextEditingProperties:(id)arg0 ;
-(void)unmarkText;


@end


#endif