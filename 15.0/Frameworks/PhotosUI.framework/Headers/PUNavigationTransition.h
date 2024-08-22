// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUNAVIGATIONTRANSITION_H
#define PUNAVIGATIONTRANSITION_H

@class UIViewController, UINavigationController;


#import "PUViewControllerTransition.h"

@interface PUNavigationTransition : PUViewControllerTransition

@property (nonatomic, setter=_setOperation:) NSInteger _operation; // ivar: __operation
@property (weak) UIViewController *expectedDestinationOnPop; // ivar: _expectedDestinationOnPop
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly, nonatomic) CGFloat popDuration; // ivar: _popDuration
@property (readonly, nonatomic) CGFloat pushDuration; // ivar: _pushDuration
@property (nonatomic) BOOL wasStatusBarHiddenBeforeTransition; // ivar: _wasStatusBarHiddenBeforeTransition


+(BOOL)shouldCrossFadeBottomBarsForNavigationController:(id)arg0 ;
+(id)animationControllerForOperation:(NSInteger)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 inNavigationController:(id)arg3 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithDuration:(CGFloat)arg0 ;
-(id)initWithPushDuration:(CGFloat)arg0 popDuration:(CGFloat)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)cancelInteractiveTransition;
-(void)completeInteractiveOperation:(NSInteger)arg0 finished:(BOOL)arg1 ;
-(void)completeTransition:(BOOL)arg0 ;
-(void)didCompleteTransitionAnimation;
-(void)finishInteractiveTransition;
-(void)imageModulationIntensityDidChange;
-(void)transitionDidStartOperation:(NSInteger)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)transitionWillAnimateOperation:(NSInteger)arg0 interactive:(BOOL)arg1 ;
-(void)transitionWillStartOperation:(NSInteger)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;


@end


#endif