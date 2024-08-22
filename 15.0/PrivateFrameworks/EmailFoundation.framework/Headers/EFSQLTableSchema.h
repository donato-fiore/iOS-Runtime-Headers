// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLTABLESCHEMA_H
#define EFSQLTABLESCHEMA_H

@class NSMutableArray, NSMutableDictionary, NSHashTable, NSSet, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "EFSQLColumnSchema.h"

@interface EFSQLTableSchema : NSObject {
    NSMutableArray *_columns;
    NSMutableDictionary *_columnsByName;
    NSMutableArray *_uniquenessConstraints;
    NSMutableArray *_checkConstraints;
    NSHashTable *_foreignKeyReferences;
    NSHashTable *_associatedColumns;
    NSMutableArray *_indexes;
}


@property (readonly, copy, nonatomic) NSSet *associatedColumns;
@property (readonly, copy, nonatomic) NSArray *checkConstraints;
@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly, copy, nonatomic) NSSet *foreignKeyReferences;
@property (readonly, copy, nonatomic) NSArray *indexes;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *primaryKeyColumns; // ivar: _primaryKeyColumns
@property (readonly, nonatomic) NSUInteger primaryKeyConflictResolution; // ivar: _primaryKeyConflictResolution
@property (readonly, nonatomic) EFSQLColumnSchema *rowIDColumn;
@property (readonly, copy, nonatomic) NSString *rowIDColumnName; // ivar: _rowIDColumnName
@property (readonly, copy, nonatomic) NSArray *uniqueColumns;


-(id)_columnsForColumnNames:(id)arg0 ;
-(id)columnForName:(id)arg0 ;
-(id)definitionWithDatabaseName:(id)arg0 ;
-(id)definitionWithDatabaseName:(id)arg0 includeIndexes:(BOOL)arg1 ;
-(id)description;
-(id)fullNameWithDatabaseName:(id)arg0 ;
-(id)indexDefinitionsWithDatabaseName:(id)arg0 ;
-(id)initWithName:(id)arg0 columns:(id)arg1 primaryKeyColumns:(id)arg2 ;
-(id)initWithName:(id)arg0 columns:(id)arg1 primaryKeyColumns:(id)arg2 conflictResolution:(NSUInteger)arg3 ;
-(id)initWithName:(id)arg0 rowIDType:(NSUInteger)arg1 columns:(id)arg2 ;
-(id)initWithName:(id)arg0 rowIDType:(NSUInteger)arg1 rowIDAlias:(id)arg2 columns:(id)arg3 ;
-(id)initWithName:(id)arg0 rowIDType:(NSUInteger)arg1 rowIDAlias:(id)arg2 columns:(id)arg3 primaryKeyColumns:(id)arg4 conflictResolution:(NSUInteger)arg5 ;
-(void)addAssociatedColumn:(id)arg0 ;
-(void)addCheckConstraintForExpression:(id)arg0 ;
-(void)addColumn:(id)arg0 ;
-(void)addForeignKeyReference:(id)arg0 ;
-(void)addIndex:(id)arg0 ;
-(void)addIndexForColumns:(id)arg0 ;
-(void)addUniquenessConstraintForColumns:(id)arg0 conflictResolution:(NSUInteger)arg1 ;
-(void)removeColumn:(id)arg0 ;


@end


#endif