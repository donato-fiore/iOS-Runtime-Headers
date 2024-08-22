// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBELASTICHUDVIEWCONTROLLER_H
#define SBELASTICHUDVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, NSString;
@protocol UIViewControllerTransitioningDelegate, SBElasticValueViewControllerDelegate, SBHUDViewControlling, SBElasticHUDViewControllerDelegate;


#import "SBElasticValueViewController.h"

@interface SBElasticHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBElasticValueViewControllerDelegate, SBHUDViewControlling>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBElasticHUDViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBElasticValueViewController *elasticValueViewController; // ivar: _elasticValueViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)definesAnimatedDismissal;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithElasticValueContentViewController:(id)arg0 ;
-(id)initWithFactory:(id)arg0 ;
-(void)_dismiss;
-(void)dismissAnimatedWithCompletion:(id)arg0 ;
-(void)elasticValueViewControllerNeedsDismissal:(id)arg0 ;
-(void)noteButtonDownWasHit:(BOOL)arg0 ;
-(void)noteButtonUpWasHit:(BOOL)arg0 ;
-(void)noteValueDidChange:(float)arg0 ;
-(void)noteValueWillDeltaStepToValue:(float)arg0 ;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif