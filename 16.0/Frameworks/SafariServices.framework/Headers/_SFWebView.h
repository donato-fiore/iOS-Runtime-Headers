// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFWEBVIEW_H
#define _SFWEBVIEW_H

@class WKWebView, SFDialogView, UIImageView, NSTimer, UIView, SFWebFormAccessoryViewWrapper, UIViewController<UIPredictiveViewController>, NSArray, NSString;
@protocol SFDialogViewPresenting, _SFWebViewDelegate;



@interface _SFWebView : WKWebView <SFDialogViewPresenting>

 {
    SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    CGFloat _placeholderOffset;
    UIView *_contentObscuringView;
    SFWebFormAccessoryViewWrapper *_inputAccessoryContainerView;
    UIViewController<UIPredictiveViewController> *_inputDashboardViewController;
}


@property (nonatomic) CGFloat bottomBarHeightAboveKeyboard; // ivar: _bottomBarHeightAboveKeyboard
@property (readonly, copy, nonatomic) NSArray *callStackSymbolsForLastRemovalFromWindow; // ivar: _callStackSymbolsForLastRemovalFromWindow
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


-(BOOL)becomeFirstResponder;
-(BOOL)webui_canPromptForAccountSecurityRecommendation;
-(id)_enclosingViewForExposedRectComputation;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(id)inputAccessoryView;
-(id)inputDashboardViewController;
-(id)scrollViewAtLocation:(struct CGPoint )arg0 ;
-(id)undoManager;
-(int)webProcessIDForDialogController:(id)arg0 ;
-(void)_close;
-(void)_setObscuredInsets:(struct UIEdgeInsets )arg0 ;
-(void)_updateNavigationGesturesAllowed;
-(void)dealloc;
-(void)didEndFormControlInteraction;
-(void)didMoveToWindow;
-(void)didStartFormControlInteraction;
// -(void)dismissDialogView:(id)arg0 withAdditionalAnimations:(id)arg1 forDialogController:(unk)arg2  ;
-(void)layoutSubviews;
// -(void)presentDialogView:(id)arg0 withAdditionalAnimations:(id)arg1 forDialogController:(unk)arg2  ;
-(void)safeAreaInsetsDidChange;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg0 ;
-(void)setPlaceholderImage:(id)arg0 ;
-(void)setPlaceholderImage:(id)arg0 offset:(CGFloat)arg1 ;
-(void)setSuggestedFilenameForCurrentBackForwardListItem:(id)arg0 ;
-(void)webui_setInputDashboardViewController:(id)arg0 ;


@end


#endif