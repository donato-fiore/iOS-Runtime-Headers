// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTPROMOTIONSSECTIONCONTROLLER_H
#define PKACCOUNTPROMOTIONSSECTIONCONTROLLER_H

@class PKAccount, PKAccountService, NSArray, PKAccountPromotionBehavior, NSMutableSet, PKRemoteImagePreparer, UICollectionViewCellRegistration, NSString;
@protocol PKAccountServiceObserver, PKDynamicSectionController, PKViewControllerPreflightable, PKRewardsHubSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKAccountPromotionsPresenter.h"

@interface PKAccountPromotionsSectionController : NSObject <PKAccountServiceObserver, PKDynamicSectionController, PKViewControllerPreflightable>

 {
    PKAccount *_account;
    PKAccountService *_accountService;
    id<PKRewardsHubSectionControllerDelegate> *_delegate;
    NSArray *_items;
    PKAccountPromotionsPresenter *_presenter;
    PKAccountPromotionBehavior *_promotionBehavior;
    NSArray *_orderings;
    NSMutableSet *_promotionsViewedSinceViewLoad;
    PKRemoteImagePreparer *_remoteImagePreparer;
    os_unfair_lock_s _itemsLock;
}


@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


-(BOOL)_updateImpressionCountForItem:(id)arg0 shouldCountAsImpression:(BOOL)arg1 ;
-(BOOL)shouldHighlightItem:(id)arg0 ;
-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_promotionsWithDefaultOrdering;
-(id)_promotionsWithOrderingContext:(NSUInteger)arg0 ;
-(id)initWithSectionIdentifier:(id)arg0 account:(id)arg1 accountService:(id)arg2 delegate:(id)arg3 ;
-(id)itemsCopy;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)promotionForProgramIdentifier:(id)arg0 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_clearViewedPromotions;
-(void)_configureDataSource;
-(void)_reloadDataWithCompletion:(id)arg0 ;
-(void)_updateImpressionCountsForAllItems:(id)arg0 shouldCountAsImpression:(BOOL)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateAccountPromotions:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)setItems:(id)arg0 ;
-(void)willDisplayItem:(id)arg0 ;


@end


#endif