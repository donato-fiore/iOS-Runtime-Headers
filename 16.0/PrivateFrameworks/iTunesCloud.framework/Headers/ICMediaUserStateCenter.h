// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMEDIAUSERSTATECENTER_H
#define ICMEDIAUSERSTATECENTER_H

@class NSXPCConnection, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICMediaUserState.h"

@interface ICMediaUserStateCenter : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    os_unfair_lock_s _lock;
    NSXPCConnection *_xpcConnection;
}


@property (readonly, nonatomic) ICMediaUserState *activeUserState;
@property (copy, nonatomic) NSArray *allUserStates; // ivar: _allUserStates


+(id)shared;
-(id)_establishClientConnection;
-(id)_getUserStatesForcingRefresh:(BOOL)arg0 ;
-(id)init;
-(void)_onAsyncServer:(id)arg0 ;
-(void)_onSyncServer:(id)arg0 ;
-(void)applyServerStateUpdatedWithUserStates:(id)arg0 ;
-(void)dealloc;
-(void)refreshUserStatesWithCompletion:(id)arg0 ;


@end


#endif