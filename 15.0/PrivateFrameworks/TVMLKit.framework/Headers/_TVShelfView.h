// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSHELFVIEW_H
#define _TVSHELFVIEW_H

@class TVCollectionView;


#import "_TVShelfViewLayout.h"

@interface _TVShelfView : TVCollectionView

@property (retain, nonatomic) _TVShelfViewLayout *shelfFlowLayout; // ivar: _shelfFlowLayout


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 shelfViewLayout:(id)arg1 ;
-(struct CGPoint )_contentOffsetForNewFrame:(struct CGRect )arg0 oldFrame:(struct CGRect )arg1 newContentSize:(struct CGSize )arg2 andOldContentSize:(struct CGSize )arg3 ;
-(struct CGRect )tv_augmentedSelectionFrameForFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )tv_sizeThatFits:(struct CGSize )arg0 withContentInset:(struct UIEdgeInsets )arg1 ;
-(struct UIEdgeInsets )_selectionMarginsForCell:(id)arg0 ;
-(struct UIEdgeInsets )selectionMarginsForCellAtIndexPath:(id)arg0 ;
-(void)_updateLayoutForFocusedView:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)updateLayoutForFocusedView:(id)arg0 ;


@end


#endif