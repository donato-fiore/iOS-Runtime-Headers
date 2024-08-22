// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONHISTORYHEADERPRESENTER_H
#define PKTRANSACTIONHISTORYHEADERPRESENTER_H

@class PKObjectDownloader, PKPaymentService, UICollectionViewCell, UIImage, PKContactResolver, NSString, UIVisualEffect, UIColor;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKContactAvatarManager.h"
#import "PKMapsSnapshotManager.h"

@interface PKTransactionHistoryHeaderPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKObjectDownloader *_fileDownloader;
    PKPaymentService *_paymentService;
    UICollectionViewCell *_templateCell;
    UIImage *_logoImage;
    UIImage *_logoBackgroundImage;
    UIImage *_heroImage;
    BOOL _hasNetworkAccess;
}


@property (retain, nonatomic) PKContactAvatarManager *avatarManager; // ivar: _avatarManager
@property (retain, nonatomic) PKContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIVisualEffect *overlayEffect; // ivar: _overlayEffect
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager; // ivar: _snapshotManager
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(id)_backgroundImageFromLogoImage:(id)arg0 ;
-(id)_installmentProductHeaderCellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_merchantHeaderCellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_peerPaymentHeaderCellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_transactionGroupHeaderCellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_transactionTypeHeaderCellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCategoryHeaderCell:(id)arg0 forItem:(id)arg1 isUpdate:(BOOL)arg2 ;
-(void)_configureCell:(id)arg0 withRegion:(id)arg1 isUpdate:(BOOL)arg2 ;
-(void)_configureInstallmentProductHeaderCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_configureMerchantHeaderCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_configurePeerPaymentHeaderCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureTransactionTypeHeaderCell:(id)arg0 forItem:(id)arg1 ;
-(void)_downloadLogoForItem:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_updateMerchantHeaderImagesOnCell:(id)arg0 item:(id)arg1 ;
-(void)dealloc;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif