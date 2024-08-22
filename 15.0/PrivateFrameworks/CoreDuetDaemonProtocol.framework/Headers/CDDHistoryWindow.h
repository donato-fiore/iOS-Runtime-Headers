// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDHISTORYWINDOW_H
#define CDDHISTORYWINDOW_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface CDDHistoryWindow : NSObject

@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly) CGFloat recurrenceDelta; // ivar: _recurrenceDelta
@property (readonly) CGFloat recurrenceWidth; // ivar: _recurrenceWidth
@property (readonly) NSDate *start; // ivar: _start


+(id)allTimeHistoryWindow;
+(id)dailyHistoryWindowWithWidth:(CGFloat)arg0 endingOnDate:(id)arg1 historyLengthInDays:(int)arg2 ;
+(id)singleDayHistoryWindowWithWidth:(CGFloat)arg0 forDate:(id)arg1 ;
-(id)description;
-(id)initWithStart:(id)arg0 duration:(CGFloat)arg1 recurrenceDelta:(CGFloat)arg2 recurrenceWidth:(CGFloat)arg3 error:(*id)arg4 ;


@end


#endif