// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEIGNOREDRECORDS_H
#define CPLENGINEIGNOREDRECORDS_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineIgnoredRecords : CPLEngineStorage <CPLAbstractObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)addIgnoredRecord:(id)arg0 ignoredDate:(id)arg1 otherScopeIndex:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg0 ;
-(BOOL)removeRecordWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)scopeIdentifier:(id)arg0 hasIgnoredRecordsBeforeDate:(id)arg1 ;
-(BOOL)setIgnoredDate:(id)arg0 forRecordWithScopedIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)scopeType;
-(id)ignoredRecordWithScopedIdentifier:(id)arg0 ;
-(id)ignoredRecordsBeforeDate:(id)arg0 scopeIdentifier:(id)arg1 maximumCount:(NSUInteger)arg2 ;
-(id)recordWithScopedIdentifier:(id)arg0 ;


@end


#endif