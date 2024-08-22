// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDCODEFUNCTIONINVOKEOPERATION_H
#define CKDCODEFUNCTIONINVOKEOPERATION_H

@class NSData, NSString, NSArray, NSURL;
@protocol CKCodeOperationCallbacks;


#import "CKDDatabaseOperation.h"
#import "PCCKey.h"
#import "CKDProtocolTranslator.h"
#import "CKDTrustedTargetKey.h"
#import "CKDTrustedTargetWrappedKey.h"

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSData *attestationEntropy; // ivar: _attestationEntropy
@property (retain, nonatomic) NSObject<CKCodeOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) NSUInteger dataProtectionType; // ivar: _dataProtectionType
@property (readonly, copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (copy, nonatomic) id *initialResponseReceivedCallback; // ivar: _initialResponseReceivedCallback
@property (retain, nonatomic) PCCKey *pccKey; // ivar: _pccKey
@property (retain, nonatomic) NSArray *pccWrappedKeys; // ivar: _pccWrappedKeys
@property (copy, nonatomic) NSData *permittedRemoteMeasurement; // ivar: _permittedRemoteMeasurement
@property (copy, nonatomic) id *recordFetchCommandBlock; // ivar: _recordFetchCommandBlock
@property (copy, nonatomic) id *recordFetchCompletionBlock; // ivar: _recordFetchCompletionBlock
@property (copy, nonatomic) id *recordFetchProgressBlock; // ivar: _recordFetchProgressBlock
@property (copy, nonatomic) id *replaceLocalSerializationsBlobs; // ivar: _replaceLocalSerializationsBlobs
@property (copy, nonatomic) id *replaceWireSerializations; // ivar: _replaceWireSerializations
@property (copy, nonatomic) NSArray *requestLocalEnvelopes; // ivar: _requestLocalEnvelopes
@property (copy, nonatomic) NSArray *requestLocalSerializations; // ivar: _requestLocalSerializations
@property (copy, nonatomic) NSArray *requestRecords; // ivar: _requestRecords
@property (copy, nonatomic) NSURL *resolvedBaseURL; // ivar: _resolvedBaseURL
@property (copy, nonatomic) NSArray *responseRecords; // ivar: _responseRecords
@property (copy, nonatomic) NSData *serializedArguments; // ivar: _serializedArguments
@property (copy, nonatomic) NSData *serializedResponse; // ivar: _serializedResponse
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory
@property (nonatomic) BOOL shouldSendRecordPCSKeys; // ivar: _shouldSendRecordPCSKeys
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) CKDProtocolTranslator *translator; // ivar: _translator
@property (copy, nonatomic) NSString *trustedTargetDomain; // ivar: _trustedTargetDomain
@property (retain, nonatomic) CKDTrustedTargetKey *trustedTargetKey; // ivar: _trustedTargetKey
@property (copy, nonatomic) NSString *trustedTargetOID; // ivar: _trustedTargetOID
@property (retain, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedKey; // ivar: _trustedTargetWrappedKey


+(NSInteger)isPredominatelyDownload;
+(id)URLFromEntitlementString:(id)arg0 ;
+(id)entitlementURLForServiceName:(id)arg0 container:(id)arg1 ;
-(BOOL)makeStateTransition;
-(BOOL)validateAgainstLiveContainer:(id)arg0 error:(*id)arg1 ;
-(id)activityCreate;
-(id)encryptData:(id)arg0 ;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_checkShouldSendRecordPCSKeys;
-(void)_getDeserializedRecords;
-(void)_getSerializedRequest;
-(void)_invokeFunction;
-(void)_invokeLocalFunction;
-(void)_postflightRecords;
-(void)_preflightRecords;
-(void)_prepareForProtectedCloudCompute;
-(void)_prepareForTrustedTargetEncryption;
-(void)main;


@end


#endif