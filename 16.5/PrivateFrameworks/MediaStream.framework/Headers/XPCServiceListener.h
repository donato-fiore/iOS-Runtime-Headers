// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCSERVICELISTENER_H
#define XPCSERVICELISTENER_H

@class NSMutableSet, NSString;
@protocol XPCServiceListenerDelegate, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface XPCServiceListener : NSObject

@property (nonatomic) NSUInteger clientCount; // ivar: _clientCount
@property (readonly, nonatomic) NSObject<XPCServiceListenerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener; // ivar: _listener
@property (retain, nonatomic) NSMutableSet *serviceConnections; // ivar: _serviceConnections
@property (readonly, retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)debugDescription;
-(id)initWithServiceName:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(void)_workQueueShutDownServiceConnections:(id)arg0 index:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)serviceConnectionDidDisconnect:(id)arg0 ;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)start;
-(void)workQueueHandleIncomingConnection:(id)arg0 ;


@end


#endif