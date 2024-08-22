// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCHAPTICCLIENTCONNECTION_H
#define _GCHAPTICCLIENTCONNECTION_H

@class GCIPCRemoteIncomingConnection;
@protocol CHHapticServerInterface;



@interface _GCHapticClientConnection : GCIPCRemoteIncomingConnection

@property (retain, nonatomic) NSObject<CHHapticServerInterface> *server;


-(id)initWithConnection:(id)arg0 fromProcess:(id)arg1 ;


@end


#endif