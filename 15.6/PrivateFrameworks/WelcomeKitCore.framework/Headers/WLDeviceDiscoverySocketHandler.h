// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLDEVICEDISCOVERYSOCKETHANDLER_H
#define WLDEVICEDISCOVERYSOCKETHANDLER_H

@class NSString, WLSourceDevice;
@protocol OS_dispatch_source, OS_dispatch_queue, WLDeviceDiscoverySocketHandlerDelegate;


#import "WLSocketHandler.h"

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler {
    NSString *_srpPassword;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_queue> *_writeQueue;
    WLSourceDevice *_sourceDevice;
}


@property (weak, nonatomic) NSObject<WLDeviceDiscoverySocketHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) int sockfd; // ivar: _sockfd


-(BOOL)_didReceiveHandshakeData:(id)arg0 ;
-(id)_commandStringWithData:(id)arg0 ;
-(id)_handshakeCommandData;
-(id)_handshakeResponseData;
-(id)_okResponseData;
-(id)initWithSocket:(int)arg0 srpPassword:(id)arg1 delegate:(id)arg2 ;
-(void)_performSRPAuthenticationAndHandshake;
-(void)close;
-(void)invalidateWithError:(id)arg0 ;
-(void)resume;
-(void)sendData:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif