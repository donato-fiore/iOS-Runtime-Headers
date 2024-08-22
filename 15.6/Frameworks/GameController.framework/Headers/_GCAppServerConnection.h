// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCAPPSERVERCONNECTION_H
#define _GCAPPSERVERCONNECTION_H

@class GCIPCRemoteOutgoingConnection;
@protocol _GCAppClientInterface;



@interface _GCAppServerConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) NSObject<_GCAppClientInterface> *client;


-(id)init;
-(id)initWithMachServiceName:(id)arg0 ;


@end


#endif