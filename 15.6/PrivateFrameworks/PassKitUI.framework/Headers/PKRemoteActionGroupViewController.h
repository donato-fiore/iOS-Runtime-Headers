// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREMOTEACTIONGROUPVIEWCONTROLLER_H
#define PKREMOTEACTIONGROUPVIEWCONTROLLER_H

@class UIViewController, PKPaymentPass, PKPaymentPassActionGroup, PKPaymentPassAction, PKPaymentWebService, NSString;
@protocol PKSelectActionGroupActionsViewDelegate, PKPerformActionViewControllerDelegate, PKPaymentDataProvider, PKRemoteActionGroupViewControllerDelegate;


#import "PKPerformActionPassView.h"
#import "PKSelectActionGroupActionsView.h"
#import "PKPerformActionLoadingView.h"

@interface PKRemoteActionGroupViewController : UIViewController <PKSelectActionGroupActionsViewDelegate, PKPerformActionViewControllerDelegate>

 {
    PKPerformActionPassView *_passView;
    PKPaymentPass *_pass;
    PKPaymentPassActionGroup *_actionGroup;
    PKSelectActionGroupActionsView *_actionGroupActionView;
    PKPaymentPassAction *_selectedAction;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKPaymentWebService *_webService;
    BOOL _remoteContentFetched;
    PKPerformActionLoadingView *_loadingView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKRemoteActionGroupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithPass:(id)arg0 actionGroup:(id)arg1 paymentDataProvider:(id)arg2 webService:(id)arg3 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_fetchRemoteContentIfNeeded;
-(void)_reloadActionGroupActionsView;
-(void)_rightBarButtonPressed:(id)arg0 ;
-(void)_showGenericErrorAlert:(id)arg0 ;
-(void)_showLoadingView:(BOOL)arg0 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)selectActionGroupActionsViewDidSelectActionGroupAction:(id)arg0 ;
-(void)setRightBarButtonEnabled:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif