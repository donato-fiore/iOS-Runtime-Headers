// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXHOSTSESSION_H
#define _EXHOSTSESSION_H

@class NSString, NSError, _EXExtensionProcess, NSXPCListenerEndpoint, NSUUID;
@protocol _EXExtensionProcessObserver, _EXHostSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_EXHostViewControllerConfiguration.h"
#import "_EXRemoteViewController.h"

@interface _EXHostSession : NSObject <_EXExtensionProcessObserver>



@property ? activity; // ivar: _activity
@property (readonly, nonatomic) _EXHostViewControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<_EXHostSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSError *error; // ivar: _error
@property (retain) _EXExtensionProcess *extensionProcess; // ivar: _extensionProcess
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) _EXRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteViewControllerEndpoint; // ivar: _remoteViewControllerEndpoint
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid; // ivar: _uuid


-(id)initWithConfiguration:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)_internalQueue_prepareToHostExtension:(id)arg0 sceneIdenitifer:(id)arg1 ;
-(void)invalidate;
-(void)processDidInvalidate:(id)arg0 ;
-(void)requestRemoteViewController;
-(void)resume;


@end


#endif