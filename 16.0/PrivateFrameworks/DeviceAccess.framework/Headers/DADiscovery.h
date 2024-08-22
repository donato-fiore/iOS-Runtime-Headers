// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADISCOVERY_H
#define DADISCOVERY_H

@class NSMutableSet, NSMutableDictionary, NSArray;
@protocol CUXPCCodable, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "DAAppContext.h"
#import "DADiscoveryConfiguration.h"

@interface DADiscovery : NSObject <CUXPCCodable>

 {
    BOOL _activateCalled;
    NSMutableSet *_extensions;
    NSMutableDictionary *_deviceMap;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_policySessions;
}


@property (retain, nonatomic) DAAppContext *appContext; // ivar: _appContext
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (retain, nonatomic) DADiscoveryConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL direct; // ivar: _direct
@property (readonly, copy) NSArray *discoveredDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx; // ivar: _xpcCnx
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint; // ivar: _xpcListenerEndpoint


-(id)_ensureXPCStarted;
-(id)_uuidFromExtension:(id)arg0 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activateDirect;
-(void)_activateXPCCompleted:(id)arg0 ;
-(void)_activateXPCStart:(BOOL)arg0 ;
-(void)_getAuthorizedDevicesCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_reportEvent:(id)arg0 ;
-(void)_reportEventType:(NSInteger)arg0 ;
-(void)_startExtensions:(id)arg0 ;
-(void)_stopExtensons;
-(void)_updateNEPolicy:(id)arg0 remove:(BOOL)arg1 ;
-(void)_xpcReceivedDAEvent:(id)arg0 ;
-(void)_xpcReceivedDeviceEvent:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)activate;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)getAuthorizedDevices:(id)arg0 ;
-(void)invalidate;
-(void)setState:(NSInteger)arg0 device:(id)arg1 completionHandler:(id)arg2 ;
-(void)setState:(NSInteger)arg0 device:(id)arg1 simulateApp:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)xpcReceivedMessage:(id)arg0 ;


@end


#endif