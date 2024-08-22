// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREVIEWINAPPRATINGVIEWCONTROLLER_H
#define SKUIREVIEWINAPPRATINGVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, NSMutableArray, NSString, UIInterfaceAction, UIStackView;
@protocol UIViewControllerTransitioningDelegate, UIInterfaceActionHandlerInvocationDelegate;


#import "SKUIReviewInAppRatingHeaderView.h"
#import "SKUIStarRatingControl.h"

@interface SKUIReviewInAppRatingViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInterfaceActionHandlerInvocationDelegate>



@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSubmit; // ivar: _disableSubmit
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIReviewInAppRatingHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) SKUIStarRatingControl *ratingControl; // ivar: _ratingControl
@property (retain, nonatomic) UIInterfaceAction *ratingControlAction; // ivar: _ratingControlAction
@property (copy, nonatomic) id *ratingHandler; // ivar: _ratingHandler
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)_actions;
-(id)_actionsLayoutAxesForCurrentState;
-(id)_buttonActionWithTitle:(id)arg0 style:(NSUInteger)arg1 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 icon:(id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_ratingControlChanged:(id)arg0 ;
// -(void)interfaceAction:(id)arg0 invokeActionHandler:(id)arg1 completion:(unk)arg2  ;
-(void)reloadViewsConfiguration;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif