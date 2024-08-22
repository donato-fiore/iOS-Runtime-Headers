// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI25UPDATECOALESCINGTABLEVIEW_H
#define _TTC7SWIFTUI25UPDATECOALESCINGTABLEVIEW_H

@class UITableView;



@interface _TtC7SwiftUI25UpdateCoalescingTableView : UITableView {
    ? isSidebarStyle;
    ? cachedIdealSize;
    ? rowSpacing;
    ? visibleCellsUpdate;
    ? ignoreGraphUpdates;
    ? pendingGraphUpdate;
    ? pendingScrollTarget;
    ? previousHorizontalMargin;
    ? _lastUpdateSeed;
    ? bridgedState;
    ? shouldDetermineInsetStyle;
    ? needsUpdateAlignmentInsets;
    ? lastConfigurationHash;
}


@property (nonatomic) CGRect bounds;
@property (nonatomic) BOOL sectionContentInsetFollowsLayoutMargins;


+(BOOL)_isInternalTableView;
-(CGFloat)_alignedContentMarginGivenMargin:(CGFloat)arg0 ;
-(CGFloat)_rowSpacing;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
// -(void)performBatchUpdates:(id)arg0 completion:(unk)arg1  ;
-(void)safeAreaInsetsDidChange;


@end


#endif