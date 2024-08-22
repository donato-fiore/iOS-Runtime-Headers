// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCURRENTACTIVITYSUMMARYHELPER_H
#define HDCURRENTACTIVITYSUMMARYHELPER_H

@class HKActivitySummary, NSArray, HKObserverSet, NSDate, NSTimeZone;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDActivitySummaryQueryHelper.h"

@interface HDCurrentActivitySummaryHelper : NSObject {
    HDProfile *_profile;
    HDActivitySummaryQueryHelper *_queryHelper;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _todayIndex;
    NSInteger _yesterdayIndex;
    HKActivitySummary *_todaySummary;
    HKActivitySummary *_yesterdaySummary;
    BOOL _hasLoadedActivitySummaries;
    NSArray *_typesForDataCollection;
    HKObserverSet *_observers;
    NSDate *_dateOverride;
    NSTimeZone *_timezoneOverride;
}


@property (retain, nonatomic) NSDate *dateOverride;
@property (readonly) BOOL hasLoadedActivitySummaries;
@property (retain, nonatomic) NSTimeZone *timezoneOverride;
@property (readonly) HKActivitySummary *todayActivitySummary;
@property (readonly) HKActivitySummary *yesterdayActivitySummary;


-(id)initWithProfile:(id)arg0 ;
-(void)_handleSignificantTimeChangeNotification:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif