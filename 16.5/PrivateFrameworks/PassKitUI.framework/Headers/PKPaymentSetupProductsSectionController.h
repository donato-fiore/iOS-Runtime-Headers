// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPPRODUCTSSECTIONCONTROLLER_H
#define PKPAYMENTSETUPPRODUCTSSECTIONCONTROLLER_H

@class PKPaymentProvisioningController, NSMutableDictionary, NSMutableArray, NSCharacterSet, NSLocale, NSString;
@protocol OS_dispatch_queue, PKPaymentSetupProductsSectionControllerDelegate;


#import "PKPaymentSetupListSectionController.h"
#import "PKPaymentSetupProductsSectionListItem.h"

@interface PKPaymentSetupProductsSectionController : PKPaymentSetupListSectionController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentSetupProductsSectionListItem *_addADifferentCardListItem;
    NSMutableDictionary *_itemIdentifierToItemMapping;
    NSMutableDictionary *_sectionIdentifierToItemIdentifierMapping;
    NSMutableArray *_orderedSectionIdentifiers;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSCharacterSet *_tokenizerCharacterSet;
    CGSize _iconSize;
    NSLocale *_currentLocale;
    NSString *_primaryRegion;
    NSString *_primaryCountryName;
    NSString *_secondaryRegion;
    NSString *_secondaryCountryName;
    BOOL _showSectionHeaders;
}


@property (weak, nonatomic) NSObject<PKPaymentSetupProductsSectionControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_needsManualEntryButton;
-(CGFloat)_distanceBewteenTerms:(id)arg0 andSearchTerms:(id)arg1 ;
-(id)_cleanedSearchTermsFromString:(id)arg0 ;
-(id)_listItemFromProduct:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_sectionIdentiferForProduct:(id)arg0 alwaysWantsHeaders:(*BOOL)arg1 wantsAddAdifferentCardButton:(*BOOL)arg2 ;
-(id)decoratePaymentSetListCell:(id)arg0 forItem:(id)arg1 ;
-(id)identifiers;
-(id)initWithProvisoningController:(id)arg0 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_applyDefaultSortToListItems:(id)arg0 ;
-(void)_applyDefaultSortToSectionIdentifier:(id)arg0 ;
-(void)_buildSectionIdentifierToItemIdentifierMapping:(id)arg0 orderedSectionIdentifiers:(id)arg1 fromListItems:(id)arg2 ;
-(void)_updateItemWithIdentifier:(id)arg0 loadingIndicatorVisibility:(BOOL)arg1 ;
-(void)applySearchString:(id)arg0 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;
-(void)updateWithPaymentSetupProducts:(id)arg0 ;


@end


#endif