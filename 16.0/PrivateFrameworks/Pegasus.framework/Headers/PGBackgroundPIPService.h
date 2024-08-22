// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGBACKGROUNDPIPSERVICE_H
#define PGBACKGROUNDPIPSERVICE_H

@class BSServiceConnectionListener, NSMutableSet, NSMutableDictionary, NSString, NSSet;
@protocol BSServiceConnectionListenerDelegate, _PGBackgroundPIPServiceConnectionTargetDelegate, OS_dispatch_queue, PGBackgroundPIPServiceDelegate;

#import <Foundation/Foundation.h>


@interface PGBackgroundPIPService : NSObject <BSServiceConnectionListenerDelegate, _PGBackgroundPIPServiceConnectionTargetDelegate>

 {
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_mutableIdentifiersForAuthorizedActivitySessions;
    NSMutableSet *_lock_targets;
    NSMutableDictionary *_lock_targetsByActivitySessionIdentifier;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PGBackgroundPIPServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *identifiersForAuthorizedActivitySessions; // ivar: _identifiersForAuthorizedActivitySessions
@property (readonly) Class superclass;


-(BOOL)hasAcquiredAuthorizationForActivitySessionWithIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
-(id)_targetForIdentifier:(id)arg0 ;
-(id)init;
-(void)_handleInvalidatedTarget:(id)arg0 ;
-(void)backgroundPIPTargetDidInvalidate:(id)arg0 ;
-(void)backgroundPIPTargetRequestsAuthorization:(id)arg0 ;
-(void)dealloc;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)pipDidStartForRemoteObject:(id)arg0 ;
-(void)pipDidStopForRemoteObject:(id)arg0 ;
-(void)revokeAuthorizationActivitySessionWithIdentifier:(id)arg0 ;
-(void)startListener;


@end


#endif