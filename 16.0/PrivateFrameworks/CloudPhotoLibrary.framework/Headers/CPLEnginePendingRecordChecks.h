// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINEPENDINGRECORDCHECKS_H
#define CPLENGINEPENDINGRECORDCHECKS_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEnginePendingRecordChecks : CPLEngineStorage <CPLAbstractObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)dequeueCloudScopedIdentifiersToCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)enqueueCloudScopedIdentifiersToCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasRecordsToCheckWithScopeIdentifier:(id)arg0 ;
-(NSUInteger)scopeType;
-(id)nextBatchOfRecordsToCheckWithScopeIdentifier:(id)arg0 ;


@end


#endif