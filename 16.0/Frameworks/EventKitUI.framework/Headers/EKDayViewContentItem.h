// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKDAYVIEWCONTENTITEM_H
#define EKDAYVIEWCONTENTITEM_H

@class NSString, NSDate, EKCalendarDate, EKEvent;
@protocol CUIKSingleDayTimelineViewItem;

#import <Foundation/Foundation.h>

#import "EKDayOccurrenceContentPayload.h"
#import "EKDayOccurrenceState.h"
#import "EKDayOccurrenceView.h"

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem>

 {
    CGRect _stagedFrame;
    CGRect _unPinnedViewFrame;
    CGFloat _visibleHeight;
    BOOL _visibleHeightLocked;
    CGFloat _travelTimeHeight;
    NSInteger _sizeClass;
    NSInteger _currentRequestId;
    EKDayOccurrenceContentPayload *_stagedPayload;
}


@property (nonatomic) CGFloat bottomPinningProximity; // ivar: _bottomPinningProximity
@property (readonly, nonatomic) EKDayOccurrenceState *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *end;
@property (copy, nonatomic) EKCalendarDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) CGFloat enoughHeightForOneLine;
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSUInteger eventIndex; // ivar: _eventIndex
@property (nonatomic) BOOL hasPrecedingDuration; // ivar: _hasPrecedingDuration
@property (nonatomic) BOOL hasTrailingDuration; // ivar: _hasTrailingDuration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideTravelTime;
@property (nonatomic) BOOL isLoadingAsync; // ivar: _isLoadingAsync
@property (nonatomic) BOOL isProposedTime; // ivar: _isProposedTime
@property (readonly, nonatomic) NSDate *start;
@property (copy, nonatomic) EKCalendarDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) EKCalendarDate *startDateIncludingTravelTime;
@property (readonly, nonatomic) NSDate *startWithTravelTime;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topPinningProximity; // ivar: _topPinningProximity
@property (nonatomic) CGFloat travelTime; // ivar: _travelTime
@property (nonatomic) CGFloat travelTimeHeight;
@property CGRect unPinnedViewFrame;
@property (nonatomic) BOOL usesSmallText; // ivar: _usesSmallText
@property (retain, nonatomic) EKDayOccurrenceView *view; // ivar: _view
@property (readonly, nonatomic) CGFloat viewMaxNaturalTextHeight;
@property (nonatomic) CGFloat visibleHeight;
@property (readonly) BOOL visibleHeightLocked;


+(CGFloat)barToBarHorizontalDistanceIncludingBarWidth;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPinned;
-(id)initWithEventIndex:(NSUInteger)arg0 sizeClass:(NSInteger)arg1 ;
-(struct CGRect )stagedFrame;
-(void)_requestPayloadAnimated:(BOOL)arg0 drawSynchronously:(BOOL)arg1 ;
-(void)_updateWithPayload:(id)arg0 ;
-(void)setStagedFrame:(struct CGRect )arg0 ;


@end


#endif