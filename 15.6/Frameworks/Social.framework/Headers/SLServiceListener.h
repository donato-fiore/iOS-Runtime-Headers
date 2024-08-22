// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLSERVICELISTENER_H
#define SLSERVICELISTENER_H

@class Protocol, NSXPCListener, NSArray, NSXPCInterface, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface SLServiceListener : NSObject <NSXPCListenerDelegate>

 {
    Class _sessionClass;
    Protocol *_serviceProtocol;
    NSXPCListener *_listener;
    NSArray *_allowedEntitlements;
}


@property (retain) NSXPCInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *managedObjectModelPath; // ivar: _managedObjectModelPath
@property (retain) NSString *persistentStoreName; // ivar: _persistentStoreName
@property (retain) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(BOOL)_verifyAuthorizationForConnection:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithExportedSessionClass:(Class)arg0 serviceProtocol:(id)arg1 ;
-(void)beginAcceptingConnections;
-(void)restrictToClientsWithEntitlements:(id)arg0 ;


@end


#endif