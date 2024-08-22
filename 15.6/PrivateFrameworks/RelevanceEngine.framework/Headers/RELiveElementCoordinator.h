// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RELIVEELEMENTCOORDINATOR_H
#define RELIVEELEMENTCOORDINATOR_H

@class NSMutableDictionary, NSCountedSet, NSMutableSet, NSString;
@protocol REElementDataSourceControllerDelegate, REElementRelevanceEngineDelegate, REElementDataSourceActivityDelegate, REDataSourceManagerObserver, OS_dispatch_queue;


#import "REElementCoordinator.h"
#import "REElementRelevanceEngine.h"
#import "REUpNextScheduler.h"

@interface RELiveElementCoordinator : REElementCoordinator <REElementDataSourceControllerDelegate, REElementRelevanceEngineDelegate, REElementDataSourceActivityDelegate, REDataSourceManagerObserver>

 {
    REElementRelevanceEngine *_relevanceEngine;
    NSMutableDictionary *_elementIdElementMap;
    REUpNextScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_controllerQueue;
    NSUInteger _scheduleCount;
    BOOL _reloadImmediately;
    NSCountedSet *_remainingInsertOperations;
    NSCountedSet *_remainingRemoveOperations;
    NSUInteger _currentReloadTryCount;
    NSMutableSet *_refreshedElements;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)elementDataSourceController:(id)arg0 isElementVisible:(id)arg1 ;
-(id)_predictionForElement:(id)arg0 ;
-(id)elementForElementId:(id)arg0 ;
-(id)elementRankerForSection:(id)arg0 ;
-(id)elementRelevanceEngine;
-(id)featureMapForElement:(id)arg0 trainingContext:(id)arg1 ;
-(id)featureMapForElementId:(id)arg0 trainingContext:(id)arg1 ;
-(id)featureProviderForElement:(id)arg0 ;
-(id)featureProviderForElementAtPath:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 ;
-(id)predictionForElement:(id)arg0 ;
-(id)predictionForElementAtPath:(id)arg0 ;
-(void)_enumerateSectionsUsingBlock:(id)arg0 ;
-(void)_enumerateSectionsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_onqueue_async:(id)arg0 ;
-(void)_queue_addElement:(id)arg0 toSection:(id)arg1 ;
-(void)_queue_refreshElement:(id)arg0 ;
-(void)_queue_reload;
-(void)_queue_reloadElement:(id)arg0 ;
-(void)_queue_removeElement:(id)arg0 ;
-(void)_queue_scheduleContentUpdate:(BOOL)arg0 ;
-(void)addElement:(id)arg0 toSection:(id)arg1 ;
-(void)dataSource:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)dataSource:(id)arg0 didFinishActivity:(id)arg1 ;
-(void)dataSourceManager:(id)arg0 didLoadDataSourceController:(id)arg1 ;
-(void)dataSourceManager:(id)arg0 willUnloadDataSourceController:(id)arg1 ;
-(void)elementDataSourceController:(id)arg0 didAddElement:(id)arg1 toSection:(id)arg2 ;
-(void)elementDataSourceController:(id)arg0 didRefreshElement:(id)arg1 ;
-(void)elementDataSourceController:(id)arg0 didReloadElement:(id)arg1 ;
-(void)elementDataSourceController:(id)arg0 didRemoveElement:(id)arg1 ;
-(void)elementDataSourceController:(id)arg0 performBatchUpdates:(id)arg1 ;
-(void)relevanceEngine:(id)arg0 didInsertElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didMoveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg0 didRemoveElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didUpdateRelevanceOfElement:(id)arg1 ;
-(void)relevanceEngine:(id)arg0 elementWasAdded:(id)arg1 ;
-(void)relevanceEngine:(id)arg0 elementWasRemoved:(id)arg1 ;
-(void)relevanceEngine:(id)arg0 performedBatchUpdates:(id)arg1 ;
-(void)removeElement:(id)arg0 ;


@end


#endif