// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERSETUPVIEWCONTROLLER_H
#define PKPAYLATERSETUPVIEWCONTROLLER_H

@class UIBarButtonItem, NSString, PKPayLaterDynamicContentPage;
@protocol PKPayLaterViewControllerDelegate, PKPayLaterSectionControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPayLaterSetupViewController : PKPaymentSetupOptionsViewController <PKPayLaterViewControllerDelegate, PKPayLaterSectionControllerDelegate>

 {
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    BOOL _nextButtonHidden;
    NSUInteger _dynamicContentPageType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableLeftBarButton; // ivar: _disableLeftBarButton
@property (nonatomic) BOOL disableRightBarButton; // ivar: _disableRightBarButton
@property (readonly, nonatomic) PKPayLaterDynamicContentPage *dynamicContentPage; // ivar: _dynamicContentPage
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger leftBarButton; // ivar: _leftBarButton
@property (nonatomic) BOOL previousViewControllerIsApplyFlow; // ivar: _previousViewControllerIsApplyFlow
@property (nonatomic) NSInteger rightBarButton; // ivar: _rightBarButton
@property (readonly, nonatomic) PKPayLaterSetupFlowController *setupController; // ivar: _setupController
@property (readonly) Class superclass;


-(id)_buttonForBarButtonType:(NSInteger)arg0 ;
-(id)additionalAnalyticsDictionary;
-(id)initWithSetupFlowController:(id)arg0 dynamicContentPageType:(NSUInteger)arg1 ;
-(id)navigationControllerViewControllers;
-(id)pageTag;
-(void)_reportAnalyticsBackPressed;
-(void)_reportViewDidAppear:(BOOL)arg0 ;
-(void)_showAlertToEnablePayLaterOptionsIfNecessary;
// -(void)_showCancelAddingToWalletAlertWithCancelBlock:(id)arg0 continueBlock:(unk)arg1  ;
-(void)cancelButtonTapped;
-(void)didTapHyperLink:(id)arg0 ;
-(void)dismissSetupFlowWithCompletion:(id)arg0 ;
-(void)doneButtonTapped;
-(void)nextButtonTapped;
-(void)popViewControllerAnimated:(BOOL)arg0 ;
-(void)provisionPayLaterPassFromApprovalScreen;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadNavigationBarHeaderFooterLayout;
-(void)reportAnalyticsEvent:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif