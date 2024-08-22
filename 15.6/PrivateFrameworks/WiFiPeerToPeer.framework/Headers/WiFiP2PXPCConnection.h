// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIP2PXPCCONNECTION_H
#define WIFIP2PXPCCONNECTION_H


#import <Foundation/Foundation.h>


@interface WiFiP2PXPCConnection : NSObject



+(id)connectionToDaemonWithExportedObject:(id)arg0 usingExportedInterface:(id)arg1 queue:(id)arg2 proxyObject:(*id)arg3 withInvalidationHandler:(id)arg4 ;
+(id)wifiPeerToPeerWorkloop;


@end


#endif