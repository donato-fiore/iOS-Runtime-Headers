// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef C2SESSIONPOOL_H
#define C2SESSIONPOOL_H

@class NSString, NSMutableDictionary, NSMapTable;
@protocol C2SessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "C2RoutingTable.h"
#import "C2SessionTLSCache.h"

@interface C2SessionPool : NSObject <C2SessionDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cleanUp_queue; // ivar: _cleanUp_queue
@property (nonatomic) BOOL cleanUp_running; // ivar: _cleanUp_running
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) C2RoutingTable *routingTable; // ivar: _routingTable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionCreation_queue; // ivar: _sessionCreation_queue
@property (retain, nonatomic) NSMutableDictionary *sessionGroupForSessionConfigurationName; // ivar: _sessionGroupForSessionConfigurationName
@property (retain, nonatomic) C2SessionTLSCache *sessionTLSCache; // ivar: _sessionTLSCache
@property (readonly) Class superclass;
@property (nonatomic) BOOL testBehavior_disableAutomaticCleanup; // ivar: _testBehavior_disableAutomaticCleanup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDelegateQueue; // ivar: _underlyingDelegateQueue
@property (retain, nonatomic) NSMapTable *useCountByObject; // ivar: _useCountByObject


-(BOOL)_cleanUp_job;
-(BOOL)_unsafe_isCreating:(id)arg0 ;
-(BOOL)testBehavior_cleanUp;
-(id)createDataTaskWithRequestIdentifer:(id)arg0 request:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(*id)arg4 ;
-(id)init;
-(void)C2Session:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)C2Session:(id)arg0 originalHost:(id)arg1 updatedRoute:(id)arg2 ;
-(void)_cleanUp_schedule;
-(void)_unsafe_didCreate:(id)arg0 ;
-(void)_unsafe_removeSession:(id)arg0 ;
-(void)_unsafe_removeSessionGroupIfEmpty:(id)arg0 ;
-(void)_unsafe_willCreate:(id)arg0 ;
-(void)ensureCleanUpRunning;
-(void)removeSession:(id)arg0 ;


@end


#endif