// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCAPPCLIENTCONNECTION_H
#define _GCAPPCLIENTCONNECTION_H

@class GCIPCRemoteIncomingConnection;
@protocol _GCAppServerInterface;



@interface _GCAppClientConnection : GCIPCRemoteIncomingConnection

@property (retain, nonatomic) NSObject<_GCAppServerInterface> *server;


-(id)initWithConnection:(id)arg0 fromProcess:(id)arg1 ;


@end


#endif