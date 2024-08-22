// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMCLIENT_H
#define CDMCLIENT_H

@protocol CDMEmbeddingClient;


#import "CDMClientInterface.h"

@interface CDMClient : CDMClientInterface <CDMEmbeddingClient>

 {
    CDMClientInterface *_client;
}




+(BOOL)useXPC;
-(BOOL)areAssetsAvailable:(id)arg0 ;
-(BOOL)isLighthouseAPIEnabled;
-(BOOL)registerWithAssetsDelegate:(id)arg0 ;
-(BOOL)successFromSetup;
-(id)errorFromSetup;
-(id)graphName;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithXPC:(BOOL)arg0 ;
-(id)initWithXPCDelegate:(BOOL)arg0 withDelegate:(id)arg1 ;
-(void)dealloc;
-(void)doHandleCommand:(id)arg0 forCallback:(id)arg1 ;
-(void)doServiceCenterInitWithConfig:(id)arg0 ;
-(void)handleOverridesAssetUpdateEvent:(id)arg0 ;
-(void)initProxyObject:(BOOL)arg0 delegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processCDMNluRequest:(id)arg0 ;
-(void)processCDMNluRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)processEmbeddingRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)processNLUPreprocessRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)setup:(id)arg0 ;
-(void)setup:(id)arg0 completionHandler:(id)arg1 ;
-(void)setupKVOForwarding;
-(void)setupWithLocale:(id)arg0 embeddingVersion:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif