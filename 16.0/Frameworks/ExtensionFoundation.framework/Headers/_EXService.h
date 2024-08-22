// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXSERVICE_H
#define _EXSERVICE_H

@class NSString;
@protocol NSXPCListenerDelegate, _EXServiceProtocol, LSObserverDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "_EXDiscoveryController.h"

@interface _EXService : NSObject <NSXPCListenerDelegate, _EXServiceProtocol, LSObserverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) _EXDiscoveryController *discoveryController; // ivar: _discoveryController
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_source> *sigtermSource; // ivar: _sigtermSource
@property (readonly) Class superclass;


+(BOOL)currentProcessIsService;
+(id)sharedService;
+(void)runAsXPCService;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)registerServiceForClientConnection:(id)arg0 extension:(id)arg1 error:(*id)arg2 ;
-(id)_init;
-(id)launchWithConfiguration:(id)arg0 clientConnection:(id)arg1 error:(*id)arg2 ;
-(void)beginExtensionsQuery:(id)arg0 listenerEndpoint:(id)arg1 reply:(id)arg2 ;
-(void)extensionsWithQuery:(id)arg0 reply:(id)arg1 ;
-(void)getServiceConfigForExtension:(id)arg0 overlay:(*id)arg1 subservices:(*id)arg2 ;
-(void)prepareWithLaunchConfiguration:(id)arg0 reply:(id)arg1 ;


@end


#endif