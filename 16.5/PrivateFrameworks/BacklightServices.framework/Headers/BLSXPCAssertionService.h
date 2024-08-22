// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSXPCASSERTIONSERVICE_H
#define BLSXPCASSERTIONSERVICE_H

@class BSServiceConnection, NSMapTable, NSMutableSet, NSString;
@protocol BLSAssertionService, BLSXPCAssertionServiceClientInterface, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLSXPCAssertionService : NSObject <BLSAssertionService, BLSXPCAssertionServiceClientInterface, BSInvalidatable>

 {
    NSObject<OS_dispatch_queue> *_requestQueue;
    BSServiceConnection *_connection;
    NSMapTable *_queue_assertions;
    NSMutableSet *_queue_assertionsToReacquire;
    os_unfair_lock_s _lock;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultEndpoint;
-(id)init;
-(id)initWithEndpoint:(id)arg0 ;
-(void)acquireAssertion:(id)arg0 ;
-(void)assertion:(id)arg0 failedToAcquireWithError:(id)arg1 ;
-(void)assertionAcquired:(id)arg0 ;
-(void)assertionDidCancel:(id)arg0 withError:(id)arg1 ;
-(void)assertionPaused:(id)arg0 ;
-(void)assertionResumed:(id)arg0 ;
-(void)assertionWillCancel:(id)arg0 ;
-(void)cancelAssertion:(id)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)replaceWithService:(id)arg0 ;
-(void)restartAssertionTimeoutTimer:(id)arg0 ;


@end


#endif