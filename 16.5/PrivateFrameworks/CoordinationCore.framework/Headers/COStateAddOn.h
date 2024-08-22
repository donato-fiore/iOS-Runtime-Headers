// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COSTATEADDON_H
#define COSTATEADDON_H

@class NSMutableArray, NSDictionary;
@protocol COStateAddOnDelegate;


#import "COMeshAddOn.h"

@interface COStateAddOn : COMeshAddOn {
    os_unfair_lock_s _lock;
    NSUInteger _stateConstructionGeneration;
    NSMutableArray *_outstandingUpdateRequests;
    BOOL _isConstructingState;
}


@property (weak) NSObject<COStateAddOnDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *meshState; // ivar: _meshState


-(id)init;
-(void)_broadcastMeshState:(id)arg0 ;
-(void)_constructMeshState;
-(void)_handleStateNotification:(id)arg0 ;
-(void)_handleStateReadRequest:(id)arg0 callback:(id)arg1 ;
-(void)_handleStateUpdateNotification:(id)arg0 ;
-(void)_handleStateUpdateRequest:(id)arg0 callback:(id)arg1 ;
-(void)_handleUpdates:(id)arg0 removals:(id)arg1 ;
-(void)_processOutstandingUpdateRequests;
-(void)_sendRequest:(id)arg0 withRetryCount:(NSInteger)arg1 withCallback:(id)arg2 ;
-(void)_withLock:(id)arg0 ;
-(void)didAddToMeshController:(id)arg0 ;
-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)meshController:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)removeKeyPaths:(id)arg0 suite:(id)arg1 withCallback:(id)arg2 ;
-(void)sendStateUpdates:(id)arg0 removals:(id)arg1 withCallback:(id)arg2 ;
-(void)setDictionary:(id)arg0 suite:(id)arg1 withCallback:(id)arg2 ;
-(void)willRemoveFromMeshController:(id)arg0 ;


@end


#endif