// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERCONTROLLEROPERATION_H
#define HAP2ACCESSORYSERVERCONTROLLEROPERATION_H

@class HMFTimer, NSString;
@protocol HMFTimerDelegate, HAP2AccessoryServerEncoding, HAP2AccessoryServerTransportCommon, HAP2AccessoryServerTransportRequestEndpoint, HAP2EncodedRequest, HAP2EncodedResponse;


#import "HAP2AsynchronousOperation.h"
#import "HAP2AccessoryServerController.h"

@interface HAP2AccessoryServerControllerOperation : HAP2AsynchronousOperation <HMFTimerDelegate>

 {
    BOOL _attemptedSessionRefresh;
    HMFTimer *_timer;
    HAP2AccessoryServerController *_controller;
    id<HAP2AccessoryServerEncoding> *_encoding;
    id<HAP2AccessoryServerTransportCommon> *_transport;
    id<HAP2AccessoryServerTransportRequestEndpoint> *_endpoint;
    NSString *_mimeType;
    CGFloat _timeout;
    NSUInteger _options;
    id<HAP2EncodedRequest> *_request;
    id<HAP2EncodedResponse> *_response;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 controller:(id)arg1 encoding:(id)arg2 transport:(id)arg3 request:(id)arg4 endpoint:(id)arg5 mimeType:(id)arg6 timeout:(CGFloat)arg7 options:(NSUInteger)arg8 ;
-(void)_cleanUp;
-(void)_openTransport;
-(void)_parseResponseData:(id)arg0 ;
-(void)_sendRequest;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)main;
-(void)timerDidFire:(id)arg0 ;


@end


#endif