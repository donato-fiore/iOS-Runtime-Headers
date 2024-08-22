// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7SWIFTUI30UPDATECOALESCINGCOLLECTIONVIEW_H
#define _TTC7SWIFTUI30UPDATECOALESCINGCOLLECTIONVIEW_H

@class UICollectionView;



@interface _TtC7SwiftUI30UpdateCoalescingCollectionView : UICollectionView {
    ? cachedIdealSize;
    ? visibleCellsUpdate;
    ? postUpdateInvalidations;
    ? pendingScrollTarget;
    ? _lastUpdateSeed;
    ? bridgedState;
}


@property (nonatomic, readonly) BOOL _wantsConstraintBasedLayout;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)layoutSubviews;
// -(void)performBatchUpdates:(id)arg0 completion:(unk)arg1  ;


@end


#endif