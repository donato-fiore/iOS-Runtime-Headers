// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDSERIALIZERECORDMODIFICATIONSOPERATION_H
#define CKDSERIALIZERECORDMODIFICATIONSOPERATION_H

@class NSArray, NSData;
@protocol CKSerializeRecordModificationsOperationCallbacks;


#import "CKDDatabaseOperation.h"
#import "CKDProtocolTranslator.h"

@interface CKDSerializeRecordModificationsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKSerializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (copy, nonatomic) id *serializeCompletionBlock; // ivar: _serializeCompletionBlock
@property (retain) NSData *serializedModifications; // ivar: _serializedModifications
@property (nonatomic) NSUInteger state;
@property (retain) CKDProtocolTranslator *translator; // ivar: _translator


-(BOOL)makeStateTransition;
-(BOOL)validateAgainstLiveContainer:(id)arg0 error:(*id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_preflightRecords;
-(void)_serialize;
-(void)_setupTranslator;
-(void)main;


@end


#endif