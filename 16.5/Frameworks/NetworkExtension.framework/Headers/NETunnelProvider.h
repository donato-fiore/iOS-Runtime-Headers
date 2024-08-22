// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETUNNELPROVIDER_H
#define NETUNNELPROVIDER_H

@class NSArray, NSString;
@protocol NSExtensionRequestHandling;


#import "NEProvider.h"
#import "NEVPNProtocol.h"

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling>

 {
    BOOL _reasserting;
    BOOL _onDemandEnabled;
    BOOL _gracefulShutdown;
}


@property (retain) NSArray *appRules; // ivar: _appRules
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NEVPNProtocol *protocolConfiguration; // ivar: _protocolConfiguration
@property BOOL reasserting;
@property (readonly) NSInteger routingMethod;
@property (readonly) Class superclass;


-(void)handleAppMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)setTunnelNetworkSettings:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif