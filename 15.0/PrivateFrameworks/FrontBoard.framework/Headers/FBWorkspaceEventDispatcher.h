// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBWORKSPACEEVENTDISPATCHER_H
#define FBWORKSPACEEVENTDISPATCHER_H

@class NSMutableDictionary;
@protocol FBWorkspaceEventDispatcherTarget;

#import <Foundation/Foundation.h>

#import "FBWorkspaceConnectionsStateStore.h"
#import "FBMutableWorkspaceConnectionsState.h"

@interface FBWorkspaceEventDispatcher : NSObject {
    FBWorkspaceConnectionsStateStore *_store;
    id<FBWorkspaceEventDispatcherTarget> *_target;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_workspaces;
    NSMutableDictionary *_lock_restartAssertions;
    FBMutableWorkspaceConnectionsState *_lock_mutableState;
}




+(id)sharedInstance;
-(id)_initWithConnectionStore:(id)arg0 ;
-(id)init;
-(id)registerWorkspaceWithProcessHandle:(id)arg0 ;
-(void)_mainThread_dispatchHandshakeFromWorkspace:(id)arg0 toTarget:(id)arg1 ;
-(void)noteHandshakeForWorkspaceRegistration:(id)arg0 withRemnants:(id)arg1 ;
-(void)registerTarget:(id)arg0 ;


@end


#endif