// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBWORKSPACECONNECTIONSSTATESTORE_H
#define FBWORKSPACECONNECTIONSSTATESTORE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBWorkspaceConnectionsState.h"

@interface FBWorkspaceConnectionsStateStore : NSObject {
    NSString *_path1;
    NSString *_path2;
    NSObject<OS_dispatch_queue> *_queue;
    FBWorkspaceConnectionsState *_queue_state;
    NSInteger _queue_lastBuffer;
    NSInteger _queue_nextWriteFailure;
    BOOL _queue_writeFailedOnce;
}


@property (readonly, nonatomic) NSInteger _lastUsedBuffer;
@property (copy, nonatomic) FBWorkspaceConnectionsState *state;


+(BOOL)_storeState:(id)arg0 toPath:(id)arg1 withGeneration:(BOOL)arg2 injectedFailure:(*NSInteger)arg3 ;
+(id)_loadStateFromPath:(id)arg0 outGeneration:(*BOOL)arg1 outExisted:(*BOOL)arg2 ;
+(void)_unlinkAllForIdentifier:(id)arg0 ;
+(void)_unlinkShmPath:(id)arg0 graceful:(BOOL)arg1 ;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)init;
-(void)_setFailureModeForNextWrite:(NSInteger)arg0 ;


@end


#endif