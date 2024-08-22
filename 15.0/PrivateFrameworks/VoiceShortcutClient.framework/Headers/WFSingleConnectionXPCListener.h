// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSINGLECONNECTIONXPCLISTENER_H
#define WFSINGLECONNECTIONXPCLISTENER_H

@class NSXPCConnection, NSString, NSXPCListenerEndpoint, NSXPCInterface, NSXPCListener;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface WFSingleConnectionXPCListener : NSObject <NSXPCListenerDelegate>



@property (retain, nonatomic) NSXPCConnection *activeConnection; // ivar: _activeConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (readonly, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithExportedObject:(id)arg0 exportedInterface:(id)arg1 ;


@end


#endif