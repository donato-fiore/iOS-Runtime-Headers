// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSTOREKITSERVICE_H
#define DTSTOREKITSERVICE_H

@class DTXService, NSXPCConnection, NSString;
@protocol ASDOctaneClientProtocol;



@interface DTStoreKitService : DTXService <ASDOctaneClientProtocol>

 {
    NSXPCConnection *_connectionToDaemon;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_dataUsingCompatibilityTimeRateFrom:(id)arg0 currentVersion:(int)arg1 ;
+(void)_sendMessage:(id)arg0 onConnection:(id)arg1 completion:(id)arg2 ;
+(void)registerCapabilities:(id)arg0 ;
+(void)removeConfigurationDataForBundleID:(id)arg0 connection:(id)arg1 completion:(id)arg2 ;
+(void)syncConfigurationData:(id)arg0 forBundleID:(id)arg1 connection:(id)arg2 completion:(id)arg3 ;
-(BOOL)_handleBuyProductMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleChangeAutoRenewStatusMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleCompleteAskToBuyTransactionMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleDeleteAllTransactionsMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleFetchTransactionsMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleObserveTransactionsMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleRemoveConfigurationMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleSyncConfigurationMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleUpdateTransactionMessage:(id)arg0 forBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_processMessage:(id)arg0 error:(*id)arg1 ;
-(id)_descriptionForServiceCommand:(NSUInteger)arg0 ;
-(id)_synchronousRemoteObjectProxy:(*id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(void)_disconnectServiceConnection;
-(void)_sendGenericSuccessResponseForMessage:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)receiveEventOfType:(NSInteger)arg0 eventData:(id)arg1 identifier:(id)arg2 ;
-(void)transactionDeleted:(NSUInteger)arg0 forBundleID:(id)arg1 ;
-(void)transactionUpdated:(id)arg0 forBundleID:(id)arg1 ;


@end


#endif