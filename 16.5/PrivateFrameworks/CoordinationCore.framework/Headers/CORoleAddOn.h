// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COROLEADDON_H
#define COROLEADDON_H

@class COClusterMemberRoleSnapshot, NSString, NSSet;
@protocol CORoleDefaultsMonitorDelegate, CORoleAddOnDelegate, OS_dispatch_queue;


#import "COMeshAddOn.h"
#import "CORoleDefaultsMonitor.h"

@interface CORoleAddOn : COMeshAddOn <CORoleDefaultsMonitorDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) COClusterMemberRoleSnapshot *currentDeviceSnapshot; // ivar: _currentDeviceSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CORoleDefaultsMonitor *defaultsMonitor; // ivar: _defaultsMonitor
@property (weak, nonatomic) NSObject<CORoleAddOnDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *nodeCache; // ivar: _nodeCache
@property (nonatomic, getter=havePendingChanges) BOOL pendingChanges; // ivar: _pendingChanges
@property (readonly) Class superclass;


-(BOOL)_isLegacyStereoPair;
-(BOOL)_isLegacyStereoPairPeer:(id)arg0 ;
-(id)_memberForCurrentDevice;
-(id)_memberForNode:(id)arg0 ;
-(id)_roleForCurrentDevice;
-(id)_roleForNode:(id)arg0 ;
-(id)init;
-(void)_enableForPairLegacySupport;
-(void)_notifyDelegate;
-(void)_updateCurrentDeviceState;
-(void)_updateState;
-(void)_withLock:(id)arg0 ;
-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)meshController:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)meshController:(id)arg0 willTransitionToState:(NSUInteger)arg1 ;
-(void)monitor:(id)arg0 defaultChanged:(NSUInteger)arg1 ;


@end


#endif