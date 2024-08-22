// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSQLITESCHEMAENTITY_H
#define HDSQLITESCHEMAENTITY_H

@class NSString;
@protocol HDSQLiteEntitySchema;

#import <Foundation/Foundation.h>


@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasColumnWithName:(id)arg0 ;
+(BOOL)hasROWID;
+(BOOL)isTemporary;
+(Class)entityClassForEnumeration;
+(Class)entityForProperty:(id)arg0 ;
+(id)allDatabaseColumnNames;
+(id)checkConstraints;
+(id)createTableSQL;
+(id)databaseName;
+(id)databaseTable;
+(id)deleteStatementWithProperty:(id)arg0 database:(id)arg1 ;
+(id)disambiguatedDatabaseTable;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)foreignKeys;
+(id)indices;
+(id)insertSQLForProperties:(id)arg0 shouldReplace:(BOOL)arg1 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)orderingTermForSortDescriptor:(id)arg0 ;
+(id)primaryKeyColumns;
+(id)privateSubEntities;
+(id)tableAliases;
+(id)triggers;
+(id)uniquedColumns;
+(id)updateSQLForProperties:(id)arg0 predicate:(id)arg1 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)enumerateColumnsWithBlock:(id)arg0 ;


@end


#endif