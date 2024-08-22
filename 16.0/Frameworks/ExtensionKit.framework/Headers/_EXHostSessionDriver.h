// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXHOSTSESSIONDRIVER_H
#define _EXHOSTSESSIONDRIVER_H

@class NSMutableArray, NSString;
@protocol _EXHostSessionDelegate, OS_dispatch_source, _EXHostViewControllerProtocol;

#import <Foundation/Foundation.h>

#import "_EXHostSession.h"

@interface _EXHostSessionDriver : NSObject <_EXHostSessionDelegate>



@property BOOL active; // ivar: _active
@property (retain) _EXHostSession *activeSession; // ivar: _activeSession
@property (retain) NSObject<OS_dispatch_source> *deactivateSessionTimer; // ivar: _deactivateSessionTimer
@property (retain) NSMutableArray *deactivatingSessions; // ivar: _deactivatingSessions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<_EXHostViewControllerProtocol> *hostViewController; // ivar: _hostViewController
@property (retain) _EXHostSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)extensionProcess;
-(id)hostSessionHostView:(id)arg0 ;
-(id)initWithHostViewController:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)dealloc;
-(void)hostSessionDidInvalidate:(id)arg0 ;
-(void)hostSessionDidPrepareForHosting:(id)arg0 ;
-(void)hostSessionViewControllerReady:(id)arg0 ;
-(void)invalidateDeactivatingSessions;
-(void)notifyHostViewControllerDidEndHosting:(id)arg0 ;
-(void)notifyHostViewControllerWillDeactivate:(id)arg0 ;
-(void)resume;
-(void)scheduleInvalidations;
-(void)startSessionWithConfiguration:(id)arg0 ;


@end


#endif