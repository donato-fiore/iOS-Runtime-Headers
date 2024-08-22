// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNBANNERCLIENTCONTAINERVIEWCONTROLLER_H
#define BNBANNERCLIENTCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSString, UIScene;
@protocol BNBannerClientContainer, BNPresentableContext, BSInvalidatable, BNBannerClientContainerDelegate, BNPresentable><BNHostedContentProviding;


#import "_BNPanGestureServiceProxy.h"

@interface BNBannerClientContainerViewController : UIViewController <BNBannerClientContainer, BNPresentableContext>

 {
    id<BSInvalidatable> *_deferringRule;
    NSMutableArray *_transitionContextStack;
    _BNPanGestureServiceProxy *_panGestureProxy;
}


@property (readonly, nonatomic, getter=isAccessibilityIgnoringSmartInvertColors) BOOL accessibilityIgnoringSmartInvertColors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeferringFocus) BOOL deferringFocus;
@property (weak, nonatomic) NSObject<BNBannerClientContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BNPresentable><BNHostedContentProviding> *presentable; // ivar: _presentable
@property (readonly, nonatomic) NSObject<BNPresentableContext> *presentableContext; // ivar: _presentableContext
@property (readonly, weak, nonatomic) UIScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)initWithScene:(id)arg0 presentable:(id)arg1 context:(id)arg2 ;
-(id)keyWindowForScreen:(id)arg0 ;
-(void)_acquireDeferringRuleIfNecessary;
-(void)_handlePanGestureProxyAction:(id)arg0 ;
-(void)_handleRejectionAction:(id)arg0 ;
-(void)_invalidateDeferringRule;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_setPreferredContentSize:(struct CGSize )arg0 shouldFence:(BOOL)arg1 ;
-(void)bs_traitCollectionDidChange:(id)arg0 forManagedTraitEnvironment:(id)arg1 ;
-(void)dealloc;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setHostNeedsUpdate;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif