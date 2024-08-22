// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RETRAININGMANAGER_H
#define RETRAININGMANAGER_H

@class NSMutableSet, NSMutableArray;
@protocol RERemoteTrainingClientListenerDelegate, RETrainingManagerProperties, OS_dispatch_queue;


#import "RERelevanceEngineSubsystem.h"
#import "RELiveElementCoordinator.h"
#import "REMLModelManager.h"
#import "RETrainingScheduler.h"
#import "RERemoteTrainingClientListener.h"
#import "RETrainingContext.h"

@interface RETrainingManager : RERelevanceEngineSubsystem <RERemoteTrainingClientListenerDelegate, RETrainingManagerProperties>

 {
    RELiveElementCoordinator *_coordinator;
    REMLModelManager *_modelManager;
    RETrainingScheduler *_trainingScheduler;
    NSMutableSet *_trainingContexts;
    NSObject<OS_dispatch_queue> *_queue;
    RERemoteTrainingClientListener *_remoteTrainingListener;
    NSMutableArray *_trainingFeatureMaps;
    NSMutableArray *_trainingContents;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_interactionTypes;
}


@property (retain) RETrainingContext *currentTrainingContext; // ivar: _currentTrainingContext
@property (readonly, nonatomic) NSMutableArray *trainingEvents;
@property (readonly, nonatomic) RETrainingScheduler *trainingScheduler;


-(id)initWithRelevanceEngine:(id)arg0 ;
-(void)_performTraining:(BOOL)arg0 completion:(id)arg1 ;
-(void)_performTrainingForPredictionElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 context:(id)arg3 ;
-(void)_queue_trainElementWithIdentifier:(id)arg0 relevanceProviders:(id)arg1 featureMap:(id)arg2 isPositiveEvent:(BOOL)arg3 interaction:(id)arg4 context:(id)arg5 ;
-(void)addTrainingContext:(id)arg0 ;
-(void)dealloc;
-(void)flushTraining;
-(void)makeContextCurrent:(id)arg0 ;
-(void)manuallyPerformTrainingWithCompletion:(id)arg0 ;
-(void)performTrainingForElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;
-(void)performTrainingForElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 context:(id)arg3 ;
-(void)performTrainingForElementWithIdentifier:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;
-(void)performTrainingForElementWithIdentifier:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 context:(id)arg3 ;
-(void)remoteTrainingClientListenerDidConnectContext:(id)arg0 ;
-(void)remoteTrainingClientListenerDidDisconnectContext:(id)arg0 ;
-(void)removeTrainingContext:(id)arg0 ;


@end


#endif