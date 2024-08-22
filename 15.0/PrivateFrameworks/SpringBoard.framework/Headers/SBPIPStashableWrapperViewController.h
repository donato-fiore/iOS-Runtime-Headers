// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPSTASHABLEWRAPPERVIEWCONTROLLER_H
#define SBPIPSTASHABLEWRAPPERVIEWCONTROLLER_H

@class UIViewController, UIView, UITapGestureRecognizer, NSString;
@protocol PTSettingsKeyPathObserver, SBPIPStashableWrapperViewControllerDelegate;


#import "SBPIPStashVisualSettings.h"
#import "SBPIPShadowSettings.h"
#import "SBPIPStashView.h"
#import "SBPIPStashedMaskView.h"
#import "SBPortalView.h"

@interface SBPIPStashableWrapperViewController : UIViewController <PTSettingsKeyPathObserver>

 {
    SBPIPStashVisualSettings *_settings;
    SBPIPShadowSettings *_shadowSettings;
    UIView *_containerView;
    UIView *_shadowView;
    SBPIPStashView *_stashView;
    UIView *_tabShadowView;
    SBPIPStashedMaskView *_stashMaskView;
    SBPortalView *_leftSideContentPortalView;
    SBPortalView *_rightSideContentPortalView;
    BOOL _stashTabHidden;
    BOOL _stashTabShownLeft;
    NSUInteger _inFlightStashTabAnimationIdentifier;
    NSUInteger _inFlightStashProgressAnimationIdentifier;
    UITapGestureRecognizer *_stashedTapGestureRecognizer;
    UIViewController *_contentViewController;
    UIView *_contentView;
    CGFloat _cornerRadiusMetric;
}


@property (readonly, nonatomic) UIView *contentContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPIPStashableWrapperViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInteractivelyResizing) BOOL interactivelyResizing; // ivar: _interactivelyResizing
@property (readonly, nonatomic) BOOL isStashTabHidden;
@property (nonatomic) CGSize minimumStashTabSize; // ivar: _minimumStashTabSize
@property (nonatomic) BOOL stashed; // ivar: _stashed
@property (readonly) Class superclass;


-(CGFloat)_continuousCornerRadius;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(id)_newShadowViewWithSettings:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 cornerRadius:(CGFloat)arg1 stashVisualSettings:(id)arg2 shadowSettings:(id)arg3 ;
-(struct CGSize )preferredContentSize;
-(void)_addMaskViewSubviewIfNeeded;
-(void)_applyDropShadowSettings:(id)arg0 toView:(id)arg1 ;
-(void)_handleTapWhileStashedGestureRecognizer:(id)arg0 ;
-(void)_layoutStashTabViewsIfNeeded;
-(void)_resetStashTabViewsIfPossible;
-(void)_setPortalActive:(BOOL)arg0 left:(BOOL)arg1 ;
-(void)_setStashMaskActive:(BOOL)arg0 ;
-(void)_setStashProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_updateContentCornerRadiusForMaskActive:(BOOL)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)setStashProgress:(CGFloat)arg0 ;
-(void)setStashTabHidden:(BOOL)arg0 left:(BOOL)arg1 withSpringBehavior:(id)arg2 completion:(id)arg3 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif