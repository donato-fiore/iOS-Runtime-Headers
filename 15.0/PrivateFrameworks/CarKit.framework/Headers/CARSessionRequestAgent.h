// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARSESSIONREQUESTAGENT_H
#define CARSESSIONREQUESTAGENT_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, CARSessionRequestHandling;

#import <Foundation/Foundation.h>

#import "CARSessionRequestHandlerProxy.h"

@interface CARSessionRequestAgent : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CARSessionRequestHandlerProxy *handlerProxy; // ivar: _handlerProxy
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, weak, nonatomic) NSObject<CARSessionRequestHandling> *requestHandler;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)wantsCarPlayControlAdvertisingForUSB;
-(BOOL)wantsCarPlayControlAdvertisingForWiFiUUID:(id)arg0 ;
-(id)initWithRequestHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif