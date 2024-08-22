// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPCATEGORIESSECTIONCONTROLLER_H
#define PKPAYMENTSETUPCATEGORIESSECTIONCONTROLLER_H

@class NSMutableDictionary, NSMutableArray;
@protocol PKPaymentSetupCategoriesSectionControllerDelegate;


#import "PKPaymentSetupListSectionController.h"

@interface PKPaymentSetupCategoriesSectionController : PKPaymentSetupListSectionController {
    NSMutableDictionary *_sectionIdentifierToSectionTitleMapping;
    NSMutableDictionary *_itemIdentifierToItemMapping;
    NSMutableDictionary *_sectionIdentifiersToItemIdentifierMapping;
    NSMutableArray *_orderedSectionIdentifiers;
    CGSize _iconSize;
    NSUInteger _currentConfiguredRequirements;
}


@property (weak, nonatomic) NSObject<PKPaymentSetupCategoriesSectionControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)updateWithRequirements:(NSUInteger)arg0 provisioningController:(id)arg1 paymentSetupProductModel:(id)arg2 displayLoadingIndicator:(*BOOL)arg3 forceProductConfiguration:(BOOL)arg4 ;
-(id)_listItemForItemIdentifier:(id)arg0 paymentSetupProductModel:(id)arg1 ;
-(id)decoratePaymentSetListCell:(id)arg0 forItem:(id)arg1 ;
-(id)identifiers;
-(id)init;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_updateItemIdentifier:(id)arg0 loadingIndicatorVisibility:(BOOL)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif