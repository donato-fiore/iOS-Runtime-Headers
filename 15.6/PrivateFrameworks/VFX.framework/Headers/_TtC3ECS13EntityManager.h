// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC3ECS13ENTITYMANAGER_H
#define _TTC3ECS13ENTITYMANAGER_H

@class SwiftObject;



@interface _TtC3ECS13EntityManager : SwiftObject {
    ? name;
    ? clientID;
    ? entityFamilies;
    ? allEntityClasses;
    ? freedEntityClassesIndices;
    ? workerComponentStorage;
    ? sceneComponentStorage;
    ? groupsCount;
    ? copyQueue;
    ? copyGroup;
    ? dependencyGraph;
    ? transactionDepth;
    ? hasRunloopTransaction;
    ? didBeginTransactionAtLastFrame;
    ? signpostID;
    ? _entries;
    ? entityCapacity;
    ? entityCount;
    ? lock;
    ? firstFreeIndex;
    ? measureIndexes;
    ? scheduler;
    ? queryManager;
    ? globalCommandQueue;
    ? commandQueueByWorkerIndex;
    ? updateQueue;
    ? nextFrameBlocks;
    ? nextFrameBlocksLock;
    ? runtimeThread;
    ? imguiEnabled;
    ? syncLock;
    ? asyncQueue;
    ? backgroundingSignalLock;
    ? applicationInBackground;
    ? sceneInBackground;
    ? stateDidChangeFn;
    ? userLogger;
    ? clock;
    ? updateHandlerIndex;
    ? activeStatesPerEffects;
    ? lastNonIdleState;
    ? currentState;
}




-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;


@end


#endif