// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDTRANSACTIONINSTALLMENTITEMPRESENTER_H
#define PKDASHBOARDTRANSACTIONINSTALLMENTITEMPRESENTER_H

@class NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKDashboardStackedImageCollectionViewCell.h"

@interface PKDashboardTransactionInstallmentItemPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKDashboardStackedImageCollectionViewCell *_sampleCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif