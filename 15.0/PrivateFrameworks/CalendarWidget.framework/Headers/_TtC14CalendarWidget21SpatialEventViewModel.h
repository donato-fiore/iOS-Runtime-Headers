// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14CALENDARWIDGET21SPATIALEVENTVIEWMODEL_H
#define _TTC14CALENDARWIDGET21SPATIALEVENTVIEWMODEL_H

@class NSString, NSDate;
@protocol CUIKSingleDayTimelineViewItem;

#import <Foundation/Foundation.h>


@interface _TtC14CalendarWidget21SpatialEventViewModel : NSObject <CUIKSingleDayTimelineViewItem>

 {
    ? event;
    ? delegate;
    ? lineHeight;
    ? viewStartDate;
    ? viewEndDate;
    ? frame;
    ? visibleHeight;
    ? travelTimeHeight;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) CGFloat enoughHeightForOneLine;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic) BOOL hideTravelTime; // ivar: hideTravelTime
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (nonatomic) CGRect unPinnedViewFrame; // ivar: unPinnedViewFrame
@property (nonatomic, readonly) CGFloat viewMaxNaturalTextHeight;
@property (nonatomic) BOOL visibleHeightLocked; // ivar: visibleHeightLocked


+(CGFloat)barToBarHorizontalDistanceIncludingBarWidth;
-(id)init;
-(struct CGRect )stagedFrame;
-(void)setStagedFrame:(struct CGRect )arg0 ;
-(void)setTravelTimeHeight:(CGFloat)arg0 ;
-(void)setVisibleHeight:(CGFloat)arg0 ;


@end


#endif