// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBWORKSPACEEVENTDISPATCHER_H
#define FBWORKSPACEEVENTDISPATCHER_H

@class NSMutableDictionary, NSMapTable, NSCountedSet;

#import <Foundation/Foundation.h>

#import "FBWorkspaceConnectionsStateStore.h"
#import "FBMutableWorkspaceConnectionsState.h"

@interface FBWorkspaceEventDispatcher : NSObject {
    FBWorkspaceConnectionsStateStore *_store;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_sourcesByPidNumber;
    NSMapTable *_lock_targetsByIdentifier;
    NSCountedSet *_main_incompleteTargetRegistrations;
    NSMutableDictionary *_lock_restartAssertionsByPidNumber;
    FBMutableWorkspaceConnectionsState *_lock_mutableState;
}




+(id)sharedInstance;
-(id)_initWithConnectionStore:(id)arg0 ;
-(id)init;
-(id)registerSourceWithProcessHandle:(id)arg0 ;
-(id)registerTarget:(id)arg0 ;
-(void)_flushCalloutsWithCompletion:(id)arg0 ;
-(void)_mainThread_dispatchHandshakeFromSource:(id)arg0 toTarget:(id)arg1 ;
-(void)noteHandshakeFromSource:(id)arg0 withRemnants:(id)arg1 ;


@end


#endif