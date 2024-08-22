// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPROCESSINFO_H
#define HMDPROCESSINFO_H

@class HMFProcessInfo, NSHashTable, NSString, NSArray, HMFLocationAuthorization, RBSProcessHandle, RBSProcessState;
@protocol HMFLogging;


#import "HMDApplicationInfo.h"

@interface HMDProcessInfo : HMFProcessInfo <HMFLogging>

 {
    hmf_unfair_data_lock_s _lock;
    NSHashTable *_connections;
}


@property (readonly, getter=isActive) BOOL active;
@property (readonly) HMDApplicationInfo *applicationInfo; // ivar: _applicationInfo
@property (readonly, getter=isBackgrounded) BOOL background;
@property (readonly, getter=isBackgroundUpgradedToForeground) BOOL backgroundUpgradedToForeground;
@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess; // ivar: _entitledForAPIAccess
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess; // ivar: _entitledForSPIAccess
@property (readonly, getter=isForegrounded) BOOL foreground;
@property (readonly) NSUInteger hash;
@property (readonly) HMFLocationAuthorization *locationAuthorization; // ivar: _locationAuthorization
@property (readonly, nonatomic) RBSProcessHandle *processHandle; // ivar: _processHandle
@property (readonly, copy, nonatomic) RBSProcessState *processState; // ivar: _processState
@property (readonly) BOOL shouldMonitor;
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, getter=isSuspended) BOOL suspended;
@property (readonly, getter=isTerminated) BOOL terminated;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
+(id)privateClientIdentifierSalt;
+(id)processInfoWithConnection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)clientIdentifierSalt:(*id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithIdentifier:(int)arg0 ;
-(id)logIdentifier;
-(void)_updateProcessState:(id)arg0 ;
-(void)addConnection:(id)arg0 ;
-(void)removeConnection:(id)arg0 ;


@end


#endif