// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPASSTILESITEMPRESENTER_H
#define PKDASHBOARDPASSTILESITEMPRESENTER_H

@class NSString;
@protocol PKPassTileGroupViewDelegate, PKDashboardItemPresenter, PKDashboardPassTilesItemPresenterDelegate;

#import <Foundation/Foundation.h>

#import "PKDashboardContentHostCollectionViewCell.h"

@interface PKDashboardPassTilesItemPresenter : NSObject <PKPassTileGroupViewDelegate, PKDashboardItemPresenter>

 {
    PKDashboardContentHostCollectionViewCell *_sampleCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardPassTilesItemPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)passTileGroupView:(id)arg0 executeSEActionForPass:(id)arg1 tile:(id)arg2 withCompletion:(id)arg3 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif