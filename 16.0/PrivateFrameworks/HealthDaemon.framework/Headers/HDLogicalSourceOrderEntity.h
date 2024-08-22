// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDLOGICALSOURCEORDERENTITY_H
#define HDLOGICALSOURCEORDERENTITY_H



#import "HDHealthEntity.h"

@interface HDLogicalSourceOrderEntity : HDHealthEntity



+(BOOL)enumerateOrderedLogicalSourceIDsForType:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)enumerateOrderedSourceIDsForType:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)saveOrderedLogicalSourceIDs:(id)arg0 type:(id)arg1 userOrdered:(BOOL)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateOrderedLogicalSourcesForType:(id)arg0 transaction:(id)arg1 error:(*id)arg2 updateHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)orderedLogicalSourceIDsForType:(id)arg0 userOrdered:(*BOOL)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)propertyForSyncProvenance;
+(id)sourceIDsWithDataType:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)sourceIDsWithDataType:(id)arg0 unorderedIDs:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif