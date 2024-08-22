// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREWARDSHUBSUMMARYSECTIONCONTROLLER_H
#define PKREWARDSHUBSUMMARYSECTIONCONTROLLER_H

@class PKRewardsSummaryFetcher, PKAccountRewardsTierSummary, NSMutableSet, NSMutableDictionary, UICollectionViewCellRegistration, NSString, NSArray;
@protocol PKPaymentDataProviderDelegate, PKDynamicSectionController, PKViewControllerPreflightable, PKPaymentDataProvider, PKRewardsHubSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKRewardsHubSummarySectionController : NSObject <PKPaymentDataProviderDelegate, PKDynamicSectionController, PKViewControllerPreflightable>

 {
    PKRewardsSummaryFetcher *_rewardsFetcher;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    BOOL _showRewardsGraph;
    PKAccountRewardsTierSummary *_lifetimeSummary;
    id<PKRewardsHubSectionControllerDelegate> *_delegate;
    os_unfair_lock_s _summaryFetchLock;
    BOOL _summaryFetchInProgress;
    BOOL _transactionsNeedUpdate;
    NSMutableSet *_pendingCompletionHandlers;
    NSMutableDictionary *_sectionIDToPresenterMap;
    NSMutableDictionary *_sectionIDToItemsMap;
}


@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;


-(BOOL)_hasFooterForSection:(id)arg0 ;
-(BOOL)_hasHeaderForSection:(id)arg0 ;
-(BOOL)shouldHighlightItem:(id)arg0 ;
-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_cellPresenterIdentifierForItem:(id)arg0 ;
-(id)_collectionView;
-(id)_createPresenterForSection:(id)arg0 ;
-(id)_itemsForSection:(id)arg0 ;
-(id)_presenterForSection:(id)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)initWithSectionIdentifiers:(id)arg0 rewardsFetcher:(id)arg1 paymentDataProvider:(id)arg2 showRewardsGraph:(BOOL)arg3 delegate:(id)arg4 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureFooterView:(id)arg0 inSection:(id)arg1 ;
-(void)_configureHeaderView:(id)arg0 inSection:(id)arg1 ;
-(void)_reloadData;
-(void)_reloadDataAndUpdateDelegate;
-(void)_reloadDataWithCompletion:(id)arg0 ;
-(void)_setCornerMaskForCell:(id)arg0 indexPath:(id)arg1 section:(id)arg2 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;


@end


#endif