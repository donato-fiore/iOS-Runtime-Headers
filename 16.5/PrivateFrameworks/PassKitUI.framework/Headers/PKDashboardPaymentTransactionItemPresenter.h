// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPAYMENTTRANSACTIONITEMPRESENTER_H
#define PKDASHBOARDPAYMENTTRANSACTIONITEMPRESENTER_H

@class PKPaymentDefaultDataProvider, UIFont, UIImage, PKContactResolver, NSString;
@protocol PKDashboardItemPresenter, CNAvatarViewDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionIconGenerator.h"
#import "PKPaymentTransactionDetailsFactory.h"
#import "PKPaymentTransactionCollectionViewCell.h"

@interface PKDashboardPaymentTransactionItemPresenter : NSObject <PKDashboardItemPresenter>

 {
    NSUInteger _context;
    PKPaymentDefaultDataProvider *_dataProvider;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    UIFont *_transactionCellPrimaryLabelFont;
    UIFont *_transactionCellPrimaryLabelPeerPaymentFont;
    UIFont *_transactionCellValueLabelFont;
    UIFont *_transactionCellValueLabelPeerPaymentFont;
    UIFont *_transactionCellSecondaryLabelFont;
    UIFont *_transactionCellSecondaryLabelPeerPaymentFont;
    UIImage *_emptyImage;
    UIImage *_cashbackImage;
    UIImage *_appleCardImage;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    id<CNAvatarViewDelegate> *_avatarViewDelegate;
    PKPaymentTransactionCollectionViewCell *_sampleCell;
    BOOL _useAccessibilityLayout;
}


@property (retain, nonatomic) PKContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldShowIconForTransactionSource:(id)arg0 transaction:(id)arg1 context:(NSUInteger)arg2 ;
-(BOOL)canSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)hideSeparatorForItem:(id)arg0 inCollectionView:(id)arg1 ;
-(Class)itemClass;
-(id)_contactKeysToFetch;
-(id)appleCardImage;
-(id)cashbackImage;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)initWithContext:(NSUInteger)arg0 detailViewStyle:(NSInteger)arg1 avatarViewDelegate:(id)arg2 ;
-(struct CGSize )_imageSize;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)_updateAvatarOnTransactionCell:(id)arg0 withTransaction:(id)arg1 contact:(id)arg2 ;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg0 withPeerPaymentCounterpartHandle:(id)arg1 contact:(id)arg2 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)prefetchForItem:(id)arg0 inCollectionView:(id)arg1 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewControllerForTransaction:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 forcePreventHistory:(BOOL)arg6 completion:(id)arg7 ;


@end


#endif