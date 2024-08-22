// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFXPCMANAGER_H
#define CWFXPCMANAGER_H

@class NSMutableArray, RBSProcessMonitor, NSMutableSet, NSString, NSSet;
@protocol CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate, OS_dispatch_queue, CWFXPCManagerDelegate;

#import <Foundation/Foundation.h>

#import "CWFXPCRequestProxy.h"

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate>

 {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableArray *_mutableXPCListeners;
    CWFXPCRequestProxy *_XPCRequestProxy;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processMonitorPIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<CWFXPCManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy) NSSet *supportedRequestTypes; // ivar: _supportedRequestTypes


-(id)init;
-(id)initWithServiceTypes:(id)arg0 ;
-(id)registeredActivities;
-(id)registeredEventIDs;
-(void)XPCListener:(id)arg0 XPCConnection:(id)arg1 canceledXPCRequestsWithUUID:(id)arg2 ;
-(void)XPCListener:(id)arg0 XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2 ;
-(void)XPCListener:(id)arg0 XPCConnection:(id)arg1 updatedRegisteredEventIDs:(id)arg2 ;
-(void)XPCListener:(id)arg0 addedXPCConnection:(id)arg1 ;
-(void)XPCListener:(id)arg0 invalidatedXPCConnection:(id)arg1 ;
-(void)XPCRequestProxy:(id)arg0 XPCConnection:(id)arg1 canceledXPCRequestsWithUUID:(id)arg2 ;
-(void)XPCRequestProxy:(id)arg0 XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2 ;
-(void)XPCRequestProxy:(id)arg0 invalidatedXPCConnection:(id)arg1 ;
-(void)XPCRequestProxy:(id)arg0 sendXPCEvent:(id)arg1 reply:(id)arg2 ;
-(void)__updateProcessMonitorConfiguration;
-(void)invalidate;
-(void)resume;
-(void)sendXPCEvent:(id)arg0 reply:(id)arg1 ;
-(void)setTargetQueue:(id)arg0 requestType:(NSInteger)arg1 interfaceName:(id)arg2 ;
-(void)suspend;


@end


#endif