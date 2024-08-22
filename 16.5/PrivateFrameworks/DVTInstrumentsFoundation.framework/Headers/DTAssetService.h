// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTASSETSERVICE_H
#define DTASSETSERVICE_H

@class DTXService, NSString, NSXPCConnection;
@protocol DTAssetServiceProtocol;


#import "DTAssetHTTPServer.h"

@interface DTAssetService : DTXService <DTAssetServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCConnection *ondemandConnection; // ivar: _ondemandConnection
@property (retain) DTAssetHTTPServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)translatedManifest:(id)arg0 withAssetServicePort:(unsigned int)arg1 ;
+(void)registerCapabilities:(id)arg0 ;
-(id)registerApplicationIdentifier:(id)arg0 manifest:(id)arg1 ;
-(id)startServer;
-(id)startServerForApplicationWithDevicePath:(id)arg0 ;
-(void)appendAllowedResources:(id)arg0 ;
-(void)connectToOnDemandDaemon;
-(void)messageReceived:(id)arg0 ;


@end


#endif