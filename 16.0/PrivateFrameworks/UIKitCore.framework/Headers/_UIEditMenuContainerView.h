// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDITMENUCONTAINERVIEW_H
#define _UIEDITMENUCONTAINERVIEW_H

@class NSString;
@protocol _UIEditMenuDismissalGestureRecognizerDelegate, _UITouchFallbackViewDelegate;


#import "UIView.h"
#import "_UIEditMenuDismissalGestureRecognizer.h"
#import "_UIEditMenuPresentation.h"
#import "_UITouchFallbackView.h"

@interface _UIEditMenuContainerView : UIView <_UIEditMenuDismissalGestureRecognizerDelegate, _UITouchFallbackViewDelegate>

 {
    BOOL _lastHitTestPassedThrough;
    BOOL _didDismissFromGesture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _UIEditMenuDismissalGestureRecognizer *dismissalGestureRecognizer; // ivar: _dismissalGestureRecognizer
@property (nonatomic) BOOL dismissesOnViewportResize; // ivar: _dismissesOnViewportResize
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresPassthroughInPresentationSource; // ivar: _ignoresPassthroughInPresentationSource
@property (readonly, weak, nonatomic) _UIEditMenuPresentation *presentation; // ivar: _presentation
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UITouchFallbackView *touchFallbackView; // ivar: _touchFallbackView


-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)dismissalGestureRecognizer:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)touchFallbackView:(id)arg0 shouldHitTestAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPresentation:(id)arg0 enablePassthrough:(BOOL)arg1 ;
-(void)_dismissMenuPresentationForSizeChange;
-(void)_installDismissalGesture;
-(void)didMoveToWindow;
-(void)didRecognizeDismissalGestureRecognizer:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif