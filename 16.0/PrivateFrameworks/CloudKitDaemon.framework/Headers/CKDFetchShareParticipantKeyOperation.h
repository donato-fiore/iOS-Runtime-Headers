// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHSHAREPARTICIPANTKEYOPERATION_H
#define CKDFETCHSHAREPARTICIPANTKEYOPERATION_H

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol CKFetchShareParticipantKeyOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSDictionary *baseTokensByShareID; // ivar: _baseTokensByShareID
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID; // ivar: _childRecordIDsByShareID
@property (retain, nonatomic) NSObject<CKFetchShareParticipantKeyOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) BOOL hasAttemptedShareUpdate; // ivar: _hasAttemptedShareUpdate
@property (retain, nonatomic) NSMutableArray *shareIDs; // ivar: _shareIDs
@property (copy, nonatomic) id *shareParticipantKeyFetchedBlock; // ivar: _shareParticipantKeyFetchedBlock
@property (retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID; // ivar: _sharesNeedingUpdateByID
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)_participantKeyFromShare:(id)arg0 withError:(*id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleFetchedShare:(id)arg0 withID:(id)arg1 error:(id)arg2 ;
-(void)_performCallbackForShareID:(id)arg0 withParticipantKey:(id)arg1 error:(id)arg2 ;
-(void)_sendErrorForFailedShares;
-(void)fetchSharesFromServer;
-(void)main;
-(void)updateShares;


@end


#endif