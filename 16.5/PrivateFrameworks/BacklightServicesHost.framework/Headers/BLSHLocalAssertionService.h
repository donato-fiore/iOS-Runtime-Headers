// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHLOCALASSERTIONSERVICE_H
#define BLSHLOCALASSERTIONSERVICE_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSHashTable, NSString;
@protocol BLSHAssertionAttributeHandlerService, OS_dispatch_workloop, OS_dispatch_queue, BLSHOSInterfaceProviding;

#import <Foundation/Foundation.h>

#import "BLSHAggregatedSystemActivityAssertionFactory.h"

@interface BLSHLocalAssertionService : NSObject <BLSHAssertionAttributeHandlerService>

 {
    NSMutableDictionary *_attributeHandlers;
    NSMutableDictionary *_activeAssertions;
    NSMutableArray *_pausedAssertions;
    NSMutableSet *_queue_deferredAcquisitionAssertions;
    NSHashTable *_observers;
    BLSHAggregatedSystemActivityAssertionFactory *_aggregatedAssertionFactory;
    NSUInteger _stateHandler;
    NSObject<OS_dispatch_workloop> *_rootWorkloop;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BLSHOSInterfaceProviding> *osInterfaceProvider; // ivar: _osInterfaceProvider
@property (readonly) Class superclass;


-(id)initWithOSInterfaceProvider:(id)arg0 ;
-(void)acquireAssertion:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelAssertion:(id)arg0 withError:(id)arg1 ;
-(void)pauseAssertion:(id)arg0 ;
-(void)registerAttributeHandler:(id)arg0 forAttributeClasses:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)replaceWithService:(id)arg0 ;
-(void)restartAssertionTimeoutTimer:(id)arg0 ;
-(void)resumeAssertion:(id)arg0 ;
-(void)willCancelAssertion:(id)arg0 ;


@end


#endif