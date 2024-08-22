// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLESTRIPCOLLECTIONVIEWCONTROLLER_H
#define PXPEOPLESTRIPCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSString;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching, PXPeopleStripCollectionViewControllerDelegate;


#import "PXPeopleDataSource.h"
#import "PXPeopleStripCollectionViewCell.h"

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching>



@property (weak, nonatomic) PXPeopleDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPeopleStripCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPeopleStripCollectionViewCell *preloadedCell; // ivar: _preloadedCell
@property (readonly) Class superclass;


+(id)_formattedPeopleForMember:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 ;
-(struct CGPoint )collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)contentWidthChanged;
-(void)viewDidLoad;


@end


#endif