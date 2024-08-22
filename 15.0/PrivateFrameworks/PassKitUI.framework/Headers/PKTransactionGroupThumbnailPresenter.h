// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONGROUPTHUMBNAILPRESENTER_H
#define PKTRANSACTIONGROUPTHUMBNAILPRESENTER_H

@class PKContactResolver, NSCache, UIImage, NSString;
@protocol PKDashboardItemPresenter, PKPaymentDataProvider;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionIconGenerator.h"
#import "PKThumbnailCollectionViewCell.h"
#import "PKContactAvatarManager.h"
#import "PKMapsSnapshotManager.h"

@interface PKTransactionGroupThumbnailPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKContactResolver *_contactResolver;
    NSCache *_iconsPerMerchantCategory;
    UIImage *_mapsPlaceholderImage;
    PKThumbnailCollectionViewCell *_sampleCell;
}


@property (retain, nonatomic) PKContactAvatarManager *avatarManager; // ivar: _avatarManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PKPaymentDataProvider> *paymentDataProvider; // ivar: _paymentDataProvider
@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager; // ivar: _snapshotManager
@property (readonly) Class superclass;


-(CGFloat)thumbnailWidth;
-(Class)itemClass;
-(id)_contactKeysToFetch;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateAvatarOnThumbnailCell:(id)arg0 contact:(id)arg1 ;
-(void)_updateTitleOnThumbnailCell:(id)arg0 withPeerPaymentCounterpartHandle:(id)arg1 contact:(id)arg2 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif