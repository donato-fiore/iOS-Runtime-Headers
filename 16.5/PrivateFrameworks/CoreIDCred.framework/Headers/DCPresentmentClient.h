// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCPRESENTMENTCLIENT_H
#define DCPRESENTMENTCLIENT_H

@class NSString, NSXPCConnection;
@protocol DCPresentmentXPCProtocol;

#import <Foundation/Foundation.h>

#import "DCXPCDisconnectHandler.h"

@interface DCPresentmentClient : NSObject <DCPresentmentXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) DCXPCDisconnectHandler *disconnectionHandler; // ivar: _disconnectionHandler
@property (readonly) NSUInteger hash;
@property (retain) NSObject<DCPresentmentXPCProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(id)init;
-(void)buildCredentialResponseForSelection:(id)arg0 completion:(id)arg1 ;
-(void)buildErrorResponseWithStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)buildResponseForSelection:(id)arg0 completion:(id)arg1 ;
-(void)configureWithPartitions:(id)arg0 presentmentType:(NSUInteger)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)generateTransportKeyForSpecification:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)interpretRequest:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;


@end


#endif