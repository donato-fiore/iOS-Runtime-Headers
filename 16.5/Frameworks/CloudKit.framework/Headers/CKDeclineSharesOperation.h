// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDECLINESHARESOPERATION_H
#define CKDECLINESHARESOPERATION_H

@class NSMutableDictionary, NSArray;
@protocol CKDeclineSharesOperationCallbacks;


#import "CKOperation.h"
#import "CKDeclineSharesOperationInfo.h"

@interface CKDeclineSharesOperation : CKOperation <CKDeclineSharesOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKDeclineSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *declineSharesCompletionBlock; // ivar: _declineSharesCompletionBlock
@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL; // ivar: _errorsByShareURL
@property (readonly, nonatomic) CKDeclineSharesOperationInfo *operationInfo;
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
-(void)handleShareDeclineForURL:(id)arg0 error:(id)arg1 ;


@end


#endif