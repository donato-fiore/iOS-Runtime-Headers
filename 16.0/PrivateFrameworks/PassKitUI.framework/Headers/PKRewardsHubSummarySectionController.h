// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREWARDSHUBSUMMARYSECTIONCONTROLLER_H
#define PKREWARDSHUBSUMMARYSECTIONCONTROLLER_H

@class PKRewardsSummaryFetcher, PKAccountRewardsTierSummary, NSMutableDictionary, UICollectionViewCellRegistration, NSString, NSArray;
@protocol PKDynamicSectionController, PKViewControllerPreflightable, PKRewardsHubSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKRewardsHubSummarySectionController : NSObject <PKDynamicSectionController, PKViewControllerPreflightable>

 {
    PKRewardsSummaryFetcher *_rewardsFetcher;
    BOOL _showRewardsGraph;
    PKAccountRewardsTierSummary *_lifetimeSummary;
    id<PKRewardsHubSectionControllerDelegate> *_delegate;
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
-(id)initWithSectionIdentifiers:(id)arg0 rewardsFetcher:(id)arg1 showRewardsGraph:(BOOL)arg2 delegate:(id)arg3 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureFooterView:(id)arg0 inSection:(id)arg1 ;
-(void)_configureHeaderView:(id)arg0 inSection:(id)arg1 ;
-(void)_reloadDataWithCompletion:(id)arg0 ;
-(void)_setCornerMaskForCell:(id)arg0 indexPath:(id)arg1 section:(id)arg2 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;


@end


#endif