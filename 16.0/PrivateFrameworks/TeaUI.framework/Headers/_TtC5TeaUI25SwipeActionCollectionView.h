// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI25SWIPEACTIONCOLLECTIONVIEW_H
#define _TTC5TEAUI25SWIPEACTIONCOLLECTIONVIEW_H

@class UICollectionView;



@interface _TtC5TeaUI25SwipeActionCollectionView : UICollectionView {
    ? swipeActionManager;
    ? dependencyCleanupBlocks;
    ? coordinatingResetBlocks;
    ? coordinatingCancelBlocks;
    ? updateGroup;
    ? swipeActionRestoreState;
    ? isBottomRubberBanding;
}


@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) CGPoint contentOffset;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)handleFromCoordinatingGestureWithGestureRecognizer:(id)arg0 ;
-(void)handlePanGestureWithGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif