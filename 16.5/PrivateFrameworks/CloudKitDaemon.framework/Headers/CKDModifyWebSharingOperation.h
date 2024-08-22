// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMODIFYWEBSHARINGOPERATION_H
#define CKDMODIFYWEBSHARINGOPERATION_H

@class NSMutableSet, NSArray, NSMutableDictionary;
@protocol CKModifyWebSharingOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDModifyWebSharingOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKModifyWebSharingOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableSet *fetchedRecordIDs; // ivar: _fetchedRecordIDs
@property (nonatomic) int numSaveAttempts; // ivar: _numSaveAttempts
@property (retain, nonatomic) NSArray *recordIDsToShare; // ivar: _recordIDsToShare
@property (retain, nonatomic) NSArray *recordIDsToShareReadWrite; // ivar: _recordIDsToShareReadWrite
@property (retain, nonatomic) NSArray *recordIDsToUnshare; // ivar: _recordIDsToUnshare
@property (copy, nonatomic) id *recordWebSharedBlock; // ivar: _recordWebSharedBlock
@property (copy, nonatomic) id *recordWebUnsharedBlock; // ivar: _recordWebUnsharedBlock
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