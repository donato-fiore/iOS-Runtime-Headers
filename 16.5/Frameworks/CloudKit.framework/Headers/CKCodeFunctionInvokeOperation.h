// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCODEFUNCTIONINVOKEOPERATION_H
#define CKCODEFUNCTIONINVOKEOPERATION_H

@class NSURL, NSString, NSError, NSData;
@protocol CKCodeFunctionInvokeOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKCodeFunctionInvokeOperationInfo.h"

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation <CKCodeFunctionInvokeOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKCodeFunctionInvokeOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSURL *clientRuntimeProvidedServiceURL; // ivar: _clientRuntimeProvidedServiceURL
@property (copy, nonatomic) id *functionInvokeCompletionBlock; // ivar: _functionInvokeCompletionBlock
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (nonatomic) BOOL local; // ivar: _local
@property (readonly, nonatomic) CKCodeFunctionInvokeOperationInfo *operationInfo;
@property (retain, nonatomic) NSError *responseError; // ivar: _responseError
@property (copy, nonatomic) NSData *serializedRequest; // ivar: _serializedRequest
@property (copy, nonatomic) NSData *serializedResponse; // ivar: _serializedResponse
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithServiceName:(id)arg0 functionName:(id)arg1 serializedParameters:(id)arg2 ;
-(id)initWithServiceName:(id)arg0 functionName:(id)arg1 serializedParameters:(id)arg2 local:(BOOL)arg3 ;
-(id)initWithServiceName:(id)arg0 functionName:(id)arg1 serializedRequest:(id)arg2 ;
-(id)initWithServiceName:(id)arg0 functionName:(id)arg1 serializedRequest:(id)arg2 local:(BOOL)arg3 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleInitialResponseReceived:(id)arg0 reply:(id)arg1 ;
-(void)handleReplaceLocalWithWireSerializations:(id)arg0 encryptedMasterKeys:(id)arg1 wireEnvelopes:(id)arg2 reply:(id)arg3 ;
-(void)handleReplaceWireSerializationsWithRecords:(id)arg0 ;


@end


#endif