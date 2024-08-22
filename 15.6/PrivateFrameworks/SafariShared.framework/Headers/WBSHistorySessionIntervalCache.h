// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYSESSIONINTERVALCACHE_H
#define WBSHISTORYSESSIONINTERVALCACHE_H

@class NSCalendar;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSHistorySessionIntervalCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_calendar;
    Vector<double, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _intervalCache;
}




-(CGFloat)_beginningOfSessionContainingTime:(CGFloat)arg0 ;
-(CGFloat)beginningOfSessionContainingTime:(CGFloat)arg0 ;
-(id)init;
-(id)initWithCalendar:(id)arg0 ;
-(void)_getSessionIntervalForTime:(CGFloat)arg0 beginningOfDay:(*CGFloat)arg1 beginningOfNextDay:(*CGFloat)arg2 ;


@end


#endif