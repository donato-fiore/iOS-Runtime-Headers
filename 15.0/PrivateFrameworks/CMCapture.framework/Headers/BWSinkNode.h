// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSINKNODE_H
#define BWSINKNODE_H

@class NSMutableArray, NSString;


#import "BWNode.h"
#import "FigStateMachine.h"

@interface BWSinkNode : BWNode {
    FigStateMachine *_stateMachine;
    os_unfair_lock_s _stateLock;
    NSMutableArray *_handlersToCallWhenIdle;
    NSMutableArray *_handlersToCallWhenActive;
    *OpaqueFigSimpleMutex _configurationHandlerLock;
    NSInteger _liveConfigurationID;
    NSMutableArray *_configurationLiveHandlers;
    NSMutableArray *_configurationLiveIDs;
}


@property (readonly) NSString *currentStateDebugString;
@property (readonly) BOOL isActive;
@property (readonly) NSInteger liveConfigurationID;
@property (readonly, copy, nonatomic) NSString *sinkID; // ivar: _sinkID


+(void)initialize;
-(id)initWithSinkID:(id)arg0 ;
-(id)nodeType;
-(void)_setupSinkNodeStateMachine;
-(void)addOutput:(id)arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)notifyWhenActive:(id)arg0 ;
-(void)notifyWhenConfigurationID:(NSInteger)arg0 becomesLive:(id)arg1 ;
-(void)notifyWhenIdle:(id)arg0 ;


@end


#endif