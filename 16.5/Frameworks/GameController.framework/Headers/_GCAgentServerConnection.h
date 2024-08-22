// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCAGENTSERVERCONNECTION_H
#define _GCAGENTSERVERCONNECTION_H

@class GCIPCRemoteOutgoingConnection;
@protocol _GCAgentClientInterface;



@interface _GCAgentServerConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) NSObject<_GCAgentClientInterface> *client;


-(id)init;
-(id)initWithMachServiceName:(id)arg0 ;


@end


#endif