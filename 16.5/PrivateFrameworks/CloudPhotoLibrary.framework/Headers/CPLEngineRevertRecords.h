// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEREVERTRECORDS_H
#define CPLENGINEREVERTRECORDS_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineRevertRecords : CPLEngineStorage <CPLAbstractObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)addRecordsToRevertWithLocalScopedIdentifier:(id)arg0 class:(Class)arg1 error:(*id)arg2 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteRecordsToRevertFromBatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldRevertRecordWithLocalScopedIdentifier:(id)arg0 ;
-(NSUInteger)scopeType;
-(id)nextBatchOfRecordsToRevert;


@end


#endif