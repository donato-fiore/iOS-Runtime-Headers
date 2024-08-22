// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCCONFIGXPCSERVICECONNECTION_H
#define GCCONFIGXPCSERVICECONNECTION_H

@protocol GCConfigXPCServiceClientInterface;


#import "GCIPCRemoteOutgoingConnection.h"

@interface GCConfigXPCServiceConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) NSObject<GCConfigXPCServiceClientInterface> *client;


-(id)connectToService:(id)arg0 withClient:(id)arg1 ;
-(id)init;


@end


#endif