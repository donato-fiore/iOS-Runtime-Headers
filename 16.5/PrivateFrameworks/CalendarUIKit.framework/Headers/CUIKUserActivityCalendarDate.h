// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKUSERACTIVITYCALENDARDATE_H
#define CUIKUSERACTIVITYCALENDARDATE_H

@class NSDate;


#import "CUIKUserActivity.h"

@interface CUIKUserActivityCalendarDate : CUIKUserActivity

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL isTomorrow;
@property (readonly, nonatomic) NSUInteger view; // ivar: _view


-(id)dictionary;
-(id)initWithDate:(id)arg0 view:(NSUInteger)arg1 ;
-(id)initWithDate:(id)arg0 view:(NSUInteger)arg1 calendar:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)updateActivity:(id)arg0 ;


@end


#endif