// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSHAREDSUMMARYOBJECTTYPEENTITY_H
#define HDSHAREDSUMMARYOBJECTTYPEENTITY_H



#import "HDHealthEntity.h"

@interface HDSharedSummaryObjectTypeEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertWithSummaryID:(NSInteger)arg0 objectTypes:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(id)objectTypesForSummaryID:(NSInteger)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif