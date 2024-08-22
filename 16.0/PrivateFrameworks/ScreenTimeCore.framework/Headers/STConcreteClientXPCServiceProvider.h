// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCONCRETECLIENTXPCSERVICEPROVIDER_H
#define STCONCRETECLIENTXPCSERVICEPROVIDER_H

@class NSXPCListener, NSString, NSXPCInterface;
@protocol NSXPCListenerDelegate, STClientXPCServiceProvider;

#import <Foundation/Foundation.h>


@interface STConcreteClientXPCServiceProvider : NSObject <NSXPCListenerDelegate, STClientXPCServiceProvider>



@property (retain) NSXPCListener *activeListener; // ivar: _activeListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) id *providedService; // ivar: _providedService
@property (retain) NSXPCInterface *providedServiceInterface; // ivar: _providedServiceInterface
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)providePasscodeAuthenticationProviderService;
-(id)providePasscodeProviderService;


@end


#endif