// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDBALANCEPRESENTER_H
#define PKDASHBOARDBALANCEPRESENTER_H

@class UICollectionView, NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKDashboardBalanceView.h"

@interface PKDashboardBalancePresenter : NSObject <PKDashboardItemPresenter>

 {
    PKDashboardBalanceView *_sampleBalanceView;
    UICollectionView *_collectionView;
}


@property (nonatomic) NSInteger cellStyle; // ivar: _cellStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)itemClass;
-(id)_identifierForItem:(id)arg0 ;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)_updateMessageView:(id)arg0 withItem:(id)arg1 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif