// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI30UPDATECOALESCINGCOLLECTIONVIEW_H
#define _TTC7SWIFTUI30UPDATECOALESCINGCOLLECTIONVIEW_H

@class UICollectionView;



@interface _TtC7SwiftUI30UpdateCoalescingCollectionView : UICollectionView {
    ? forceLayoutOnNextSizeChange;
    ? safeAreaTransitionState;
    ? cachedIdealSize;
    ? visibleCellsUpdate;
    ? postUpdateInvalidations;
    ? ignoreGraphUpdates;
    ? pendingGraphUpdate;
    ? pendingScrollTarget;
    ? pendingDeselectedItem;
    ? _lastUpdateSeed;
    ? bridgedState;
    ? eventState;
}


@property (nonatomic, readonly) BOOL _wantsConstraintBasedLayout;
@property (nonatomic) CGRect bounds;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic) CGSize contentSize;
@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)layoutSubviews;
// -(void)performBatchUpdates:(id)arg0 completion:(unk)arg1  ;
-(void)safeAreaInsetsDidChange;


@end


#endif