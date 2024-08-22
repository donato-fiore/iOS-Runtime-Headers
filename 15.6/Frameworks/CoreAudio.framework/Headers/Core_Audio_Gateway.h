// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CORE_AUDIO_GATEWAY_H
#define CORE_AUDIO_GATEWAY_H

@class NSString, NSXPCListenerEndpoint, NSXPCListener;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface Core_Audio_Gateway : NSObject <NSXPCListenerDelegate>



@property (readonly, nonatomic) shared_ptr<HAL::Client::Object_ID_Map> clientObjectMap; // ivar: _clientObjectMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *io_queue; // ivar: _io_queue
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(?)initWithObjectMap;
-(void)handle_server_disconnected;
-(void)handle_server_reconnected;


@end


#endif