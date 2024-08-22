// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TICOUNTERCHANGECACHE_H
#define TICOUNTERCHANGECACHE_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TIEventDescriptorRegistry.h"
#import "TIMetricDescriptorRegistry.h"

@interface TICounterChangeCache : NSObject {
    TIEventDescriptorRegistry *_eventDescriptorRegistry;
    TIMetricDescriptorRegistry *_metricDescriptorRegistry;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableSet *_referencedCounters;
    BOOL _userModelRateLimitingDisabled;
    CGFloat _timeOfLastPersist;
}




-(id)initWithEventDescriptorRegistry:(id)arg0 metricDescriptorRegistry:(id)arg1 ;
-(void)addCounterReferencesForMetric:(id)arg0 ;
-(void)addStatisticChanges:(id)arg0 withContext:(id)arg1 ;
-(void)close;
-(void)keyboardDidSuspendForDate:(id)arg0 ;
-(void)loadReferencedCounters;
-(void)persistForDate:(id)arg0 ;
-(void)queueCompletionHandler:(id)arg0 ;


@end


#endif