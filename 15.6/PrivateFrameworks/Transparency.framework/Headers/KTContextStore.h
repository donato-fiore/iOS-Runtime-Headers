// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTCONTEXTSTORE_H
#define KTCONTEXTSTORE_H

@class NSMutableDictionary, NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "TransparencyManagedDataStore.h"
#import "KTPublicKeyStore.h"

@interface KTContextStore : NSObject

@property (retain) NSMutableDictionary *_contexts; // ivar: __contexts
@property (retain) NSData *cachedGossip; // ivar: _cachedGossip
@property (readonly) NSDictionary *contexts;
@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (retain) KTPublicKeyStore *keyStore; // ivar: _keyStore


-(BOOL)logSharedMetrics;
-(BOOL)runDutyCycleForActivity:(id)arg0 logClient:(id)arg1 ;
-(BOOL)shouldGossip;
-(id)createContextForApplication:(id)arg0 dataStore:(id)arg1 logClient:(id)arg2 ;
-(id)createContextForTLT:(id)arg0 logClient:(id)arg1 ;
-(id)getCachedGossip;
-(id)initWithDataStore:(id)arg0 keyStore:(id)arg1 ;
-(id)serializeTranscripts;
-(void)clearApplicationState:(id)arg0 logClient:(id)arg1 completionBlock:(id)arg2 ;
-(void)clearGossip;
// -(void)configureWithClient:(id)arg0 applicationHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)configureWithClient:(id)arg0 force:(BOOL)arg1 applicationHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)contextForApplication:(id)arg0 logClient:(id)arg1 fetchState:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)failHeadDownload:(id)arg0 application:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 logClient:(id)arg4 ;
-(void)failRequestDownload:(id)arg0 application:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 logClient:(id)arg4 ;
-(void)failSMTInclusionDownload:(id)arg0 application:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 logClient:(id)arg4 ;
// -(void)forcedConfigure:(BOOL)arg0 logClient:(id)arg1 applicationHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)receivedSTHsFromPeers:(id)arg0 logClient:(id)arg1 verifier:(id)arg2 block:(id)arg3 ;
-(void)retrieveTLTSTH:(id)arg0 block:(id)arg1 ;
-(void)rollKeyForApplication:(id)arg0 logClient:(id)arg1 completionBlock:(id)arg2 ;
-(void)runDutyCycleConfigurationStepForActivity:(id)arg0 logClient:(id)arg1 ;
-(void)runDutyCycleProcessingStepForActivity:(id)arg0 context:(id)arg1 logClient:(id)arg2 ;
-(void)setContext:(id)arg0 forKey:(id)arg1 ;
-(void)signData:(id)arg0 application:(id)arg1 logClient:(id)arg2 completionBlock:(id)arg3 ;
-(void)storeContext:(id)arg0 application:(id)arg1 ;
-(void)updateRequest:(id)arg0 serverDatas:(id)arg1 syncedDatas:(id)arg2 accountKey:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 logClient:(id)arg6 error:(*id)arg7 ;
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