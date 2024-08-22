// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(BOOL)deleteAllSeriesWithTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteSeriesDataWithIdentifier:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateSeries:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)enumerateWithTransaction:(id)arg0 predicate:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)hasROWID;
+(BOOL)insertOrReplaceEntity:(BOOL)arg0 database:(id)arg1 identifier:(NSInteger)arg2 timestamp:(CGFloat)arg3 location:(id)arg4 error:(*id)arg5 ;
+(NSInteger)protectionClass;
+(id)databaseName;
+(id)databaseTable;
+(id)primaryKeyColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif