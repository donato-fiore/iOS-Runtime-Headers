// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKACCEPTSHARESOPERATION_H
#define CKACCEPTSHARESOPERATION_H

@class NSMutableDictionary, NSArray;
@protocol CKAcceptSharesOperationCallbacks;


#import "CKOperation.h"
#import "CKAcceptSharesOperationInfo.h"

@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks>



@property (copy, nonatomic) id *acceptSharesCompletionBlock; // ivar: _acceptSharesCompletionBlock
@property (readonly, nonatomic) NSObject<CKAcceptSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL; // ivar: _errorsByShareURL
@property (readonly, nonatomic) CKAcceptSharesOperationInfo *operationInfo;
@property (copy, nonatomic) id *perShareCompletionBlock; // ivar: _perShareCompletionBlock
@property (copy, nonatomic) NSArray *shareMetadatas; // ivar: _shareMetadatas
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL; // ivar: _shareMetadatasByShareURL


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithShareMetadatas:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleShareAcceptanceForURL:(id)arg0 share:(id)arg1 error:(id)arg2 ;


@end


#endif