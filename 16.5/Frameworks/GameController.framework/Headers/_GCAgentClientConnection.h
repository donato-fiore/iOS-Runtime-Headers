// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCAGENTCLIENTCONNECTION_H
#define _GCAGENTCLIENTCONNECTION_H

@class GCIPCRemoteIncomingConnection;
@protocol _GCAgentServerInterface;



@interface _GCAgentClientConnection : GCIPCRemoteIncomingConnection

@property (retain, nonatomic) NSObject<_GCAgentServerInterface> *server;


-(id)initWithConnection:(id)arg0 fromProcess:(id)arg1 ;


@end


#endif