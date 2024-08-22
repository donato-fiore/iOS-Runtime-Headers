// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSELECTACTIONVIEWCONTROLLER_H
#define PKSELECTACTIONVIEWCONTROLLER_H

@class UIViewController, PKPaymentPass, NSArray, PKPaymentPassAction, PKPaymentWebService, NSDictionary, NSString;
@protocol PKSelectActionViewDelegate, PKPerformActionViewControllerDelegate, PKPaymentDataProvider, PKSelectActionViewControllerDelegate;


#import "PKPerformActionPassView.h"
#import "PKSelectActionView.h"

@interface PKSelectActionViewController : UIViewController <PKSelectActionViewDelegate, PKPerformActionViewControllerDelegate>

 {
    PKPerformActionPassView *_passView;
    PKPaymentPass *_pass;
    NSArray *_actions;
    NSUInteger _actionType;
    PKSelectActionView *_actionView;
    PKPaymentPassAction *_selectedAction;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKPaymentWebService *_webService;
    NSDictionary *_balances;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSelectActionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithPass:(id)arg0 actions:(id)arg1 actionType:(NSUInteger)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4 balanceDictionary:(id)arg5 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_reloadActionView;
-(void)_rightBarButtonPressed:(id)arg0 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)selectActionViewDidSelectAction:(id)arg0 ;
-(void)setRightBarButtonEnabled:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif