// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEDETAILSETTINGSFACECROPCONTROLLER_H
#define PXPEOPLEDETAILSETTINGSFACECROPCONTROLLER_H

@class UIViewController, UICollectionView, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;


#import "PXPeopleDetailSettingsFaceCropDataSource.h"

@interface PXPeopleDetailSettingsFaceCropController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) PXPeopleDetailSettingsFaceCropDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif