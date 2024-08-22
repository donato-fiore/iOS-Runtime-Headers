// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDLOCATIONSERIESDATAENTITY_H
#define HDLOCATIONSERIESDATAENTITY_H

@class NSString;
@protocol HDHealthEntitySchema;


#import "HDSQLiteSchemaEntity.h"

@interface HDLocationSeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_enumerateSeriesForValidation:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)deleteAllSeriesWithDatabase:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteSeriesDataWithIdentifier:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteSeriesDataWithIdentifier:(NSInteger)arg0 timestamps:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateSeries:(NSInteger)arg0 database:(id)arg1 startDate:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
+(BOOL)enumerateSeries:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)enumerateWithTransaction:(id)arg0 predicate:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)getRangeAndCountForSeriesIdentifier:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)hasROWID;
+(BOOL)insertOrReplaceEntity:(BOOL)arg0 database:(id)arg1 identifier:(NSInteger)arg2 timestamp:(CGFloat)arg3 location:(id)arg4 error:(*id)arg5 ;
+(BOOL)unitTesting_deleteSeriesDataWithIdentifier:(NSInteger)arg0 timestamp:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseName;
+(id)databaseTable;
+(id)foreignKeys;
+(id)primaryKeyColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif