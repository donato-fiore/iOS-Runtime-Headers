// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMETRICS_H
#define AMSMETRICS_H

@class NSString, NSDate;
@protocol AMSBagConsumer_Project, AMSBagConsumer, AMSBagProtocol, AMSMetricsBagContract, OS_dispatch_queue, AMSMetricsFlushStrategy;

#import <Foundation/Foundation.h>

#import "AMSMetricsDatabaseDataSource.h"

@interface AMSMetrics : NSObject <AMSBagConsumer_Project, AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSObject<AMSMetricsBagContract> *bagContract;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly, nonatomic) NSString *containerId; // ivar: _containerId
@property (retain, nonatomic) NSObject<AMSMetricsFlushStrategy> *currentFlushStrategy; // ivar: _currentFlushStrategy
@property (retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource; // ivar: _databaseSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger destination; // ivar: _destination
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engagementQueue; // ivar: _engagementQueue
@property (readonly, nonatomic) NSInteger eventCount;
@property (copy, nonatomic) id *flushIntervalBlock; // ivar: _flushIntervalBlock
@property (retain, nonatomic) NSDate *flushIntervalStartTime; // ivar: _flushIntervalStartTime
@property (nonatomic) BOOL flushOnForeground; // ivar: _flushOnForeground
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // ivar: _flushQueue
@property (nonatomic) BOOL flushTimerEnabled; // ivar: _flushTimerEnabled
@property (nonatomic) BOOL flushingDisabled; // ivar: _flushingDisabled
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxBatchSize; // ivar: _maxBatchSize
@property (nonatomic) NSInteger maxRequestCount; // ivar: _maxRequestCount
@property (nonatomic) BOOL monitorsLifecycleEvents; // ivar: _monitorsLifecycleEvents
@property (readonly) Class superclass;


+(BOOL)appAnalyticsAllowed;
+(BOOL)diagnosticsSubmissionAllowed;
+(BOOL)disableBackgroundMetrics;
+(BOOL)flushDelayEnabled;
+(BOOL)recordAppAnalyticsForEvent:(id)arg0 bugType:(id)arg1 ;
+(CGFloat)timeIntervalFromServerTime:(id)arg0 ;
+(id)createBagForSubProfile;
+(id)internalInstanceUsingBag:(id)arg0 ;
+(id)serverTimeFromDate:(id)arg0 ;
+(id)serverTimeFromTimeInterval:(CGFloat)arg0 ;
+(id)sharedTimerQueue;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;
+(void)setDisableBackgroundMetrics:(BOOL)arg0 ;
+(void)setFlushDelayEnabled:(BOOL)arg0 ;
-(BOOL)_scheduledFlushAllowedForStyle:(NSInteger)arg0 ;
-(CGFloat)_flushIntervalForEvents:(id)arg0 ;
-(id)_determineFlushStrategyWithDataSource:(id)arg0 topic:(id)arg1 ;
-(id)_enqueueFigaroEvents:(id)arg0 ;
-(id)_flushDataSource:(id)arg0 topic:(id)arg1 ;
-(id)enqueueAsyncEvents:(id)arg0 ;
-(id)flush;
-(id)flushEvents:(id)arg0 ;
-(id)flushTopic:(id)arg0 ;
-(id)initWithContainerID:(id)arg0 bag:(id)arg1 ;
-(id)initWithContainerId:(id)arg0 bagContract:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)_beginFlushIntervalWithStyle:(NSInteger)arg0 events:(id)arg1 ;
-(void)_flushIntervalInvalidate;
-(void)_handleFlushIntervalWithStyle:(NSInteger)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)dropEvents;
-(void)enqueueEvent:(id)arg0 ;
-(void)enqueueEvents:(id)arg0 ;


@end


#endif