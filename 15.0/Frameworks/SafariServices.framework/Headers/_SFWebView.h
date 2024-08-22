// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFWEBVIEW_H
#define _SFWEBVIEW_H

@class WKWebView, UIImageView, NSTimer, UIView, NSString;
@protocol _SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate, _SFWebViewDelegate;


#import "_SFDialogView.h"

@interface _SFWebView : WKWebView <_SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate>

 {
    _SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    CGFloat _placeholderOffset;
    UIView *_contentObscuringView;
}


@property (weak, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFWebViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *evOrganizationName;
@property (readonly, nonatomic) BOOL hasBeenInWindow; // ivar: _hasBeenInWindow
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets hitTestInsets; // ivar: _hitTestInsets
@property (nonatomic) NSInteger navigationGesturePolicy; // ivar: _navigationGesturePolicy
@property (nonatomic, getter=isObscuringContents) BOOL obscuringContents; // ivar: _obscuringContents
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tapResultHandler; // ivar: _tapResultHandler


-(BOOL)_isNavigationSwipeGestureRecognizer:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)webui_canPromptForAccountSecurityRecommendation;
-(id)_enclosingViewForExposedRectComputation;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(int)webProcessIDForDialogController:(id)arg0 ;
-(void)_close;
-(void)_setObscuredInsets:(struct UIEdgeInsets )arg0 ;
-(void)_updateNavigationGesturesAllowed;
-(void)dealloc;
-(void)didEndFormControlInteraction;
-(void)didMoveToWindow;
-(void)didStartFormControlInteraction;
-(void)didTapAtPoint:(struct CGPoint )arg0 withResult:(NSInteger)arg1 ;
// -(void)dismissDialogView:(id)arg0 withAdditionalAnimations:(id)arg1 forDialogController:(unk)arg2  ;
-(void)layoutSubviews;
// -(void)presentDialogView:(id)arg0 withAdditionalAnimations:(id)arg1 forDialogController:(unk)arg2  ;
-(void)safariKillWebContentProcessUIActivityKillWebProcess:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg0 ;
-(void)setPlaceholderImage:(id)arg0 ;
-(void)setPlaceholderImage:(id)arg0 offset:(CGFloat)arg1 ;
-(void)setSuggestedFilenameForCurrentBackForwardListItem:(id)arg0 ;


@end


#endif