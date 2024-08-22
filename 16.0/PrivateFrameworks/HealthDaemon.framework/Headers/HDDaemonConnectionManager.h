// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDAEMONCONNECTIONMANAGER_H
#define HDDAEMONCONNECTIONMANAGER_H

@class NSMapTable, NSMutableSet, NSArray, NSString, HDXPCListener;
@protocol HDXPCListenerDelegate, HDXPCListenerClientProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDDaemonConnectionManager : NSObject <HDXPCListenerDelegate, HDXPCListenerClientProvider>

 {
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    os_unfair_lock_s _lock;
    NSMapTable *_processesByAuditToken;
    NSMutableSet *_endpoints;
}


@property (readonly, copy) NSArray *clientProcesses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *processCreationHandler; // ivar: _processCreationHandler
@property (readonly, nonatomic) HDXPCListener *serviceListener; // ivar: _serviceListener
@property (readonly) Class superclass;


-(id)clientForListener:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(id)createAnonymousListenerWithLabel:(id)arg0 ;
-(id)createListenerWithMachServiceName:(id)arg0 ;
-(id)exportObjectForListener:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
-(id)initWithMachServiceName:(id)arg0 daemon:(id)arg1 ;
-(void)endpointInvalidated:(id)arg0 ;
-(void)invalidate;
-(void)invalidateAllServersForProfile:(id)arg0 ;
-(void)resume;


@end


#endif