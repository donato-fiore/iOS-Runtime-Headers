// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDPAYMENTPRODUCTSTRANSITPRESENTER_H
#define PKDASHBOARDPAYMENTPRODUCTSTRANSITPRESENTER_H

@class NSString;
@protocol PKDashboardItemPresenter, PKPerformActionViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"
#import "PKPassTransitProductsViewController.h"
#import "PKAdjustableSingleCellView.h"
#import "PKFusedDoubleCellView.h"

@interface PKDashboardPaymentProductsTransitPresenter : NSObject <PKDashboardItemPresenter, PKPerformActionViewControllerDelegate>

 {
    PKPassGroupView *_passGroupView;
    PKPassTransitProductsViewController *_productDetailsController;
    PKAdjustableSingleCellView *_sampleSingleCellView;
    PKFusedDoubleCellView *_sampleFusedCellView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)cellIsIndependentForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(NSInteger)_viewTypeForTransitItem:(id)arg0 ;
-(id)_actionHandlerForItem:(SEL)arg0 indexPath:(id)arg1 ;
-(id)_allocViewForTransitItem:(id)arg0 ;
-(id)_identifierForItem:(id)arg0 ;
-(id)_passForTransitItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_renewActionForItem:(id)arg0 commutePlanIdentifier:(id)arg1 ;
-(id)_sampleViewForTransitItem:(id)arg0 ;
-(id)_topUpActionForItem:(id)arg0 indexPath:(id)arg1 balanceIdentifier:(id)arg2 ;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)displayableBalancesForTransitItem:(id)arg0 ;
-(id)initWithPassGroupView:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)_configureView:(*id)arg0 transitItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif