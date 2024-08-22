// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JTCOLLECTIONVIEW_H
#define JTCOLLECTIONVIEW_H

@class UICollectionView;



@interface JTCollectionView : UICollectionView

@property (nonatomic) BOOL inLayout; // ivar: _inLayout
@property (nonatomic) CGSize lastCollectionViewSize; // ivar: _lastCollectionViewSize


-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(NSInteger)selectedItem;
-(id)firstVisibleIndexPath;
-(id)sortedIndexPathsForVisibleItems;
-(id)visibleSections;
-(void)layoutIfNeeded;
-(void)layoutSubviews;


@end


#endif