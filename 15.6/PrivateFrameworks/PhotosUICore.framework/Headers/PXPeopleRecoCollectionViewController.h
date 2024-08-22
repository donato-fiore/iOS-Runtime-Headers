// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLERECOCOLLECTIONVIEWCONTROLLER_H
#define PXPEOPLERECOCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, UICollectionViewCellRegistration, NSString, UICollectionViewSupplementaryRegistration;
@protocol UICollectionViewDataSourcePrefetching, PXPeopleRecoDataSourceDelegate;


#import "PXPeopleRecoDataSource.h"

@interface PXPeopleRecoCollectionViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXPeopleRecoDataSourceDelegate>



@property (readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (readonly, nonatomic) PXPeopleRecoDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UICollectionViewSupplementaryRegistration *headerRegistration; // ivar: _headerRegistration
@property (readonly) Class superclass;


+(id)recoControllerForPerson:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_initWithPerson:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(void)_doneTapped:(id)arg0 ;
-(void)_tagMoreTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)recoDataSourceDataChanged:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif