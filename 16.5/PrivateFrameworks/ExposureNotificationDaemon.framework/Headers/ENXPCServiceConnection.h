// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENXPCSERVICECONNECTION_H
#define ENXPCSERVICECONNECTION_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "ENFileSessionDaemon.h"
#import "ENXPCServiceListener.h"

@interface ENXPCServiceConnection : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ENFileSessionDaemon *_fileSession;
    ENXPCServiceListener *_serviceListener;
    int _pid;
    NSObject<OS_xpc_object> *_xpcConnection;
}




+(id)connectionWithXPCConnection:(id)arg0 serviceListener:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)activate;
-(void)invalidate;
-(void)xpcConnectionEvent:(id)arg0 ;
-(void)xpcConnectionRequest:(id)arg0 ;
-(void)xpcFileSessionActivate:(id)arg0 archive:(BOOL)arg1 ;
-(void)xpcFileSessionInvalidate:(id)arg0 ;
-(void)xpcFileSessionReadTEKBatch:(id)arg0 ;
-(void)xpcSendMessage:(id)arg0 ;
-(void)xpcSendReplyError:(id)arg0 request:(id)arg1 ;


@end


#endif