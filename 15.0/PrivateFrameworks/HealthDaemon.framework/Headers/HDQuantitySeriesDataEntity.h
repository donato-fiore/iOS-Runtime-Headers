// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYSERIESDATAENTITY_H
#define HDQUANTITYSERIESDATAENTITY_H

@class NSString;
@protocol HDHealthEntitySchema;


#import "HDSQLiteSchemaEntity.h"

@interface HDQuantitySeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deleteAllSeriesWithTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteSeriesDataWithIdentifier:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteSeriesDataWithIdentifier:(NSInteger)arg0 timestamps:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateSeries:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)enumerateWithTransaction:(id)arg0 predicate:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)hasROWID;
+(BOOL)insertOrReplaceEntity:(BOOL)arg0 database:(id)arg1 value:(CGFloat)arg2 duration:(CGFloat)arg3 timestamp:(CGFloat)arg4 identifier:(NSInteger)arg5 error:(*id)arg6 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)primaryKeyColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif