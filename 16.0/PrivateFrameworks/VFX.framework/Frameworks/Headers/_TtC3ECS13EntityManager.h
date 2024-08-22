// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC3ECS13ENTITYMANAGER_H
#define _TTC3ECS13ENTITYMANAGER_H

@class SwiftObject;



@interface _TtC3ECS13EntityManager : SwiftObject {
    ? name;
    ? clientID;
    ? isInAuthoringMode;
    ? entityFamilies;
    ? allEntityClasses;
    ? chunkTable;
    ? chunkStorageLock;
    ? allComponentDataChunks;
    ? recycledChunksData;
    ? recycledChunksDataHistory;
    ? workerComponentStorage;
    ? sceneComponentStorage;
    ? groupsCount;
    ? copyQueue;
    ? copyGroup;
    ? relations;
    ? dependencyGraph;
    ? transactionDepth;
    ? hasRunloopTransaction;
    ? didBeginTransactionAtLastFrame;
    ? signpostID;
    ? _entries;
    ? entityCapacity;
    ? entityCount;
    ? generationSalt;
    ? lock;
    ? firstFreeIndex;
    ? measureIndexes;
    ? scheduler;
    ? queryManager;
    ? commandQueues;
    ? updateQueue;
    ? nextFrameBlocks;
    ? nextFrameBlocksLock;
    ? runtimeThread;
    ? invalidated;
    ? imguiEnabled;
    ? syncLock;
    ? asyncQueue;
    ? backgroundingSignalLock;
    ? applicationInBackground;
    ? sceneInBackground;
    ? shouldNotifyEntityEvent;
    ? stateDidChangeFn;
    ? userLogger;
    ? clock;
    ? updateHandlerIndex;
    ? activeStatesPerEffects;
    ? lastNonIdleState;
    ? currentState;
    ? isInPrepare;
}




-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;


@end


#endif