// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMERCHANTTOKENSVIEWCONTROLLER_H
#define PKMERCHANTTOKENSVIEWCONTROLLER_H

@class UICollectionViewController, UICollectionViewDiffableDataSource, PKSecureElementPass, PKRetrieveMerchantTokensResponse, NSMutableArray, NSMutableDictionary, PKPaymentWebService, NSString;
@protocol PKMerchantTokenDetailViewControllerDelegate, PKMerchantTokensViewControllerDelegate;



@interface PKMerchantTokensViewController : UICollectionViewController <PKMerchantTokenDetailViewControllerDelegate>

 {
    UICollectionViewDiffableDataSource *_dataSource;
    PKSecureElementPass *_pass;
    PKRetrieveMerchantTokensResponse *_previousMerchantTokensResponse;
    NSMutableArray *_merchantTokens;
    NSMutableDictionary *_idsToMerchantTokens;
    BOOL _isFetchingMerchantTokens;
    PKPaymentWebService *_webService;
    BOOL _merchantIconsEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKMerchantTokensViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_collectionViewLayout;
-(BOOL)_hasMoreUnfetchedMerchantTokens;
-(BOOL)_isLoadingRow:(id)arg0 ;
-(BOOL)_isMerchantRow:(id)arg0 ;
-(BOOL)_shouldShowLoadingRow;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)_initialSnapshot;
-(id)_updateIdentifiersWithMerchantTokens:(id)arg0 ;
-(id)_updatedSnapshotRemovingMerchantToken:(id)arg0 ;
-(id)_updatedSnapshotWithMerchantTokens:(id)arg0 ;
-(id)initWithPass:(id)arg0 merchantTokensResponse:(id)arg1 ;
-(void)_deselectSelectedItemAnimated:(BOOL)arg0 ;
-(void)_fetchNextPageOfMerchantTokens;
-(void)_setUpCollectionView;
-(void)_setUpSelf;
-(void)_setUpViews;
-(void)_trackButtonTapForMerchantToken:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)merchantTokenDetailViewController:(id)arg0 didDeleteMerchantToken:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif