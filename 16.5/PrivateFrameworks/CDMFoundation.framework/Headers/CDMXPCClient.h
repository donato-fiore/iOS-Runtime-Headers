// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMXPCCLIENT_H
#define CDMXPCCLIENT_H

@class NSXPCConnection, NSString;
@protocol CDMClientDelegate;


#import "CDMClientInterface.h"
#import "CDMServiceCenter.h"

@interface CDMXPCClient : CDMClientInterface {
    os_unfair_lock_s _lock;
    id<CDMClientDelegate> *_delegate;
    NSXPCConnection *_connection;
    NSString *_localeIdentifier;
    CDMServiceCenter *_serviceCenter;
}




-(BOOL)areAssetsAvailable:(id)arg0 ;
-(BOOL)registerWithAssetsDelegate:(id)arg0 ;
-(id)connection;
-(id)init;
-(id)initWithConnection:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)doHandleCommand:(id)arg0 forCallback:(id)arg1 ;
-(void)handleOverridesAssetUpdateEvent:(id)arg0 ;
-(void)invalidateConnection;
-(void)processCDMNluRequest:(id)arg0 ;
-(void)processCDMNluRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)processCDMNluRequest:(id)arg0 nullableCompletionHandler:(id)arg1 ;
-(void)setup:(id)arg0 ;
-(void)setup:(id)arg0 completionHandler:(id)arg1 ;
-(void)setup:(id)arg0 nullableCompletionHandler:(id)arg1 ;


@end


#endif