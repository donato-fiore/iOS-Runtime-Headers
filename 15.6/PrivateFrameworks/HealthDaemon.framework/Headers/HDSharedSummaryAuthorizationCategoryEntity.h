// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSHAREDSUMMARYAUTHORIZATIONCATEGORYENTITY_H
#define HDSHAREDSUMMARYAUTHORIZATIONCATEGORYENTITY_H



#import "HDHealthEntity.h"

@interface HDSharedSummaryAuthorizationCategoryEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)authorizationCategoriesForSummaryID:(NSInteger)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertWithSummaryID:(NSInteger)arg0 authorizationCategories:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif