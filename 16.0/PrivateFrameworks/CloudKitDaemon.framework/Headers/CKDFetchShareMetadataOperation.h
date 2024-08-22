// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHSHAREMETADATAOPERATION_H
#define CKDFETCHSHAREMETADATAOPERATION_H

@class NSSet, NSDictionary, NSMutableDictionary, NSMutableArray;
@protocol CKFetchShareMetadataOperationCallbacks;


#import "CKDOperation.h"

@interface CKDFetchShareMetadataOperation : CKDOperation

@property (retain, nonatomic) NSObject<CKFetchShareMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) BOOL clientWillDisplaySystemAcceptPrompt; // ivar: _clientWillDisplaySystemAcceptPrompt
@property (nonatomic) BOOL errorOnOON; // ivar: _errorOnOON
@property (nonatomic) BOOL forceDSRefetch; // ivar: _forceDSRefetch
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee; // ivar: _overwriteContainerPCSServiceIfManatee
@property (retain, nonatomic) NSSet *rootRecordDesiredKeysSet; // ivar: _rootRecordDesiredKeysSet
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL; // ivar: _shareInvitationTokensByShareURL
@property (copy, nonatomic) id *shareMetadataFetchedBlock; // ivar: _shareMetadataFetchedBlock
@property (retain, nonatomic) NSMutableDictionary *shareTokenMetadatasToFetchByURL; // ivar: _shareTokenMetadatasToFetchByURL
@property (retain, nonatomic) NSMutableArray *shareURLsToFetch; // ivar: _shareURLsToFetch
@property (nonatomic) BOOL shouldFetchRootRecord; // ivar: _shouldFetchRootRecord
@property (nonatomic) BOOL skipShareDecryption; // ivar: _skipShareDecryption
@property (nonatomic) NSUInteger state;


-(BOOL)_currentUserIsOONForShareMetadata:(id)arg0 ;
-(BOOL)makeStateTransition;
-(id)_decodeProtectedFullToken:(id)arg0 tokenMetadata:(id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_continueHandlingFetchedShareMetadata:(id)arg0 shareURL:(id)arg1 ;
-(void)_continueSharePCSPrepForShareMetadata:(id)arg0 shareURL:(id)arg1 ;
-(void)_decryptRootRecordsForShareURL:(id)arg0 withMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(void)_fetchShortTokenMetadata;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleTokenResolveWithLookupInfo:(id)arg0 shareMetadata:(id)arg1 responseCode:(id)arg2 urlByShortTokenLookupInfos:(id)arg3 tokensToFetchByURL:(id)arg4 ;
-(void)_performCallbackForURL:(id)arg0 withMetadata:(id)arg1 error:(id)arg2 ;
-(void)_prepPPPCSDataForDugongShareMetadata:(id)arg0 withInvitationToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)_prepareShortTokens;
-(void)main;


@end


#endif