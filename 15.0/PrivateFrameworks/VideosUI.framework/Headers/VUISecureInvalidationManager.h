// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISECUREINVALIDATIONMANAGER_H
#define VUISECUREINVALIDATIONMANAGER_H

@class NSString, NSMutableArray, NSMutableSet, TVPStateMachine;
@protocol VUIStoreFPSKeyLoaderDelegate;

#import <Foundation/Foundation.h>


@interface VUISecureInvalidationManager : NSObject <VUIStoreFPSKeyLoaderDelegate>



@property (nonatomic) NSUInteger backgroundTaskIdentifier; // ivar: _backgroundTaskIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *keyLoaders; // ivar: _keyLoaders
@property (nonatomic) BOOL networkErrorOccurredDuringInvalidation; // ivar: _networkErrorOccurredDuringInvalidation
@property (retain, nonatomic) NSMutableSet *penaltyBox; // ivar: _penaltyBox
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_getParamsForDeletionInfo:(id)arg0 keyServerURL:(*id)arg1 nonceURL:(*id)arg2 keyIdentifier:(*id)arg3 offlineKeyData:(*id)arg4 dsid:(*id)arg5 additionalRequestParams:(*id)arg6 contentID:(*id)arg7 ;
-(BOOL)_validateParamsForDeletionInfo:(id)arg0 ;
-(BOOL)storeFPSKeyLoader:(id)arg0 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(id)arg1 ;
-(id)_invalidateKeysForDeletedVideos;
-(id)init;
-(void)_networkReachbilityDidChange:(id)arg0 ;
-(void)_registerStateMachineHandlers;
-(void)_sendInvalidationRequestsForDeletionInfoArrays:(id)arg0 completion:(id)arg1 ;
-(void)_sendInvalidationRequestsForFirstArray:(id)arg0 completion:(id)arg1 ;
-(void)addDeletionInfoToPenaltyBox:(id)arg0 ;
-(void)dealloc;
-(void)invalidateKeysForDeletedVideos;
-(void)removeDeletionInfoFromPenaltyBox:(id)arg0 ;


@end


#endif