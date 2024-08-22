// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDPASSGROUPITEMPRESENTER_H
#define PKDASHBOARDPASSGROUPITEMPRESENTER_H

@class UIImageView, NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"

@interface PKDashboardPassGroupItemPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKPassGroupView *_groupView;
    UIImageView *_snapshotView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)initWithPassGroupView:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif