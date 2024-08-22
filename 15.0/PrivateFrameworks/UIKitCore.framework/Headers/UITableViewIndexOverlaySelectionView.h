// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLEVIEWINDEXOVERLAYSELECTIONVIEW_H
#define UITABLEVIEWINDEXOVERLAYSELECTIONVIEW_H

@class NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;


#import "UIView.h"
#import "UICollectionView.h"
#import "UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout.h"
#import "UITableView.h"

@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    UITableView *_table;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithTable:(id)arg0 ;
-(void)_cellTapped:(id)arg0 ;
-(void)_doneTapped;
-(void)_setIndexColor:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;


@end


#endif