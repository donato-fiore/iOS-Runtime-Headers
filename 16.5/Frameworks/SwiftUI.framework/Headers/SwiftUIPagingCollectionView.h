// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWIFTUIPAGINGCOLLECTIONVIEW_H
#define SWIFTUIPAGINGCOLLECTIONVIEW_H

@class UICollectionView;



@interface SwiftUIPagingCollectionView : UICollectionView {
    ? pendingIndexPath;
    ? lastScrolledIndexPath;
    ? lastLayoutSize;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif