// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSTODAYCONTENTVIEW_H
#define CSTODAYCONTENTVIEW_H

@class UIView;


#import "CSCoverSheetViewBase.h"

@interface CSTodayContentView : CSCoverSheetViewBase

@property (nonatomic, getter=isBouncing) BOOL bouncing; // ivar: _bouncing
@property (weak, nonatomic) UIView *navigationView; // ivar: _navigationView
@property (weak, nonatomic) UIView *todayView; // ivar: _todayView


-(void)_adjustContentForEdgeBounce;
-(void)_resetContentAfterEdgeBounce;
-(void)layoutSubviews;


@end


#endif