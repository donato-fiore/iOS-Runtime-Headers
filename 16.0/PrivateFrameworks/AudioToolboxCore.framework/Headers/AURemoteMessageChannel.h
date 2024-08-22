// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUREMOTEMESSAGECHANNEL_H
#define AUREMOTEMESSAGECHANNEL_H

@class NSXPCListener, NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, AUAudioUnitMessageChannelProtocol, AUMessageChannel;

#import <Foundation/Foundation.h>

#import "AURemoteMessageChannel.h"

@interface AURemoteMessageChannel : NSObject <NSXPCListenerDelegate, AUAudioUnitMessageChannelProtocol>

 {
    id<AUMessageChannel> *_messageChannel;
    NSXPCListener *_listener;
    NSXPCConnection *_xpcConnection;
    AURemoteMessageChannel *_selfRetained;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)endpoint;
-(id)initWithMessageChannel:(id)arg0 ;
-(void)onCallRemoteAU:(id)arg0 reply:(id)arg1 ;
-(void)releaseChannel;
-(void)retainSelfIfRequired;


@end


#endif