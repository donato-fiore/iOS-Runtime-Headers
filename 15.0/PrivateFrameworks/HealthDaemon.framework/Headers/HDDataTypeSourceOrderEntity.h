// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATATYPESOURCEORDERENTITY_H
#define HDDATATYPESOURCEORDERENTITY_H



#import "HDHealthEntity.h"

@interface HDDataTypeSourceOrderEntity : HDHealthEntity



+(BOOL)enumerateOrderedSourceIDsForType:(id)arg0 profile:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)enumerateOrderedSourceIDsForType:(id)arg0 profile:(id)arg1 transaction:(id)arg2 error:(*id)arg3 block:(id)arg4 ;
+(BOOL)saveOrderedSourceIDs:(id)arg0 type:(id)arg1 userOrdered:(BOOL)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateOrderedSourcesForType:(id)arg0 profile:(id)arg1 error:(*id)arg2 updateHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)orderedSourceIDsForType:(id)arg0 userOrdered:(*BOOL)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)propertyForSyncProvenance;
+(id)tableAliases;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif