// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMOPENSTATE_H
#define GEOMAPITEMOPENSTATE_H


#import <Foundation/Foundation.h>


@interface GEOMapItemOpenState : NSObject



+(NSUInteger)_checkForStateWithStartTime:(CGFloat)arg0 endtime:(CGFloat)arg1 compareTimeInSeconds:(CGFloat)arg2 openingSoonThreshold:(CGFloat)arg3 closingSoonThreshold:(CGFloat)arg4 secondsOverMidnightForTomorrow:(CGFloat)arg5 isTodaysNormalizedHours:(BOOL)arg6 tomorrowsHoursBeginAtMidnight:(BOOL)arg7 ;
+(NSUInteger)_geoMapItemOpeningHoursOptionsForBusinessHours:(id)arg0 compareDate:(id)arg1 timeZone:(id)arg2 ;
+(NSUInteger)_geoMapItemOpeningHoursOptionsForNormalizedHours:(id)arg0 compareDate:(id)arg1 timeZone:(id)arg2 ;


@end


#endif