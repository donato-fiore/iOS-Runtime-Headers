// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTIMERANGE_H
#define AVTIMERANGE_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVInterstitialDateRange.h"
#import "AVInterstitialTimeRange.h"

@interface AVTimeRange : NSObject <NSCopying>



@property (readonly, getter=isCollapsedInTimeLine) BOOL collapsedInTimeLine;
@property (readonly) AVInterstitialDateRange *dateBasedInterstice;
@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly) ? endCMTime;
@property (readonly) CGFloat endTime;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly) AVInterstitialTimeRange *interstice;
@property (readonly, getter=isSkipped) BOOL skipped;
@property (readonly) ? startCMTime;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) CGFloat startTime; // ivar: _startTime


+(id)timeRangeWithInterstice:(id)arg0 ;
+(id)timeRangeZero;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)containsTime:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTimeRange:(id)arg0 ;
-(BOOL)requiresLinearPlaybackForTime:(CGFloat)arg0 ;
-(CGFloat)deltaTimeFromOutsideTime:(CGFloat)arg0 ;
-(CGFloat)pinnedTime:(CGFloat)arg0 ;
-(CGFloat)timeForDate:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateForTime:(CGFloat)arg0 ;
-(id)description;
-(id)endDate;
-(id)init;
-(id)initWithAVTimedMetadataGroup:(id)arg0 ;
-(id)initWithCMTimeRange:(struct ? )arg0 ;
-(id)initWithStartTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)initWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(id)initWithUnionOfCMTimeRanges:(id)arg0 ;
-(id)timeRangeByAddingTimeInterval:(CGFloat)arg0 ;
-(id)timeRangeByAddingTimeInterval:(CGFloat)arg0 shiftingDates:(BOOL)arg1 ;
-(id)timeRangeExcludingTimeRange:(id)arg0 ;
-(id)timeRangeIntersectingWithTimeRange:(id)arg0 ;
-(struct ? )cmTimeRange;
-(void)setMapDate:(id)arg0 toTime:(CGFloat)arg1 ;
-(void)setMapTime:(CGFloat)arg0 toDate:(id)arg1 ;


@end


#endif