// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPBANKAPPDISAMBIGUATIONCONTROLLER_H
#define PKPAYMENTSETUPBANKAPPDISAMBIGUATIONCONTROLLER_H

@class PKPaymentSetupProduct, NSMutableArray;
@protocol PKPaymentSetupBankAppDisambiguationControllerDelegate;


#import "PKPaymentSetupListSectionController.h"

@interface PKPaymentSetupBankAppDisambiguationController : PKPaymentSetupListSectionController {
    PKPaymentSetupProduct *_paymentSetupProduct;
    NSMutableArray *_inAppItemIdentifierToItemMapping;
    NSMutableArray *_cameraItemIdentifierToItemMapping;
}


@property (weak) NSObject<PKPaymentSetupBankAppDisambiguationControllerDelegate> *delegate; // ivar: _delegate


-(id)_listItemWithName:(id)arg0 ;
-(id)identifiers;
-(id)initWithPaymentSetupProduct:(id)arg0 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_updateItemWithIdentifier:(id)arg0 loadingIndicatorVisibility:(BOOL)arg1 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif