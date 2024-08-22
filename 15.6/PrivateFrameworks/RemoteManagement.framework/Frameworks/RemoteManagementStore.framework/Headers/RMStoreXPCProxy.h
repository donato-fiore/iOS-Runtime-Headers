// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSTOREXPCPROXY_H
#define RMSTOREXPCPROXY_H


#import <Foundation/Foundation.h>


@interface RMStoreXPCProxy : NSObject



+(id)newAgentConnection;
+(id)newConnection;
+(id)newConnectionWithListenerEndpoint:(id)arg0 ;
+(id)newDaemonConnection;
+(id)newInterface;


@end


#endif