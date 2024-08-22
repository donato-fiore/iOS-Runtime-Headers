// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTCARRIERSPACECLIENT_H
#define CTCARRIERSPACECLIENT_H

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol CTCarrierSpaceClientDelegate;

#import <Foundation/Foundation.h>

#import "CTCarrierSpaceClientDelegateProxy.h"

@interface CTCarrierSpaceClient : NSObject {
    NSXPCConnection *_connection;
    queue _queue;
    queue _callbackQueue;
    NSXPCListenerEndpoint *_endpoint;
    CTCarrierSpaceClientDelegateProxy *_delegateProxy;
}


@property (weak, nonatomic) NSObject<CTCarrierSpaceClientDelegate> *delegate; // ivar: _delegate


-(id)_proxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(struct dispatch_queue_s *)arg0 ;
-(id)initWithQueue:(struct dispatch_queue_s *)arg0 andListenerEndpoint:(id)arg1 ;
-(void)_connect_sync;
-(void)_ensureConnected_sync;
-(void)authenticationDidComplete:(id)arg0 completion:(id)arg1 ;
-(void)authenticationDidFail:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)fetchAppsInfo:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchAppsInfo:(id)arg0 ;
-(void)fetchDataPlanMetrics:(id)arg0 ;
-(void)fetchPlansInfo:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchPlansInfo:(id)arg0 ;
-(void)fetchUsageInfo:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchUsageInfo:(id)arg0 ;
-(void)getAuthenticationContext:(id)arg0 ;
-(void)getCapabilities:(id)arg0 ;
-(void)getUserConsentFlowInfo:(id)arg0 ;
-(void)invalidate;
-(void)ping:(id)arg0 ;
-(void)purchasePlan:(id)arg0 authInfo:(id)arg1 completion:(id)arg2 ;
-(void)purchasePlan:(id)arg0 completion:(id)arg1 ;
-(void)refreshAllInfo:(id)arg0 ;
-(void)refreshAppsInfo:(id)arg0 ;
-(void)refreshPlansInfo:(id)arg0 ;
-(void)refreshUsageInfo:(id)arg0 ;
-(void)setUserConsent:(BOOL)arg0 completion:(id)arg1 ;
-(void)setUserInAuthFlow:(BOOL)arg0 completion:(id)arg1 ;
-(void)testMode:(BOOL)arg0 config:(id)arg1 completion:(id)arg2 ;
-(void)userDidAcceptPlanTerms:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif