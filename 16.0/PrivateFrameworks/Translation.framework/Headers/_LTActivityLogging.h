// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTACTIVITYLOGGING_H
#define _LTACTIVITYLOGGING_H

@class NSCalendar;

#import <Foundation/Foundation.h>


@interface _LTActivityLogging : NSObject {
    NSCalendar *_calendar;
}




-(id)_featureNameForTask:(NSInteger)arg0 ;
-(id)init;
-(void)_logAllActivityFeature:(NSInteger)arg0 date:(id)arg1 ;
-(void)_logDailyActivityFeature:(NSInteger)arg0 date:(id)arg1 ;
-(void)_logMonthlyActivityFeature:(NSInteger)arg0 date:(id)arg1 ;
-(void)_logWeeklyActivityFeature:(NSInteger)arg0 date:(id)arg1 ;
-(void)registerActivity:(NSInteger)arg0 ;


@end


#endif