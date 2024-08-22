// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTCONTEXTVERIFIER_H
#define KTCONTEXTVERIFIER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "KTApplicationPublicKeyStore.h"
#import "TransparencyManagedDataStore.h"
#import "KTLogClient.h"

@interface KTContextVerifier : NSObject

@property (retain) NSString *applicationID; // ivar: _applicationID
@property (retain) KTApplicationPublicKeyStore *applicationKeyStore; // ivar: _applicationKeyStore
@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (retain) KTLogClient *logClient; // ivar: _logClient


+(BOOL)verifyReceivedWitnessesForLoggableDatas:(id)arg0 error:(*id)arg1 ;
+(BOOL)verifyServerLoggableDatas:(id)arg0 againstSyncedLoggableDatas:(id)arg1 error:(*id)arg2 ;
+(NSInteger)verifyMutation:(id)arg0 record:(id)arg1 ;
+(void)addClientDataVRFOutput:(id)arg0 toLoggableDatas:(id)arg1 forClientData:(id)arg2 ;
+(void)addDeviceIdVRFOutput:(id)arg0 toLoggableDatas:(id)arg1 forDeviceId:(id)arg2 ;
-(BOOL)areSMTsOverMMD:(id)arg0 ;
-(BOOL)setInclusionVerifiedState:(NSUInteger)arg0 logEntry:(id)arg1 failure:(id)arg2 error:(*id)arg3 ;
-(BOOL)setInclusionVerifiedState:(NSUInteger)arg0 perApplicationTreeLogEntry:(id)arg1 failure:(id)arg2 error:(*id)arg3 ;
-(BOOL)setInclusionVerifiedState:(NSUInteger)arg0 topLevelTreeLogEntry:(id)arg1 failure:(id)arg2 error:(*id)arg3 ;
-(BOOL)verifyResponseAccountId:(id)arg0 requestAccountId:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyRevisionLogInclusionProofResponse:(id)arg0 receivedRevisions:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)verifyClientDataWitness:(id)arg0 clientData:(id)arg1 uriVRFOutput:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)verifyClientDataWitnesses:(id)arg0 clientDatas:(id)arg1 loggableDatas:(id)arg2 uriVRFOutput:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)verifyConsistencyProofResponse:(id)arg0 startRevision:(NSInteger)arg1 receivedRevisions:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)verifyDeviceWitness:(id)arg0 deviceId:(id)arg1 uriVRFOutput:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)verifyDeviceWitnesses:(id)arg0 requestDevices:(id)arg1 loggableDatas:(id)arg2 uriVRFOutput:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)verifyInclusionProof:(id)arg0 mapLeaf:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)verifyLogConsistencyResponse:(id)arg0 startRevision:(NSInteger)arg1 receivedRevisions:(id)arg2 forwards:(BOOL)arg3 serverHint:(id)arg4 error:(*id)arg5 ;
-(NSUInteger)verifyRevisionLogProofLogEntry:(id)arg0 patSTH:(*id)arg1 error:(*id)arg2 ;
-(NSUInteger)verifyRevisionLogTopLevelProof:(id)arg0 patSTH:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)verifySMTs:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)verifyUriWitness:(id)arg0 uri:(id)arg1 error:(*id)arg2 ;
-(id)createChainOfErrorsFromSMTFailures:(id)arg0 ;
-(id)createErrorFromSMTFailure:(id)arg0 underlyingError:(id)arg1 ;
-(id)initWithApplicationKeyStore:(id)arg0 dataStore:(id)arg1 applicationID:(id)arg2 ;
-(void)checkHeadEpoch:(id)arg0 ;
-(void)deleteSMT:(id)arg0 error:(id)arg1 ;
-(void)failSMTsIfOverMMD:(id)arg0 proof:(id)arg1 underlyingError:(id)arg2 errorCode:(NSInteger)arg3 savePendingError:(BOOL)arg4 serverHint:(id)arg5 ;
-(void)failSMTsIfOverMMD:(id)arg0 proof:(id)arg1 underlyingError:(id)arg2 errorCode:(NSInteger)arg3 serverHint:(id)arg4 ;
-(void)processSTHsFromGossipPeers:(id)arg0 error:(*id)arg1 ;
-(void)reportVerifySMTFailure:(id)arg0 serverHint:(id)arg1 error:(id)arg2 ;
-(void)reportVerifySMTFailure:(id)arg0 serverHint:(id)arg1 uri:(id)arg2 accountId:(id)arg3 error:(id)arg4 ;
-(void)verifyKTSMTs:(id)arg0 ;
-(void)verifyKTSMTsMerged:(id)arg0 queryResponse:(id)arg1 uri:(id)arg2 accountId:(id)arg3 ;
-(void)verifySTHs:(id)arg0 ;


@end


#endif