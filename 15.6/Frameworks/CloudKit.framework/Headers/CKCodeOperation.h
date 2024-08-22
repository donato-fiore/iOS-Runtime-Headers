// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCODEOPERATION_H
#define CKCODEOPERATION_H

@class NSMutableDictionary, NSURL, NSString, PBCodable<CKCodeOperationMessageMutation>, NSArray, NSError;
@protocol CKOperationInMemoryAssets, CKCodeOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKCodeService.h"
#import "CKCodeFunctionInvokeOperationInfo.h"

@interface CKCodeOperation : CKDatabaseOperation <CKOperationInMemoryAssets, CKCodeOperationCallbacks>



@property (retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID; // ivar: _assetInfoByArrayIndexByRecordKeyByRecordID
@property (readonly, nonatomic) NSObject<CKCodeOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *codeOperationCompletionBlock; // ivar: _codeOperationCompletionBlock
@property (retain, nonatomic) CKCodeService *codeService; // ivar: _codeService
@property (nonatomic) NSInteger destinationServer; // ivar: _destinationServer
@property (copy, nonatomic) NSURL *destinationServerExplicitURL; // ivar: _destinationServerExplicitURL
@property (copy, nonatomic) id *didSubstituteRequestRecordTransportsBlock; // ivar: _didSubstituteRequestRecordTransportsBlock
@property (nonatomic) BOOL dropInMemoryAssetContentASAP; // ivar: _dropInMemoryAssetContentASAP
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (copy, nonatomic) id *incompleteResponsePreviewBlock; // ivar: _incompleteResponsePreviewBlock
@property (readonly, nonatomic) CKCodeFunctionInvokeOperationInfo *operationInfo;
@property (copy, nonatomic) id *perRecordCompletionBlock; // ivar: _perRecordCompletionBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (retain, nonatomic) PBCodable<CKCodeOperationMessageMutation> *request; // ivar: _request
@property (retain, nonatomic) NSArray *requestLocalSerializations; // ivar: _requestLocalSerializations
@property (retain, nonatomic) PBCodable<CKCodeOperationMessageMutation> *response; // ivar: _response
@property (retain, nonatomic) Class responseClass; // ivar: _responseClass
@property (retain, nonatomic) NSError *responseError; // ivar: _responseError
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory


+(id)operationDaemonCallbackProtocol;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithFunctionName:(id)arg0 responseClass:(Class)arg1 ;
-(id)initWithServiceName:(id)arg0 functionName:(id)arg1 responseClass:(Class)arg2 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleAssetDataForRecordID:(id)arg0 recordKey:(id)arg1 arrayIndex:(NSInteger)arg2 data:(id)arg3 offset:(NSUInteger)arg4 ;
-(void)handleFetchForRecordID:(id)arg0 didProgress:(CGFloat)arg1 ;
-(void)handleFetchForRecordID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)handleInitialResponseReceived:(id)arg0 reply:(id)arg1 ;
-(void)handleReplaceLocalWithWireSerializations:(id)arg0 encryptedMasterKeys:(id)arg1 wireEnvelopes:(id)arg2 reply:(id)arg3 ;
-(void)handleReplaceWireSerializationsWithRecords:(id)arg0 ;
-(void)performCKOperation;


@end


#endif