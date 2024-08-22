// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMXPCPROXY_H
#define RMXPCPROXY_H


#import <Foundation/Foundation.h>


@interface RMXPCProxy : NSObject



+(id)newAgentConnection;
+(id)newConnectionWithListenerEndpoint:(id)arg0 ;
+(id)newConnectionWithScope:(NSInteger)arg0 ;
+(id)newDaemonConnection;
+(id)newInterface;


@end


#endif