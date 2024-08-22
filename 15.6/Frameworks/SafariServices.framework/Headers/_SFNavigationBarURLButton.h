// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFNAVIGATIONBARURLBUTTON_H
#define _SFNAVIGATIONBARURLBUTTON_H

@class UIButton, UIVibrancyEffect, UIVisualEffectView, UIView, UIGestureRecognizer, PKScribbleInteraction, NSString;
@protocol PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIGestureRecognizerDelegate, _SFNavigationBarURLButtonDelegate;


#import "_SFNavigationBarTheme.h"

@interface _SFNavigationBarURLButton : UIButton <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIGestureRecognizerDelegate>

 {
    UIVibrancyEffect *_highlightedVibrancyEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_effectView;
    UIView *_effectMask;
    UIGestureRecognizer *_longPressGestureRecognizer;
    PKScribbleInteraction *_pencilScribbleInteraction;
    CGFloat _backgroundAlphaFactor;
    _SFNavigationBarTheme *_theme;
    id<_SFNavigationBarURLButtonDelegate> *_delegate;
    CGFloat _urlOutlineCornerRadius;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_dismissMenu:(id)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_hover:(id)arg0 ;
-(void)_scribbleInteraction:(id)arg0 didFinishWritingInElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)pasteAndGo:(id)arg0 ;
-(void)pasteAndSearch:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif