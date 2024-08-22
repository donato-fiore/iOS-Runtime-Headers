// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSYSTEMSERVICE_H
#define FBSYSTEMSERVICE_H

@class BSServiceConnectionListener, NSString, FBSSerialQueue;
@protocol BSServiceConnectionListenerDelegate, FBSOpenApplicationServiceServerInterface, FBSApplicationInfoProvider, FBSystemServiceDelegate;

#import <Foundation/Foundation.h>

#import "FBServiceFacilityServer.h"

@interface FBSystemService : NSObject <BSServiceConnectionListenerDelegate, FBSOpenApplicationServiceServerInterface>

 {
    BSServiceConnectionListener *_legacyOpenServiceListener;
    int _pendingExit;
    id<FBSApplicationInfoProvider> *_lock_defaultInfoProvider;
    os_unfair_lock_s _defaultInfoProviderLock;
}


@property (readonly, nonatomic) NSObject<FBSApplicationInfoProvider> *_applicationInfoProvider;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBSystemServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isPendingExit) BOOL pendingExit;
@property (readonly, nonatomic) FBSSerialQueue *queue; // ivar: _queue
@property (retain, nonatomic) FBServiceFacilityServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)_isAllowListedLaunchSuspendedApp:(id)arg0 ;
-(BOOL)_isTrustedRequest:(id)arg0 forCaller:(id)arg1 fromClient:(id)arg2 forBundleInfo:(id)arg3 withOptions:(id)arg4 fatalError:(*id)arg5 ;
-(BOOL)_shouldPendRequestForClientSequenceNumber:(NSUInteger)arg0 clientCacheGUID:(id)arg1 ourSequenceNumber:(NSUInteger)arg2 ourCacheGUID:(id)arg3 ;
-(NSUInteger)_mapShutdownOptionsToOptions:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_activateBundleID:(id)arg0 requestID:(id)arg1 isTrusted:(BOOL)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id)arg6 ;
-(void)_performExitTasksForRelaunch:(BOOL)arg0 ;
-(void)_reallyActivateApplication:(id)arg0 requestID:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 isTrusted:(BOOL)arg5 sequenceNumber:(NSUInteger)arg6 cacheGUID:(id)arg7 ourSequenceNumber:(NSUInteger)arg8 ourCacheGUID:(id)arg9 withResult:(id)arg10 ;
-(void)_setInfoProvider;
-(void)_terminateProcesses:(id)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id)arg4 ;
-(void)canOpenApplication:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)exitAndRelaunch:(BOOL)arg0 ;
-(void)exitAndRelaunch:(BOOL)arg0 withOptions:(NSUInteger)arg1 ;
-(void)handleActions:(id)arg0 source:(id)arg1 withResult:(id)arg2 ;
-(void)isPasscodeLockedOrBlockedWithResult:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)openApplication:(id)arg0 withOptions:(id)arg1 originator:(id)arg2 requestID:(id)arg3 completion:(id)arg4 ;
-(void)prepareDisplaysForExit;
-(void)prepareForExitAndRelaunch:(BOOL)arg0 ;
-(void)setSystemIdleSleepDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)shutdownAndReboot:(BOOL)arg0 ;
-(void)shutdownUsingOptions:(id)arg0 ;
-(void)shutdownWithOptions:(NSUInteger)arg0 ;
-(void)shutdownWithOptions:(NSUInteger)arg0 forSource:(NSInteger)arg1 ;
-(void)shutdownWithOptions:(id)arg0 origin:(id)arg1 ;
-(void)terminateApplication:(id)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id)arg4 ;
-(void)terminateApplicationGroup:(NSInteger)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id)arg4 ;


@end


#endif