// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISSCROLLVIEWVITALITYCONTROLLER_H
#define ISSCROLLVIEWVITALITYCONTROLLER_H

@class NSHashTable, UIScrollView, NSDate;

#import <Foundation/Foundation.h>

#import "ISVisibilityOffsetHelper.h"

@interface ISScrollViewVitalityController : NSObject

@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // ivar: __isPerformingChanges
@property (readonly, nonatomic) NSHashTable *_playerViews; // ivar: __playerViews
@property (weak, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // ivar: __scrollView
@property (readonly, nonatomic) BOOL canPerformVitality;
@property (nonatomic, getter=isDecelerating) BOOL decelerating; // ivar: _decelerating
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSDate *estimatedScrollEndDate; // ivar: _estimatedScrollEndDate
@property (nonatomic) BOOL hasTargetContentOffset; // ivar: _hasTargetContentOffset
@property (nonatomic, getter=isScrolling) BOOL scrolling; // ivar: _scrolling
@property (nonatomic) CGPoint targetContentOffset; // ivar: _targetContentOffset
@property (readonly, nonatomic) ISVisibilityOffsetHelper *visibilityOffsetHelper; // ivar: _visibilityOffsetHelper


-(id)_newVitalityFilter;
-(id)init;
-(void)_updateVitalityFilters;
-(void)addPlayerView:(id)arg0 ;
-(void)didLayoutPlayerViews;
-(void)performChanges:(id)arg0 ;
-(void)removePlayerView:(id)arg0 ;


@end


#endif