// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDDESERIALIZERECORDMODIFICATIONSOPERATION_H
#define CKDDESERIALIZERECORDMODIFICATIONSOPERATION_H

@class NSArray, NSData;
@protocol CKDeserializeRecordModificationsOperationCallbacks;


#import "CKDDatabaseOperation.h"
#import "CKDProtocolTranslator.h"

@interface CKDDeserializeRecordModificationsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKDeserializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *deserializeCompletionBlock; // ivar: _deserializeCompletionBlock
@property (retain) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain) NSArray *recordsToSave; // ivar: _recordsToSave
@property (retain, nonatomic) NSData *serializedModifications; // ivar: _serializedModifications
@property (nonatomic) NSUInteger state;
@property (retain) CKDProtocolTranslator *translator; // ivar: _translator


-(BOOL)makeStateTransition;
-(BOOL)validateAgainstLiveContainer:(id)arg0 error:(*id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_deserialize;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_postflightRecords;
-(void)_setupTranslator;
-(void)main;


@end


#endif