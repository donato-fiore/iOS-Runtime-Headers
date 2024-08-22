// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REPREDICTOR_H
#define REPREDICTOR_H

@class NSCountedSet;
@protocol REPredictorProperties, OS_dispatch_queue;


#import "REObservableSingleton.h"
#import "REObserverStore.h"
#import "REUpNextScheduler.h"

@interface REPredictor : REObservableSingleton <REPredictorProperties>

 {
    NSObject<OS_dispatch_queue> *_queue;
    REObserverStore *_engines;
    REUpNextScheduler *_refreshScheduler;
    NSCountedSet *_activities;
    os_unfair_lock_s _predictorLock;
}


@property (setter=_setIsRunning:) BOOL _isRunning; // ivar: __isRunning
@property (nonatomic) NSInteger beginUpdatesCount; // ivar: _beginUpdatesCount
@property (readonly, nonatomic) NSCountedSet *outstandingActivities;
@property (readonly, nonatomic) BOOL running;


+(CGFloat)updateInterval;
+(id)availablePredictors;
+(id)supportedFeatures;
+(id)systemPredictorsSupportingFeatureSet:(id)arg0 relevanceEngine:(id)arg1 ;
-(BOOL)isRunning;
-(id)_init;
-(id)description;
-(id)engines;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(id)queue;
-(void)_performUpdate;
-(void)addRelevanceEngine:(id)arg0 ;
-(void)beginActivity:(id)arg0 ;
-(void)beginFetchingData;
-(void)beginUpdates;
-(void)dealloc;
-(void)endUpdates;
-(void)enumerateInflectionFeatureValues:(id)arg0 ;
-(void)finishActivity:(id)arg0 ;
-(void)finishFetchingData;
-(void)invalidate;
-(void)onQueue:(id)arg0 ;
-(void)onQueueSync:(id)arg0 ;
-(void)pause;
-(void)removeRelevanceEngine:(id)arg0 ;
-(void)resume;
-(void)update;
-(void)updateObservers;


@end


#endif