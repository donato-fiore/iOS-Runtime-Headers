// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDPEERPAYMENTACTIONPRESENTER_H
#define PKDASHBOARDPEERPAYMENTACTIONPRESENTER_H

@class PKTransactionSourceCollection, NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKDashboardActionButtonCollectionViewCell.h"

@interface PKDashboardPeerPaymentActionPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKDashboardActionButtonCollectionViewCell *_sampleCell;
    PKTransactionSourceCollection *_transactionSourceCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_useAccessiblityLayoutForCollectionView:(id)arg0 ;
-(BOOL)cellIsIndependentForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)initWithTransactionSourceCollection:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 item:(id)arg1 collectionView:(id)arg2 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif