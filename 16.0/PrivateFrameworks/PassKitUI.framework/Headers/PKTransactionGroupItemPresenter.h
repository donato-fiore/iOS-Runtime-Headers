// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONGROUPITEMPRESENTER_H
#define PKTRANSACTIONGROUPITEMPRESENTER_H

@class UIFont, UIImage, NSCache, NSDateFormatter, PKContactResolver, NSString;
@protocol PKDashboardItemPresenter, PKPaymentDataProvider;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionCollectionViewCell.h"
#import "PKPaymentTransactionIconGenerator.h"
#import "PKContactAvatarManager.h"
#import "PKMapsSnapshotManager.h"

@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKPaymentTransactionCollectionViewCell *_sampleCell;
    UIFont *_transactionCellPrimaryLabelFont;
    UIFont *_transactionCellValueLabelFont;
    UIFont *_transactionCellSecondaryLabelFont;
    UIImage *_emptyImage;
    UIImage *_cashbackImage;
    UIImage *_transactionListImage;
    UIImage *_interestImage;
    UIImage *_appleCardImage;
    UIImage *_refundsImage;
    UIImage *_adjustmentsImage;
    NSCache *_iconsPerMerchantCategory;
    CGSize _groupSize;
    BOOL _needsSizing;
    NSDateFormatter *_formatterYear;
    NSDateFormatter *_formatterMonth;
    BOOL _useAccessibilityLayout;
    PKPaymentTransactionIconGenerator *_iconGenerator;
}


@property (retain, nonatomic) PKContactAvatarManager *avatarManager; // ivar: _avatarManager
@property (retain, nonatomic) PKContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PKPaymentDataProvider> *paymentDataProvider; // ivar: _paymentDataProvider
@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager; // ivar: _snapshotManager
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(id)_contactKeysToFetch;
-(id)adjustmentsImage;
-(id)appleCardImage;
-(id)cashbackImage;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(id)interestImage;
-(id)refundsImage;
-(id)transactionListImage;
-(struct CGSize )_imageSize;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_applyTokenFiltersFromItem:(id)arg0 toFetcher:(id)arg1 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 forSizing:(BOOL)arg4 ;
-(void)_updateAvatarOnTransactionCell:(id)arg0 withGroup:(id)arg1 contact:(id)arg2 ;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg0 withPeerPaymentCounterpartHandle:(id)arg1 contact:(id)arg2 ;
-(void)_viewControllerForItem:(id)arg0 withCompletion:(id)arg1 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif