// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTCONTEXTSTORE_H
#define KTCONTEXTSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TransparencyManagedDataStore.h"
#import "KTPublicKeyStore.h"

@interface KTContextStore : NSObject

@property (retain) NSMutableDictionary *contexts; // ivar: _contexts
@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (retain) KTPublicKeyStore *keyStore; // ivar: _keyStore


-(BOOL)logSharedMetrics;
-(BOOL)runDutyCycleForActivity:(id)arg0 logClient:(id)arg1 ;
-(id)initWithDataStore:(id)arg0 keyStore:(id)arg1 ;
-(id)retrieveTLTSTH:(id)arg0 error:(*id)arg1 ;
-(id)serializeTranscripts;
-(void)clearApplicationState:(id)arg0 logClient:(id)arg1 completionBlock:(id)arg2 ;
-(void)configureWithClient:(id)arg0 completionHandler:(id)arg1 ;
-(void)configureWithClient:(id)arg0 force:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)contextForApplication:(id)arg0 logClient:(id)arg1 fetchState:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)createContextForApplication:(id)arg0 dataStore:(id)arg1 logClient:(id)arg2 completionHandler:(id)arg3 ;
-(void)createContextForTLT:(id)arg0 logClient:(id)arg1 completionHandler:(id)arg2 ;
-(void)failHeadDownload:(id)arg0 application:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 logClient:(id)arg4 ;
-(void)failRequestDownload:(id)arg0 application:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 logClient:(id)arg4 ;
-(void)failSMTInclusionDownload:(id)arg0 application:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 logClient:(id)arg4 ;
-(void)forcedConfigure:(BOOL)arg0 logClient:(id)arg1 completionHandler:(id)arg2 ;
-(void)receivedSTHsFromPeers:(id)arg0 logClient:(id)arg1 error:(*id)arg2 ;
-(void)runDutyCycleConfigurationStepForActivity:(id)arg0 logClient:(id)arg1 ;
-(void)runDutyCycleProcessingStepForActivity:(id)arg0 context:(id)arg1 logClient:(id)arg2 ;
-(void)storeContext:(id)arg0 application:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateRequest:(id)arg0 serverDatas:(id)arg1 syncedDatas:(id)arg2 queryRequest:(id)arg3 queryResponse:(id)arg4 logClient:(id)arg5 error:(*id)arg6 ;
-(void)validateEnrollment:(id)arg0 application:(id)arg1 logClient:(id)arg2 completionHandler:(id)arg3 ;
-(void)validatePeer:(id)arg0 application:(id)arg1 logClient:(id)arg2 completionHandler:(id)arg3 ;
-(void)validatePeer:(id)arg0 application:(id)arg1 logClient:(id)arg2 revalidate:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)validateSelf:(id)arg0 application:(id)arg1 logClient:(id)arg2 completionHandler:(id)arg3 ;
-(void)verifyHeadConsistencyDownload:(id)arg0 application:(id)arg1 logClient:(id)arg2 ;
-(void)verifyHeadInclusionDownload:(id)arg0 application:(id)arg1 logClient:(id)arg2 ;
-(void)verifyRequestDownload:(id)arg0 application:(id)arg1 logClient:(id)arg2 ;
-(void)verifySMTInclusionDownload:(id)arg0 application:(id)arg1 logClient:(id)arg2 ;
-(void)verifyTLTConsistencyAndGarbageCollectSTHs:(id)arg0 ;


@end


#endif