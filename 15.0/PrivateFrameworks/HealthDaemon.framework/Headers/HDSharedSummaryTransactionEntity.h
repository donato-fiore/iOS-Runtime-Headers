// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSHAREDSUMMARYTRANSACTIONENTITY_H
#define HDSHAREDSUMMARYTRANSACTIONENTITY_H

@class NSString;
@protocol HDHealthEntitySchema;


#import "HDHealthEntity.h"

@interface HDSharedSummaryTransactionEntity : HDHealthEntity <HDHealthEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deleteAllEntriesWithDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)enumerateTransactionsWithDatabaseTransaction:(id)arg0 includeNonCommitted:(BOOL)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)insertWithUUID:(id)arg0 sourceDevice:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(id)pruneWithProfile:(id)arg0 nowDate:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)transactionEntityWithUUID:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)committedInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteWithDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)setCommitted:(BOOL)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)unit_testSetCreationDate:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
-(id)creationDateInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)sourceDeviceIdentiferInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)uuidInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif