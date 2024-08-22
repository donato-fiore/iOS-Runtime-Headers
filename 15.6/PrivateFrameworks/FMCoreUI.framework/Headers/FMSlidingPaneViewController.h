// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMSLIDINGPANEVIEWCONTROLLER_H
#define FMSLIDINGPANEVIEWCONTROLLER_H

@class NSMutableArray, FMFuture, UIView, UIViewController, UIVisualEffect;
@protocol FMSlidingPaneViewControllerDelegate;


#import "FMViewController.h"
#import "SlidingPaneViewState.h"

@interface FMSlidingPaneViewController : FMViewController

@property (retain, nonatomic) NSMutableArray *actionFutures; // ivar: _actionFutures
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) CGFloat animationInitialVelocity; // ivar: _animationInitialVelocity
@property (nonatomic) NSUInteger animationOptions; // ivar: _animationOptions
@property (nonatomic) CGFloat animationSpringDamping; // ivar: _animationSpringDamping
@property (readonly, nonatomic) FMFuture *currentFuture;
@property (weak, nonatomic) NSObject<FMSlidingPaneViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didHideToolbar; // ivar: _didHideToolbar
@property (nonatomic) UIEdgeInsets paneContentInsets; // ivar: _paneContentInsets
@property (nonatomic) UIEdgeInsets paneInsets; // ivar: _paneInsets
@property (readonly, nonatomic, getter=isPaneShowing) BOOL paneShowing;
@property (retain, nonatomic) SlidingPaneViewState *paneState; // ivar: _paneState
@property (readonly, nonatomic) UIView *paneView;
@property (readonly, nonatomic) UIViewController *paneViewController;
@property (retain, nonatomic) UIVisualEffect *paneVisualEffect; // ivar: _paneVisualEffect


-(id)_metricsFromEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(id)_paneParentView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)newActionFuture;
-(id)traitCollectionForChildViewController:(id)arg0 ;
-(struct CGSize )_normalizeSize:(struct CGSize )arg0 ;
-(struct CGSize )_preferredSizeForPaneState:(id)arg0 ;
-(void)_createPaneContentConstraintsForState:(id)arg0 ;
-(void)_createPaneViewForState:(id)arg0 ;
-(void)_crossDissolveOldPaneState:(id)arg0 newPaneState:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_dismissPaneState:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_paneFrameChanged:(struct CGRect )arg0 ;
-(void)_presentPaneState:(id)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 completion:(id)arg3 ;
-(void)_removeChildViewControllerForState:(id)arg0 ;
-(void)awakeFromNib;
-(void)commonConfiguration;
-(void)completeFuture:(id)arg0 ;
-(void)didDismissPane:(id)arg0 animated:(BOOL)arg1 ;
-(void)didPresentPane:(id)arg0 inRect:(struct CGRect )arg1 animated:(BOOL)arg2 ;
-(void)dismiss:(id)arg0 ;
-(void)dismiss:(id)arg0 forEvent:(id)arg1 ;
-(void)dismissPaneViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissSegue:(id)arg0 ;
-(void)paneSizeChanged:(struct CGRect )arg0 forViewController:(id)arg1 ;
-(void)presentPaneViewController:(id)arg0 fromEdge:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentPaneViewController:(id)arg0 fromEdge:(NSUInteger)arg1 withPercent:(CGFloat)arg2 completion:(id)arg3 ;
-(void)setPresentingConstraintConstant:(CGFloat)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismissPane:(id)arg0 animated:(BOOL)arg1 ;
-(void)willPresentPane:(id)arg0 inRect:(struct CGRect )arg1 animated:(BOOL)arg2 ;


@end


#endif