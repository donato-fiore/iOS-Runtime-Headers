// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXHOSTSESSION_H
#define _EXHOSTSESSION_H

@class NSString, NSError, _EXExtensionProcessHandle, NSXPCListener, UIView, NSXPCListenerEndpoint, NSXPCConnection, NSUUID;
@protocol NSXPCListenerDelegate, _EXExtensionProcessObserver, _EXHostSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_EXHostViewControllerConfiguration.h"
#import "_EXRemoteViewController.h"

@interface _EXHostSession : NSObject <NSXPCListenerDelegate, _EXExtensionProcessObserver>



@property ? activity; // ivar: _activity
@property (readonly, nonatomic) _EXHostViewControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_EXHostSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSError *error; // ivar: _error
@property (retain) _EXExtensionProcessHandle *extensionProcess; // ivar: _extensionProcess
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *hostListener; // ivar: _hostListener
@property (weak) UIView *hostView; // ivar: _hostView
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) _EXRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteViewControllerEndpoint; // ivar: _remoteViewControllerEndpoint
@property (readonly) BOOL requiresSceneHosting; // ivar: _requiresSceneHosting
@property (retain) NSXPCConnection *sceneSessionConnection; // ivar: _sceneSessionConnection
@property NSUInteger signpost; // ivar: _signpost
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid; // ivar: _uuid


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)_invalidateSession;
-(void)dealloc;
-(void)invalidate;
-(void)makeSceneHostViewController;
-(void)processDidInvalidate:(id)arg0 ;
-(void)requestRemoteViewController;
-(void)resume;


@end


#endif