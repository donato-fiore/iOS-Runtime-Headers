// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIMINDFULNESSSESSIONDATAPROVIDER_H
#define FIMINDFULNESSSESSIONDATAPROVIDER_H

@class HKHealthStore, HKSortedSampleArray, HKAnchoredObjectQuery;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FIMindfulnessSessionDataProvider : NSObject {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_serialQueue;
    HKSortedSampleArray *_mindfulnessSessions;
    HKAnchoredObjectQuery *_mindfulnessSessionsQuery;
}




-(id)_createMindfulnessSessionsQueryWithRetryCount:(NSInteger)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(void)_queue_retryMindfulSessionQueryWithRetryCount:(NSInteger)arg0 ;
-(void)_queue_startMindfulnessSessionQueryWithRetryCount:(NSInteger)arg0 ;
-(void)_queue_stopMindfulSessionQuery;
-(void)allMindfulnessSessionsWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)startMindfulnessSessionQueryIfNeeded;


@end


#endif