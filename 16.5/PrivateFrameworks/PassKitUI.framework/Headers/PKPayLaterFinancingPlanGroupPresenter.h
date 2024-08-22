// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANGROUPPRESENTER_H
#define PKPAYLATERFINANCINGPLANGROUPPRESENTER_H

@class NSNumberFormatter, PKAccountService, NSArray, NSString;
@protocol PKAccountServiceObserver, PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKDashboardTitleDetailCell.h"

@interface PKPayLaterFinancingPlanGroupPresenter : NSObject <PKAccountServiceObserver, PKDashboardItemPresenter>

 {
    PKDashboardTitleDetailCell *_sampleCell;
    NSNumberFormatter *_numberFormatter;
    PKAccountService *_accountService;
    NSArray *_completedFinancingPlans;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 item:(id)arg1 collectionView:(id)arg2 ;
-(void)_removeCachedFinancingPlans;
-(void)accountFinancingPlanAdded:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanRemoved:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanUpdated:(id)arg0 oldFinancingPlan:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif