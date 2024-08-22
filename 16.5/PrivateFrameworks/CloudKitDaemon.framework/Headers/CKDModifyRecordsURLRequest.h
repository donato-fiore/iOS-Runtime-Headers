// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMODIFYRECORDSURLREQUEST_H
#define CKDMODIFYRECORDSURLREQUEST_H

@class NSData, NSDictionary, NSMutableDictionary, NSArray, NSMutableArray;


#import "CKDURLRequest.h"

@interface CKDModifyRecordsURLRequest : CKDURLRequest

@property (nonatomic) BOOL atomic; // ivar: _atomic
@property (retain, nonatomic) NSData *clientChangeTokenData; // ivar: _clientChangeTokenData
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // ivar: _conflictLosersToResolveByRecordID
@property (nonatomic) BOOL containsMergeableValues; // ivar: _containsMergeableValues
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken; // ivar: _markAsParticipantNeedsNewInvitationToken
@property (copy, nonatomic) id *mergeableDeltaSavedBlock; // ivar: _mergeableDeltaSavedBlock
@property (retain, nonatomic) NSMutableDictionary *mergeableFieldKeyByRequestID; // ivar: _mergeableFieldKeyByRequestID
@property (nonatomic) BOOL oplock; // ivar: _oplock
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // ivar: _pluginFieldsForRecordDeletesByID
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID; // ivar: _recordByRequestID
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // ivar: _recordIDByRequestID
@property (retain, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // ivar: _recordIDsToDeleteToEtags
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToSigningPCSIdentity; // ivar: _recordIDsToDeleteToSigningPCSIdentity
@property (copy, nonatomic) id *recordPostedBlock; // ivar: _recordPostedBlock
@property (retain, nonatomic) NSArray *records; // ivar: _records
@property (copy, nonatomic) id *replacedDeltasBlock; // ivar: _replacedDeltasBlock
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // ivar: _replacementRequestsByRequestID
@property (retain, nonatomic) NSDictionary *requestedFieldsByRecordID; // ivar: _requestedFieldsByRecordID
@property (nonatomic) BOOL sendAllFields; // ivar: _sendAllFields
@property (nonatomic) BOOL sendMergeableDeltas; // ivar: _sendMergeableDeltas
@property (retain, nonatomic) NSMutableArray *skippedRecordsWithPurelyMergeableChanges; // ivar: _skippedRecordsWithPurelyMergeableChanges
@property (retain, nonatomic) NSArray *userPublicKeys; // ivar: _userPublicKeys


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(BOOL)requiresCKAnonymousSignature;
-(id)generateMergeableDeltaSaveOperationsForRecord:(id)arg0 error:(*id)arg1 ;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 recordIDsToDeleteToSigningPCSIdentity:(id)arg3 oplock:(BOOL)arg4 sendAllFields:(BOOL)arg5 clientChangeTokenData:(id)arg6 requestedFieldsByRecordId:(id)arg7 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)returnVerificationKeyAndSignatureForRequestOperation:(id)arg0 dataToBeSigned:(id)arg1 error:(*id)arg2 ;
-(id)zoneIDsToLock;
-(int)isolationLevel;
-(void)requestDidComplete;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif