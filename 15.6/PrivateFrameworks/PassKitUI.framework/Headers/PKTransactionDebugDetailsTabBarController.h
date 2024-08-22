// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONDEBUGDETAILSTABBARCONTROLLER_H
#define PKTRANSACTIONDEBUGDETAILSTABBARCONTROLLER_H

@class UITabBarController, UIBarButtonItem, PKPaymentTransaction, PKTransactionSourceCollection;


#import "PKTransactionCloudKitDebugDetailsViewController.h"
#import "PKTransactionSpotlightDebugDetailsViewController.h"

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {
    UIBarButtonItem *_shareButton;
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKTransactionCloudKitDebugDetailsViewController *_cloudKitViewController;
    PKTransactionSpotlightDebugDetailsViewController *_spotlightViewController;
}




-(id)initWithTransaction:(id)arg0 transactionSourceCollection:(id)arg1 ;
-(void)_handleShareButton:(id)arg0 ;


@end


#endif