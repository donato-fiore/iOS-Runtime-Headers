// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHSHAREMETADATAOPERATION_H
#define CKFETCHSHAREMETADATAOPERATION_H

@class NSMutableDictionary, NSMutableSet, NSArray, NSDictionary;
@protocol CKFetchShareMetadataOperationCallbacks;


#import "CKOperation.h"
#import "CKFetchShareMetadataOperationInfo.h"

@interface CKFetchShareMetadataOperation : CKOperation <CKFetchShareMetadataOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchShareMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *errorsByURL; // ivar: _errorsByURL
@property (copy, nonatomic) id *fetchShareMetadataCompletionBlock; // ivar: _fetchShareMetadataCompletionBlock
@property (readonly, nonatomic) CKFetchShareMetadataOperationInfo *operationInfo;
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee; // ivar: _overwriteContainerPCSServiceIfManatee
@property (retain, nonatomic) NSMutableSet *packagesToDestroy; // ivar: _packagesToDestroy
@property (copy, nonatomic) id *perShareMetadataBlock; // ivar: _perShareMetadataBlock
@property (copy, nonatomic) NSArray *rootRecordDesiredKeys; // ivar: _rootRecordDesiredKeys
@property (copy, nonatomic) NSDictionary *shareInvitationTokensByShareURL; // ivar: _shareInvitationTokensByShareURL
@property (copy, nonatomic) NSArray *shareURLs; // ivar: _shareURLs
@property (nonatomic) BOOL shouldFetchRootRecord; // ivar: _shouldFetchRootRecord
@property (nonatomic) BOOL skipShareDecryption; // ivar: _skipShareDecryption


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)claimPackagesInRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithShareURLs:(id)arg0 ;
-(id)initWithShareURLs:(id)arg0 invitationTokensByShareURL:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleShareMetadataFetchForURL:(id)arg0 shareMetadata:(id)arg1 error:(id)arg2 ;


@end


#endif