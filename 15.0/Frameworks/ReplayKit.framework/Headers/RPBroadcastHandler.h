// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPBROADCASTHANDLER_H
#define RPBROADCASTHANDLER_H

@class NSXPCConnection, NSString, NSExtensionContext, NSXPCListener, NSXPCListenerEndpoint, NSDictionary;
@protocol NSXPCListenerDelegate, NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface RPBroadcastHandler : NSObject <NSXPCListenerDelegate, NSExtensionRequestHandling>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (retain, nonatomic) NSDictionary *serviceInfo; // ivar: _serviceInfo
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_completeRequestWithReturnItems:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)updateBroadcastURL:(id)arg0 ;
-(void)updateServiceInfo:(id)arg0 ;


@end


#endif