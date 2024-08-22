// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTCONTEXT_H
#define KTCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "KTAccountKeyServer.h"
#import "KTApplicationPublicKeyStore.h"
#import "KTContextStore.h"
#import "TransparencyManagedDataStore.h"
#import "KTLogClient.h"
#import "TransparencyTranscript.h"
#import "KTContextVerifier.h"

@interface KTContext : NSObject

@property (retain) KTAccountKeyServer *accountKeyServer; // ivar: _accountKeyServer
@property (retain) NSString *applicationID; // ivar: _applicationID
@property (retain) KTApplicationPublicKeyStore *applicationKeyStore; // ivar: _applicationKeyStore
@property (weak) KTContextStore *contextStore; // ivar: _contextStore
@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (retain) KTLogClient *logClient; // ivar: _logClient
@property (retain) TransparencyTranscript *transcript; // ivar: _transcript
@property (retain) KTContextVerifier *verifier; // ivar: _verifier


+(BOOL)hasAccountMismatch:(id)arg0 ;
+(BOOL)ktCapable:(id)arg0 ;
+(id)failedServerLoggableDatas:(id)arg0 ;
+(id)validateEventName:(NSUInteger)arg0 application:(id)arg1 ;
-(BOOL)checkDeferActivity:(id)arg0 ;
-(BOOL)contextShouldGossip;
-(BOOL)failExpiredRequest:(id)arg0 error:(id)arg1 ;
-(BOOL)ready:(*id)arg0 ;
-(BOOL)runDutyCycleForActivity:(id)arg0 ;
-(BOOL)unsupported:(*id)arg0 ;
-(BOOL)verifyInclusionProofDownload:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyInclusionProofDownloadRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyRequestDownload:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySMTDownload:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)downloadTypeForValidateType:(NSUInteger)arg0 ;
-(NSUInteger)handleVerifyInsertResponse:(id)arg0 request:(id)arg1 transparentData:(*id)arg2 error:(*id)arg3 ;
-(NSUInteger)handleVerifyPeerResponse:(id)arg0 queryRequest:(id)arg1 request:(id)arg2 transparentData:(*id)arg3 error:(*id)arg4 ;
-(NSUInteger)handleVerifySelfResponse:(id)arg0 queryRequest:(id)arg1 request:(id)arg2 transparentData:(*id)arg3 error:(*id)arg4 ;
-(NSUInteger)validateEnrollment:(id)arg0 queryRequest:(id)arg1 queryResponse:(id)arg2 transparentData:(*id)arg3 error:(*id)arg4 ;
-(NSUInteger)validateEnrollment:(id)arg0 transparentData:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)validateEnrollmentWithAnalytics:(id)arg0 transparentData:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)validatePeer:(id)arg0 queryRequest:(id)arg1 queryResponse:(id)arg2 transparentData:(*id)arg3 error:(*id)arg4 ;
-(NSUInteger)validatePeer:(id)arg0 transparentData:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)validatePeerWithAnalytics:(id)arg0 transparentData:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)validatePeerWithAnalytics:(id)arg0 transparentData:(*id)arg1 revalidate:(BOOL)arg2 error:(*id)arg3 ;
-(NSUInteger)validateSelf:(id)arg0 queryRequest:(id)arg1 queryResponse:(id)arg2 transparentData:(*id)arg3 error:(*id)arg4 ;
-(NSUInteger)validateSelf:(id)arg0 transparentData:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)validateSelfWithAnalytics:(id)arg0 transparentData:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)verifyConsistencyProofDownload:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)verifyConsistencyProofDownloadRecord:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)writeResult:(NSUInteger)arg0 request:(id)arg1 proof:(id)arg2 error:(*id)arg3 ;
-(id)analyticsForRequestValidation:(id)arg0 initialResult:(NSUInteger)arg1 result:(NSUInteger)arg2 failure:(id)arg3 transparentData:(id)arg4 ;
-(id)copyState;
-(id)createChainOfErrorsFromRequestFailures:(id)arg0 ;
-(id)createChainOfErrorsFromSTHFailures:(id)arg0 type:(NSUInteger)arg1 ;
-(id)createErrorFromRequestFailure:(id)arg0 underlyingError:(id)arg1 ;
-(id)createErrorFromSTHFailure:(id)arg0 underlyingError:(id)arg1 ;
-(id)initWithApplicationKeyStore:(id)arg0 dataStore:(id)arg1 logClient:(id)arg2 applicationID:(id)arg3 contextStore:(id)arg4 ;
-(id)parseQueryRequestFromKTRequest:(id)arg0 error:(*id)arg1 ;
-(id)parseSTHData:(id)arg0 error:(*id)arg1 ;
-(id)queryRequestForKTRequest:(id)arg0 error:(*id)arg1 ;
-(id)retrieveTLTSTH:(*id)arg0 ;
-(void)analyticsForDecodeFailure:(id)arg0 error:(id)arg1 ;
-(void)analyticsForParseFailure:(id)arg0 ;
-(void)analyticsForPredateLogBeginningMs:(NSUInteger)arg0 expectedLogBeginningMS:(NSUInteger)arg1 sth:(id)arg2 ;
-(void)analyticsForTooNewLogBeginningMs:(NSUInteger)arg0 expectedLogBeginningMS:(NSUInteger)arg1 sth:(id)arg2 ;
-(void)analyticsForUnsupportedProtocol:(int)arg0 expected:(int)arg1 sth:(id)arg2 ;
-(void)checkInclusionProofEpoch:(id)arg0 ;
-(void)clearState:(id)arg0 ;
-(void)downloadConsistencyProof:(*id)arg0 retry:(BOOL)arg1 ;
-(void)downloadInclusionProofsForRevisions:(id)arg0 downloadType:(NSUInteger)arg1 retry:(BOOL)arg2 error:(*id)arg3 ;
-(void)downloadQueryForKTRequest:(id)arg0 retry:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)downloadSMHInclusionProofs:(*id)arg0 retry:(BOOL)arg1 ;
-(void)downloadSMTQueryResponse:(id)arg0 retry:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)downloadSTHInclusionProofs:(*id)arg0 retry:(BOOL)arg1 ;
-(void)failExpiredSTHsForType:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)failHeadDownload:(id)arg0 failure:(id)arg1 retry:(BOOL)arg2 ;
-(void)failHeadDownloadRecord:(id)arg0 failure:(id)arg1 retry:(BOOL)arg2 error:(*id)arg3 ;
-(void)failRequestDownload:(id)arg0 failure:(id)arg1 retry:(BOOL)arg2 ;
-(void)failRequestDownloadRecord:(id)arg0 failure:(id)arg1 retry:(BOOL)arg2 ;
-(void)failSMTDownload:(id)arg0 failure:(id)arg1 retry:(BOOL)arg2 ;
-(void)failSMTDownloadRecord:(id)arg0 failure:(id)arg1 retry:(BOOL)arg2 error:(*id)arg3 ;
-(void)failSMTRequest:(id)arg0 failure:(id)arg1 retry:(BOOL)arg2 error:(*id)arg3 ;
-(void)fetchQueryForKTRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)garbageCollectHeads:(*id)arg0 ;
-(void)handleDownloadOfType:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)handleDownloadOfType:(NSUInteger)arg0 retry:(BOOL)arg1 error:(*id)arg2 ;
-(void)handleGarbageCollection:(id)arg0 error:(*id)arg1 ;
-(void)handleHeadsWithUnverifiedSignature:(*id)arg0 ;
-(void)handleKTRequest:(id)arg0 queryRequest:(id)arg1 queryResponse:(id)arg2 error:(*id)arg3 ;
-(void)handleKTRequestDownload:(id)arg0 ;
-(void)handleKTRequestDownload:(id)arg0 retry:(BOOL)arg1 ;
-(void)handlePendingConsistencyProofs:(*id)arg0 ;
-(void)handlePendingHeadInclusionProofs:(*id)arg0 ;
-(void)handlePendingMapHeadMMDs:(*id)arg0 ;
-(void)handlePendingQueryRequests:(id)arg0 error:(*id)arg1 ;
-(void)handleSMTInclusionDownload:(id)arg0 request:(id)arg1 ;
-(void)handleSMTInclusionDownload:(id)arg0 request:(id)arg1 retry:(BOOL)arg2 ;
-(void)handleSMTsWithUnverifiedSignature:(*id)arg0 ;
-(void)handleURIsWithPendingSMTs:(id)arg0 error:(*id)arg1 ;
-(void)logFinishFailureEvent:(id)arg0 error:(id)arg1 ;
-(void)logFinishSuccessEvent:(id)arg0 ;
-(void)logStartEvent:(id)arg0 ;
-(void)processSTHsFromPeers:(id)arg0 verifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportFailedRevisions:(id)arg0 failure:(id)arg1 downloadType:(NSUInteger)arg2 application:(id)arg3 ;
-(void)saveRequestFailure:(id)arg0 failure:(id)arg1 ;
-(void)verifyRequestDownloadRecord:(id)arg0 error:(*id)arg1 ;
-(void)verifySMTDownloadRecord:(id)arg0 error:(*id)arg1 ;
-(void)verifySMTQueryResponse:(id)arg0 request:(id)arg1 error:(*id)arg2 ;


@end


#endif