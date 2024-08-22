// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDACCEPTSHARESOPERATION_H
#define CKDACCEPTSHARESOPERATION_H

@class NSMutableArray, NSMutableDictionary;
@protocol CKAcceptSharesOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDAcceptSharesOperation : CKDDatabaseOperation

@property (copy, nonatomic) id *acceptCompletionBlock; // ivar: _acceptCompletionBlock
@property (retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch; // ivar: _acceptedShareURLsToFetch
@property (retain, nonatomic) NSMutableDictionary *anonymousShareTuplesAcceptAttempted; // ivar: _anonymousShareTuplesAcceptAttempted
@property (retain, nonatomic) NSMutableArray *anonymousShareTuplesAccepted; // ivar: _anonymousShareTuplesAccepted
@property (retain, nonatomic) NSObject<CKAcceptSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL; // ivar: _clientProvidedMetadatasByURL
@property (nonatomic) NSUInteger numShareAcceptAttempts; // ivar: _numShareAcceptAttempts
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL; // ivar: _shareMetadatasToAcceptByURL
@property (retain, nonatomic) NSMutableArray *shareURLsToAccept; // ivar: _shareURLsToAccept
@property (nonatomic) NSUInteger state;


-(BOOL)_acceptShares;
-(BOOL)_callingParticipantOONForShareMetadata:(id)arg0 ;
-(BOOL)_validateInvitedPCSCanBeDecryptedForShare:(id)arg0 ;
-(BOOL)makeStateTransition;
-(NSUInteger)sharingServiceTypeForShareMetadata:(id)arg0 ;
-(id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg0 forShareWithURL:(id)arg1 error:(*id)arg2 ;
-(id)_keySwapForOONParticipant:(id)arg0 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_decryptShareMetadata;
-(void)_fetchAcceptedShares;
-(void)_fetchMetadataForShares;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleShareURLAccepted:(id)arg0 forShare:(id)arg1 responseCode:(id)arg2 ;
-(void)_performCallbackForURL:(id)arg0 withShare:(id)arg1 error:(id)arg2 ;
-(void)_prepareShareMetadata;
-(void)_processAnonymousShares;
-(void)main;


@end


#endif