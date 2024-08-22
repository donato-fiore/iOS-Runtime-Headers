// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTEVENTRECORDERAMSMETRICSDELEGATE_H
#define MTEVENTRECORDERAMSMETRICSDELEGATE_H

@class NSMutableDictionary, NSString, AMSPromise;
@protocol MTEventRecorderDelegate, AMSBagProtocol, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MTEventRecorderAMSMetricsDelegate : NSObject <MTEventRecorderDelegate>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *amsBag; // ivar: _amsBag
@property (retain, nonatomic) NSMutableDictionary *amsMetricsByTopic; // ivar: _amsMetricsByTopic
@property (retain, nonatomic) NSString *containerId; // ivar: _containerId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger flushMode; // ivar: _flushMode
@property (nonatomic) CGFloat flushTimeInterval; // ivar: _flushTimeInterval
@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled; // ivar: _flushTimerEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumBatchSize; // ivar: _maximumBatchSize
@property (retain, nonatomic) AMSPromise *metricsBagPromise; // ivar: _metricsBagPromise
@property (nonatomic) BOOL monitorsLifecycleEvents; // ivar: _monitorsLifecycleEvents
@property (nonatomic) NSInteger numberOfPendingEvents; // ivar: _numberOfPendingEvents
@property (retain, nonatomic) NSMutableDictionary *periodicQueuesByTopic; // ivar: _periodicQueuesByTopic
@property (nonatomic) BOOL personalizedWithItunesAccount; // ivar: _personalizedWithItunesAccount
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (nonatomic, getter=isTransactionEnabled) BOOL transactionEnabled; // ivar: _transactionEnabled


+(id)amsMetricsObjectCache;
-(id)_recordEvent:(id)arg0 toTopic:(id)arg1 ;
-(id)_sortedEventsFromBatch:(id)arg0 ;
-(id)activeItunesAccount;
-(id)amsContainerIdForTopic:(id)arg0 ;
-(id)amsMetricsForTopic:(id)arg0 ;
-(id)flushUnreportedEvents;
-(id)initWithContainerId:(id)arg0 amsBag:(id)arg1 ;
-(id)initWithContainerId:(id)arg0 profileName:(id)arg1 profileVersion:(id)arg2 ;
-(id)lookupItunesAccount:(id)arg0 ;
-(id)periodicQueueForTopic:(id)arg0 ;
-(id)recordEvent:(id)arg0 toTopic:(id)arg1 ;
-(id)sendMethod;
-(void)_beginTransaction;
-(void)_endTransaction;
-(void)_flushEvents:(id)arg0 topic:(id)arg1 ;


@end


#endif