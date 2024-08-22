// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCLOUDCLIENTCLOUDSERVICE_H
#define ICCLOUDCLIENTCLOUDSERVICE_H

@class NSXPCConnection;
@protocol ICCloudServerListenerEndpointProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICCloudClientCloudService : NSObject

@property (readonly, weak, nonatomic) NSObject<ICCloudServerListenerEndpointProviding> *listenerEndpointProvider; // ivar: _listenerEndpointProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)_xpcConnectionWithListenerEndpoint:(id)arg0 ;
-(id)initWithListenerEndpointProvider:(id)arg0 ;


@end


#endif