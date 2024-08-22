// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSITCARDNUMBERVIEWCONTROLLER_H
#define PKTRANSITCARDNUMBERVIEWCONTROLLER_H

@class PKPaymentPass;


#import "PKDynamicTableViewController.h"
#import "PKPassDetailsCardInfoSectionController.h"

@interface PKTransitCardNumberViewController : PKDynamicTableViewController {
    PKPaymentPass *_pass;
    PKPassDetailsCardInfoSectionController *_cardInfoSectionController;
}




+(BOOL)canShowForPass:(id)arg0 expressPassController:(id)arg1 ;
-(id)initWithPass:(id)arg0 ;


@end


#endif