// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATDEVICEPROVISIONINGHANDLER_H
#define ATDEVICEPROVISIONINGHANDLER_H

@class NSString;
@protocol ATMessageLinkObserver, ATMessageLinkRequestHandler;

#import <Foundation/Foundation.h>

#import "ATDeviceSettings.h"
#import "ATGrappaSession.h"

@interface ATDeviceProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler>

 {
    ATDeviceSettings *_settings;
    ATGrappaSession *_grappaSession;
    CGFloat _linkOpenTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_getEndpointInfo;
-(id)init;
-(void)_handleBeginSessionRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_handleCreateSessionRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_handleRegisterEndpointRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_processBeginSessionResponse:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_processCreateSessionResponse:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_processRegisterEndpointResponse:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_sendBeginSessionRequestOnMessageLink:(id)arg0 ;
-(void)_sendCreateSessionRequestWithData:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_sendRegisterEndpointRequestOnMessageLink:(id)arg0 ;
-(void)_setMessageLinkAsInitialized:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)messageLinkWasOpened:(id)arg0 ;


@end


#endif