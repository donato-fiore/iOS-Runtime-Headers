// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14CALENDARWIDGET21SPATIALLAYOUTDELEGATE_H
#define _TTC14CALENDARWIDGET21SPATIALLAYOUTDELEGATE_H

@protocol CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;

#import <Foundation/Foundation.h>


@interface _TtC14CalendarWidget21SpatialLayoutDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils>

 {
    ? startDate;
    ? endDate;
    ? startHourToShow;
    ? endHourToShow;
    ? scale;
    ? calendar;
    ? hoursInDay;
    ? secondsInDay;
    ? secondsInMinute;
    ? secondsInHour;
}


@property (nonatomic, readonly) CGRect displayedRect; // ivar: displayedRect
@property (nonatomic, readonly) CGFloat hourHeight;
@property (nonatomic) BOOL originIsUpperLeft; // ivar: originIsUpperLeft
@property (nonatomic, readonly) CGFloat timeWidth;
@property (nonatomic) CGFloat topPadding; // ivar: topPadding


-(CGFloat)RoundToScreenScale:(CGFloat)arg0 ;
-(CGFloat)dateForPoint:(struct CGPoint )arg0 ;
-(id)init;
-(struct CGPoint )pointForDate:(CGFloat)arg0 ;


@end


#endif