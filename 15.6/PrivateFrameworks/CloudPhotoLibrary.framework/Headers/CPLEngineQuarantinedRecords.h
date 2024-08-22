// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINEQUARANTINEDRECORDS_H
#define CPLENGINEQUARANTINEDRECORDS_H

@class NSMutableArray, NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>

 {
    NSMutableArray *_quarantineMessages;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)_quarantineRejectedRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)addQuarantinedRecordWithScopedIdentifier:(id)arg0 recordClass:(Class)arg1 reason:(id)arg2 error:(*id)arg3 ;
-(BOOL)bumpRejectedRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)isRecordWithScopedIdentifierQuarantined:(id)arg0 ;
-(BOOL)removeQuarantinedRecordWithScopedIdentifier:(id)arg0 notify:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)resetRejectedRecordsWithError:(*id)arg0 ;
-(Class)classForQuarantinedRecordWithScopedIdentifier:(id)arg0 ;
-(NSUInteger)countOfQuarantinedRecords;
-(NSUInteger)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg0 ;
-(NSUInteger)scopeType;
-(void)_sendQuarantineFeedbackWithRecordClass:(Class)arg0 reason:(id)arg1 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif