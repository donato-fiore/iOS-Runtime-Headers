// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSACTIONDATACONTROLLER_H
#define PKPAYMENTPASSACTIONDATACONTROLLER_H

@class PKPaymentPass, NSArray, PKPaymentWebService, PKTransitBalanceModel, NSString, UIViewController;
@protocol PKSelectActionViewControllerDelegate, PKPerformActionViewControllerDelegate, PKPaymentDataProvider;

#import <Foundation/Foundation.h>


@interface PKPaymentPassActionDataController : NSObject <PKSelectActionViewControllerDelegate, PKPerformActionViewControllerDelegate>

 {
    PKPaymentPass *_pass;
    NSArray *_actions;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKPaymentWebService *_webService;
    NSUInteger _actionType;
    PKTransitBalanceModel *_balanceModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController;


-(id)initWithPass:(id)arg0 actions:(id)arg1 paymentDataProvider:(id)arg2 webService:(id)arg3 actionType:(NSUInteger)arg4 balanceModel:(id)arg5 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)selectActionViewControllerDidCancel:(id)arg0 ;
-(void)selectActionViewControllerDidPerformAction:(id)arg0 ;


@end


#endif