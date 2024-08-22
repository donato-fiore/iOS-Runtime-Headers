// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERELIGIBLESPENDPRESENTER_H
#define PKPAYLATERELIGIBLESPENDPRESENTER_H

@class NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKDashboardTitleDetailCell.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPayLaterEligibleSpendPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKDashboardTitleDetailCell *_sampleCell;
    PKPayLaterSetupFlowController *_payLaterSetupFlowController;
    BOOL _loadingContent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_payLaterAccountHasEligibleSpend:(id)arg0 ;
-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 item:(id)arg1 collectionView:(id)arg2 ;
-(void)_updateAccessoryForCell:(id)arg0 eligibleSpendItem:(id)arg1 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif