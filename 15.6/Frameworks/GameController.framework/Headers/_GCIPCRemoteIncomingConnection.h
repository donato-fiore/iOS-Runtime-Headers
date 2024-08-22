// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCIPCREMOTEINCOMINGCONNECTION_H
#define _GCIPCREMOTEINCOMINGCONNECTION_H

@class GCIPCRemoteConnection;
@protocol _GCIPCIncomingConnection, _GCIPCProcess;



@interface _GCIPCRemoteIncomingConnection : GCIPCRemoteConnection <_GCIPCIncomingConnection>



@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly, weak, nonatomic) NSObject<_GCIPCProcess> *process; // ivar: _process


+(id)sharedConnectionWorkloop;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 fromProcess:(id)arg1 ;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteProxyWithErrorHandler:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;


@end


#endif