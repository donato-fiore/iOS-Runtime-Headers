// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITBALANCEANDPAYMENTPRESENTER_H
#define PKCREDITBALANCEANDPAYMENTPRESENTER_H

@class UIViewController<PKSpendingSummaryViewControllerDelegate>, NSDateFormatter, NSString;
@protocol PKCreditPaymentDueCellDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKCreditBalanceCell.h"
#import "PKCreditActivityCell.h"
#import "PKCreditPaymentDueCell.h"
#import "PKAccountServiceAccountResolutionController.h"

@interface PKCreditBalanceAndPaymentPresenter : NSObject <PKCreditPaymentDueCellDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardItemPresenter>

 {
    PKCreditBalanceCell *_sampleBalanceCell;
    PKCreditActivityCell *_sampleActivityCell;
    PKCreditPaymentDueCell *_samplePaymentDueCell;
    UIViewController<PKSpendingSummaryViewControllerDelegate> *_viewController;
    PKAccountServiceAccountResolutionController *_resolutionController;
    NSDateFormatter *_paymentDateFormatter;
    NSDateFormatter *_monthDayFormatter;
    NSDateFormatter *_monthFormatter;
    BOOL _isCompactUI;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_useAccessibilityLayoutForCollectionView:(id)arg0 ;
-(BOOL)cellIsIndependentForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)cellIsStackableForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(id)_accountServiceResoultionControllerWithItem:(id)arg0 ;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)initWithViewController:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureAccountUserSpendingCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)_configureActivityCell:(id)arg0 forItem:(id)arg1 sizing:(BOOL)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(void)_configureBalanceCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)_configurePaymentDueCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)paymentButtonTappedForItem:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif