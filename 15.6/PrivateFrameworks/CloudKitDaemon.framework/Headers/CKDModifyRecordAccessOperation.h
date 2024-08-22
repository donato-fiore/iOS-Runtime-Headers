// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDMODIFYRECORDACCESSOPERATION_H
#define CKDMODIFYRECORDACCESSOPERATION_H

@class NSMutableSet, NSArray, NSMutableDictionary;
@protocol CKModifyRecordAccessOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation

@property (copy, nonatomic) id *accessWasGrantedBlock; // ivar: _accessWasGrantedBlock
@property (copy, nonatomic) id *accessWasRevokedBlock; // ivar: _accessWasRevokedBlock
@property (retain, nonatomic) NSObject<CKModifyRecordAccessOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableSet *fetchedRecordIDs; // ivar: _fetchedRecordIDs
@property (nonatomic) int numSaveAttempts; // ivar: _numSaveAttempts
@property (retain, nonatomic) NSArray *recordIDsToGrant; // ivar: _recordIDsToGrant
@property (retain, nonatomic) NSArray *recordIDsToRevoke; // ivar: _recordIDsToRevoke
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // ivar: _recordsToSaveByID
@property (nonatomic) NSUInteger state;


+(NSInteger)isPredominatelyDownload;
-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(struct _PCSIdentityData *)_copyShareProtectionFromRecord:(id)arg0 error:(*id)arg1 ;
-(void)_fetchRecords;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleRecordFetched:(id)arg0 recordID:(id)arg1 error:(id)arg2 ;
-(void)_handleRecordSaved:(id)arg0 error:(id)arg1 ;
-(void)_saveRecords;
-(void)main;


@end


#endif