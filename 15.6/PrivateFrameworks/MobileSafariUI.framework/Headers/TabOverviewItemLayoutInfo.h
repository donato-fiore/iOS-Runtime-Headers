// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABOVERVIEWITEMLAYOUTINFO_H
#define TABOVERVIEWITEMLAYOUTINFO_H

@class NSArray, UIView;

#import <Foundation/Foundation.h>

#import "TabOverview.h"
#import "TabOverviewItem.h"
#import "TabOverviewItemView.h"
#import "TabOverviewInterpolatedValue.h"
#import "TabOverviewInterpolatedLocation.h"

@interface TabOverviewItemLayoutInfo : NSObject {
    NSArray *_interpolatedValues;
    BOOL _snapshotBlank;
    BOOL _closeSynchronized;
    BOOL _visibleInTabOverview;
    BOOL _interactivelyInserted;
    TabOverview *_tabOverview;
    TabOverviewItem *_tabOverviewItem;
    UIView *_borrowedContentView;
    CGFloat _borrowedContentHeaderHeight;
    TabOverviewItemView *_itemView;
    CGFloat _interactiveInsertionProgress;
    CGFloat _alpha;
    CGFloat _snapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedSnapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedTopBackdropHeight;
    TabOverviewInterpolatedValue *_interpolatedCornerRadius;
    TabOverviewInterpolatedValue *_interpolatedHeightTransitionPercent;
    TabOverviewInterpolatedValue *_interpolatedBoundsLogScale;
    UIView *_attachedView;
    CGFloat _dimmingAlpha;
    TabOverviewInterpolatedLocation *_interpolatedLocation;
    CGRect _snapshotFrame;
    CGRect _attachedViewReferenceRect;
    CGRect _frame;
    ? _closeLastLayoutLocation;
    ? _closeStartLocation;
}




-(id)init;
-(void)dealloc;


@end


#endif