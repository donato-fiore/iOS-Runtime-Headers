// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REELEMENTCOORDINATOR_H
#define REELEMENTCOORDINATOR_H

@class NSMutableDictionary, NSMutableArray, NSDictionary;
@protocol REElementCoordinatorProperties, OS_dispatch_queue;


#import "RERelevanceEngineSubsystem.h"
#import "REObserverStore.h"

@interface REElementCoordinator : RERelevanceEngineSubsystem <REElementCoordinatorProperties>

 {
    NSMutableDictionary *_displayElements;
    REObserverStore *_observers;
    BOOL _performingBatch;
    NSMutableArray *_updates;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSDictionary *displayElements;
@property (readonly, nonatomic) NSUInteger numberOfObservers;


+(id)applicationPrewarmIdentifiers;
-(NSUInteger)numberOfElementsInSection:(id)arg0 ;
-(id)elementAtPath:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 ;
-(id)pathForElement:(id)arg0 ;
-(void)_enqueueOrPerformOperation:(id)arg0 ;
-(void)_enumerateValidObservers:(id)arg0 ;
-(void)_performOperation:(id)arg0 toObserver:(id)arg1 ;
-(void)_performOperationsToDisplayElements:(id)arg0 ;
-(void)_performOperationsToDisplayElements:(id)arg0 toSection:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)didAddObserver:(id)arg0 ;
-(void)didRemoveObserver:(id)arg0 ;
-(void)enumerateObservers:(id)arg0 ;
-(void)insertElement:(id)arg0 atPath:(id)arg1 ;
-(void)moveElement:(id)arg0 fromPath:(id)arg1 toPath:(id)arg2 ;
-(void)performBatchUpdateBlock:(id)arg0 ;
-(void)refreshElement:(id)arg0 atPath:(id)arg1 ;
-(void)reloadElement:(id)arg0 atPath:(id)arg1 ;
-(void)removeElement:(id)arg0 atPath:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif