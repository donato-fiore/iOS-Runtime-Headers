// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONTABLEINDEXOVERLAYSELECTIONVIEW_H
#define _UICOLLECTIONTABLEINDEXOVERLAYSELECTIONVIEW_H

@class NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, _UICollectionTableIndexOverlayHost;


#import "UIView.h"
#import "UICollectionView.h"
#import "_UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout.h"

@interface _UICollectionTableIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    id<_UICollectionTableIndexOverlayHost> *_host;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithHost:(id)arg0 ;
-(void)_cellTapped:(id)arg0 ;
-(void)_doneTapped;
-(void)_setIndexColor:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;


@end


#endif