// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWSERVICEDEPUTYMANAGER_H
#define _UIVIEWSERVICEDEPUTYMANAGER_H

@class NSMutableDictionary, NSLock, NSMutableSet, NSString;
@protocol _UIViewServiceViewControllerOperatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UIAsyncInvocation.h"

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;
    id *_terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterfaceSupportingDeputyInterfaces:(id)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)_deputyClassForConnectionSelector:(SEL)arg0 ;
-(NSUInteger)retainCount;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)retain;
-(int)__automatic_invalidation_logic;
-(void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg0 replyHandler:(id)arg1 ;
-(void)__requestConnectionToDeputyOfClass:(Class)arg0 fromHostObject:(id)arg1 replyHandler:(id)arg2 ;
-(void)_invalidateUnconditionallyThen:(id)arg0 ;
-(void)checkDeputyForRotation:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)invalidate;
-(void)registerDeputyClass:(Class)arg0 withConnectionHandler:(id)arg1 ;
-(void)release;
-(void)unregisterDeputyClass:(Class)arg0 ;
-(void)viewControllerOperator:(id)arg0 didCreateServiceViewControllerOfClass:(Class)arg1 ;


@end


#endif