// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOGEVENTDISPATCHER_H
#define HMDLOGEVENTDISPATCHER_H

@class HMFObject, NSString, NSMapTable;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;


#import "HMDMetricsManager.h"

@interface HMDLogEventDispatcher : HMFObject <HMMLogEventSubmitting>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *logEventObserversByClass; // ivar: _logEventObserversByClass
@property (weak) HMDMetricsManager *metricsManager; // ivar: _metricsManager
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(void)addObserver:(id)arg0 forEventClass:(Class)arg1 ;
-(void)addObserver:(id)arg0 forEventClasses:(id)arg1 ;
-(void)removeObserver:(id)arg0 forEventClass:(Class)arg1 ;
-(void)submitLogEvent:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 error:(id)arg1 ;


@end


#endif