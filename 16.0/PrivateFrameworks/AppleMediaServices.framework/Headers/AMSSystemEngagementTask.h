// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSYSTEMENGAGEMENTTASK_H
#define AMSSYSTEMENGAGEMENTTASK_H

@class NSString, FBSDisplayLayoutMonitor, NSError, RBSProcessHandle, SBSRemoteAlertHandle, NSXPCListener, NSXPCConnection;
@protocol AMSSystemEngagementTaskClientInterface, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, AMSBagConsumer, AMSBagProtocol, OS_dispatch_group;


#import "AMSTask.h"
#import "AMSProcessInfo.h"
#import "AMSEngagementRequest.h"
#import "AMSEngagementResult.h"

@interface AMSSystemEngagementTask : AMSTask <AMSSystemEngagementTaskClientInterface, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // ivar: _displayLayoutMonitor
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RBSProcessHandle *processHandle; // ivar: _processHandle
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // ivar: _remoteAlertHandle
@property (retain, nonatomic) NSXPCListener *remoteListener; // ivar: _remoteListener
@property (readonly, nonatomic) AMSEngagementRequest *request; // ivar: _request
@property (retain, nonatomic) AMSEngagementResult *result; // ivar: _result
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *underlyingRemoteConnection; // ivar: _underlyingRemoteConnection


+(id)createBagForSubProfile;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_snapshotBagDataPromise;
-(id)_unlockDeviceIfNeeded;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)present;
-(void)_activateIfWithError:(*id)arg0 ;
-(void)_finishTaskWithResult:(id)arg0 error:(id)arg1 ;
-(void)_invalidateRemoteAlert;
-(void)_listenForAppForegroundWithHandle:(id)arg0 ;
-(void)engagementTaskDidFinishWithResult:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)initializeClientToViewServiceConnection;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif