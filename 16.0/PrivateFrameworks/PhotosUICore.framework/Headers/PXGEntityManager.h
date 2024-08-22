// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGENTITYMANAGER_H
#define PXGENTITYMANAGER_H

@class NSMapTable, NSMutableArray, NSMutableIndexSet;
@protocol PXGComponentObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGEffectComponent.h"
#import "PXGLoadingStatusComponent.h"

@interface PXGEntityManager : NSObject <PXGComponentObserver>

 {
    NSMapTable *_observersByComponent;
    NSMapTable *_componentByClass;
    NSMutableArray *_components;
    NSMapTable *_componentByDataStore;
    NSMutableIndexSet *_reusableEntityIDs;
    NSInteger _componentsPerformingChangesCount;
}


@property (nonatomic) NSInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) PXGEffectComponent *effectComponent;
@property (readonly, nonatomic) PXGLoadingStatusComponent *loadingStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)_hasObserversForComponent:(id)arg0 ;
-(id)componentForClass:(Class)arg0 ;
-(id)componentsForComponentClasses:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(struct ? )createEntity;
-(void)_configureComponent:(id)arg0 ;
-(void)_notifyChangesForComponent:(id)arg0 ;
-(void)cleanupUnusedObjects;
-(void)componentDidPerformChanges:(id)arg0 ;
-(void)componentWillPerformChanges:(id)arg0 ;
-(void)createEntitiesWithCount:(NSInteger)arg0 addingToArray:(struct ? *)arg1 ;
-(void)destroyEntities:(struct ? *)arg0 count:(NSInteger)arg1 ;
-(void)destroyEntity:(struct ? )arg0 ;
-(void)registerObserver:(id)arg0 forComponents:(id)arg1 ;


@end


#endif