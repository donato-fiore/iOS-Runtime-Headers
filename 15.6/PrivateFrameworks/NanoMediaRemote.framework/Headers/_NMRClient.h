// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMRCLIENT_H
#define _NMRCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _NMRClient : NSObject {
    NSXPCConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
}




+(id)sharedClient;
-(id)_proxyWithErrorHandler:(id)arg0 ;
-(id)_synchronousProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)discoverAndConnectEndpoints;
-(void)prewarmCompanionSystemMusicApp;
-(void)refreshMediaRemoteStateIfNecessary;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 withCommandOptions:(id)arg1 toOriginWithUniqueIdentifier:(int)arg2 commandResultHandler:(id)arg3 ;


@end


#endif