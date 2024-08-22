// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSDATETIMECACHE_H
#define BSDATETIMECACHE_H


#import <Foundation/Foundation.h>


@interface BSDateTimeCache : NSObject {
    CGFloat _yesterday;
    CGFloat _today;
    CGFloat _tomorrow;
    CGFloat _2daysFromNow;
    CGFloat _6daysAgo;
    CGFloat _prevWeek;
    CGFloat _nextWeek;
    CGFloat _lastAttemptedResetTime;
    CGFloat _lastSuccessfulResetTime;
    BOOL _isResetting;
}




+(id)sharedInstance;
-(BOOL)isToday:(CGFloat)arg0 ;
-(BOOL)isTomorrow:(CGFloat)arg0 ;
-(BOOL)isWithinNextWeek:(CGFloat)arg0 ;
-(BOOL)isWithinPrevWeek:(CGFloat)arg0 ;
-(BOOL)isWithinPrevWeek:(CGFloat)arg0 includeToday:(BOOL)arg1 ;
-(BOOL)isYesterday:(CGFloat)arg0 ;
-(CGFloat)nextWeek;
-(CGFloat)prevWeek;
-(CGFloat)today;
-(CGFloat)tomorrow;
-(CGFloat)yesterday;
-(id)description;
-(id)init;
-(void)_resetAndConfigure;
-(void)dealloc;


@end


#endif