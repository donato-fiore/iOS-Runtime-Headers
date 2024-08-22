// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCE_H
#define CKTRANSACTIONALCOMPONENTDATASOURCE_H

@class NSMutableArray, NSThread, NSString;
@protocol CKComponentStateListener, CKComponentDebugReflowListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKTransactionalComponentDataSourceState.h"
#import "CKTransactionalComponentDataSourceListenerAnnouncer.h"

@interface CKTransactionalComponentDataSource : NSObject <CKComponentStateListener, CKComponentDebugReflowListener>

 {
    CKTransactionalComponentDataSourceState *_state;
    CKTransactionalComponentDataSourceListenerAnnouncer *_announcer;
    unordered_map<int, std::unordered_multimap<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::unordered_multimap<int, id (^)(id)>>>> _pendingAsynchronousStateUpdates;
    unordered_map<int, std::unordered_multimap<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::unordered_multimap<int, id (^)(id)>>>> _pendingSynchronousStateUpdates;
    NSMutableArray *_pendingAsynchronousModifications;
    NSThread *_workThreadOverride;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_cancelEnqueuedModificationsOfType:(Class)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)state;
-(void)_applyModificationPair:(id)arg0 ;
-(void)_enqueueModification:(id)arg0 ;
-(void)_processStateUpdates;
-(void)_startFirstAsynchronousModification;
-(void)_synchronouslyApplyChange:(id)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)applyChangeset:(id)arg0 mode:(NSUInteger)arg1 userInfo:(id)arg2 ;
// -(void)componentScopeHandleWithIdentifier:(int)arg0 rootIdentifier:(int)arg1 didReceiveStateUpdate:(id)arg2 mode:(unk)arg3  ;
-(void)didReceiveReflowComponentsRequest;
-(void)reloadWithMode:(NSUInteger)arg0 userInfo:(id)arg1 ;
-(void)removeListener:(id)arg0 ;
-(void)updateConfiguration:(id)arg0 mode:(NSUInteger)arg1 userInfo:(id)arg2 ;


@end


#endif