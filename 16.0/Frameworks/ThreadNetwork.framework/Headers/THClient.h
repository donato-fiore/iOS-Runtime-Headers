// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef THCLIENT_H
#define THCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface THClient : NSObject {
    BOOL _isConnected;
}


@property (nonatomic) *dispatch_queue_s threadSafePropertyQueue; // ivar: _threadSafePropertyQueue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)getConnectionEntitlementValidity;
-(BOOL)getConnectionEntitlementValidity:(id)arg0 ;
-(BOOL)initCommon;
-(BOOL)initCommon:(id)arg0 ;
-(BOOL)isConnected;
-(id)asynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)clientProxyWithErrorHandler:(id)arg0 ;
// -(id)clientProxyWithErrorHandler:(id)arg0 pingService:(unk)arg1  ;
-(id)init;
-(id)initWithKeychainAccessGroup:(id)arg0 ;
// -(id)performXPCRequestBlock:(id)arg0 timeout:(unk)arg1 error:(CGFloat)arg2  ;
-(id)synchronousClientProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxy;
-(void)checkPreferredNetworkForActiveOperationalDataset:(id)arg0 completion:(id)arg1 ;
-(void)connectToXPCService;
-(void)ctcsAddPreferredNetworkWithCompletion:(id)arg0 extendedPANId:(id)arg1 borderAgentID:(id)arg2 completion:(id)arg3 ;
-(void)ctcsCleanPreferredAndBlaclistedThreadNetworksWithCompletion:(id)arg0 ;
-(void)ctcsDeleteActiveDataSetRecordWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)ctcsDeletePreferredNetworkWithCompletion:(id)arg0 ;
-(void)ctcsRetrieveActiveDataSetRecordWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)ctcsRetrievePreferredNetworkInternallyWithCompletion:(id)arg0 ;
-(void)ctcsStoreThreadNetworkCredentialActiveDataSetInternally:(id)arg0 network:(id)arg1 credentialsDataSet:(id)arg2 waitForSync:(BOOL)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)deleteCredentialsForBorderAgent:(id)arg0 completion:(id)arg1 ;
-(void)handleXPCConnectionInterrupted;
-(void)handleXPCConnectionInvalidated;
-(void)invalidate;
-(void)pingXPCService;
-(void)pingXPCServiceWithClientProxy:(id)arg0 completion:(id)arg1 ;
-(void)retrieveAllCredentials:(id)arg0 ;
-(void)retrieveCredentialsForBorderAgent:(id)arg0 completion:(id)arg1 ;
-(void)retrieveCredentialsForExtendedPANID:(id)arg0 completion:(id)arg1 ;
-(void)retrieveCredentialsForUUID:(id)arg0 completion:(id)arg1 ;
-(void)retrievePreferredCredentials:(id)arg0 ;
-(void)retrievePreferredCredentialsInternally:(id)arg0 ;
-(void)retrievePreferredNetworkInternallyOnMdnsAndSig:(id)arg0 ;
-(void)setIsConnected:(BOOL)arg0 ;
-(void)storeCredentialsForBorderAgent:(id)arg0 activeOperationalDataSet:(id)arg1 completion:(id)arg2 ;
-(void)storeCredentialsForBorderAgentInternally:(id)arg0 networkName:(id)arg1 extendedPANId:(id)arg2 activeOperationalDataSet:(id)arg3 completion:(id)arg4 ;


@end


#endif