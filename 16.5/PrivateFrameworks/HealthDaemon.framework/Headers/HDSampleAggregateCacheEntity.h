// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSAMPLEAGGREGATECACHEENTITY_H
#define HDSAMPLEAGGREGATECACHEENTITY_H

@class NSString;
@protocol HDHealthEntitySchema;


#import "HDHealthEntity.h"

@interface HDSampleAggregateCacheEntity : HDHealthEntity <HDHealthEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deleteCacheForBucketIndexes:(id)arg0 forQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 generationNumber:(NSInteger)arg3 persistentAnchorDate:(id)arg4 intervalComponents:(id)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(BOOL)enumerateCachedDataForQueryIdentifier:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 startIndex:(NSInteger)arg3 endIndex:(NSInteger)arg4 error:(*id)arg5 enumerationHandler:(id)arg6 ;
+(BOOL)insertCachedData:(id)arg0 forQueryIdentifier:(id)arg1 sourceEntity:(id)arg2 generationNumber:(NSInteger)arg3 persistentAnchorDate:(id)arg4 intervalComponents:(id)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(NSInteger)cachesExistForQueryIdentifier:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)pruneWithProfile:(id)arg0 nowDate:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif