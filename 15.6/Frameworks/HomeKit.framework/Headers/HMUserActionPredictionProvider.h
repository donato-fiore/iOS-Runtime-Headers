// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERACTIONPREDICTIONPROVIDER_H
#define HMUSERACTIONPREDICTIONPROVIDER_H

@class NSMapTable, NSString, NSMutableDictionary, HMFMessageDispatcher, NSUUID;
@protocol HMFMessageReceiver, HMFLogging, HMUserActionPredictionProviderDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMUserActionPredictionDuetDataSource.h"
#import "HMUserActionPredictionTransformer.h"

@interface HMUserActionPredictionProvider : NSObject <HMFMessageReceiver, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMapTable *_subscribers;
    BOOL _shouldRefetchFromDuet;
}


@property (readonly, weak) NSObject<HMUserActionPredictionProviderDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMUserActionPredictionDuetDataSource *duetDataSource; // ivar: _duetDataSource
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableDictionary *lastMappedPredictionsPerHome; // ivar: _lastMappedPredictionsPerHome
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMUserActionPredictionTransformer *predictionTransformer; // ivar: _predictionTransformer
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 UUID:(id)arg2 dataSource:(id)arg3 duetDataSource:(id)arg4 predictionTransformer:(id)arg5 ;
-(void)_handleRefreshPredictionsMessage:(id)arg0 ;
-(void)addSubscriber:(id)arg0 forHomeIdentifier:(id)arg1 ;
-(void)configure;
-(void)fetchPredictionsForHomeWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)recalculatePredictions;
-(void)removeSubscriber:(id)arg0 forHomeIdentifier:(id)arg1 ;
-(void)unconfigure;


@end


#endif