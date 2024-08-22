// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPAPPEXTENSIONSSECTIONCONTROLLER_H
#define PKPAYMENTSETUPAPPEXTENSIONSSECTIONCONTROLLER_H

@class NSMutableDictionary;
@protocol PKPaymentSetupAppExtensionsSectionControllerDelegate;


#import "PKPaymentSetupListSectionController.h"

@interface PKPaymentSetupAppExtensionsSectionController : PKPaymentSetupListSectionController {
    NSMutableDictionary *_keyedListItems;
    CGSize _iconSize;
    NSUInteger _shouldDisplay;
}


@property (weak, nonatomic) NSObject<PKPaymentSetupAppExtensionsSectionControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)updateWithRequirements:(NSUInteger)arg0 paymentSetupProductModel:(id)arg1 ;
-(id)decoratePaymentSetListCell:(id)arg0 forItem:(id)arg1 ;
-(id)init;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(void)_updateItemIdentifier:(id)arg0 loadingIndicatorVisibility:(BOOL)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif