// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSHAREDSUMMARYAUTHORIZATIONIDENTIFIERENTITY_H
#define HDSHAREDSUMMARYAUTHORIZATIONIDENTIFIERENTITY_H



#import "HDHealthEntity.h"

@interface HDSharedSummaryAuthorizationIdentifierEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)authorizationIdentifiersForSummaryID:(NSInteger)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertWithSummaryID:(NSInteger)arg0 authorizationIdentifiers:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif