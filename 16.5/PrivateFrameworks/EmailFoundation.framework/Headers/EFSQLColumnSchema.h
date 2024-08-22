// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLCOLUMNSCHEMA_H
#define EFSQLCOLUMNSCHEMA_H

@class NSString;

#import <Foundation/Foundation.h>

#import "EFSQLTableSchema.h"
#import "EFSQLColumnExpression.h"

@interface EFSQLColumnSchema : NSObject {
    EFSQLTableSchema *_table;
}


@property (weak, nonatomic) EFSQLTableSchema *associatedTable; // ivar: _associatedTable
@property (readonly, nonatomic) NSUInteger collation; // ivar: _collation
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpression;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpressionWithFullName;
@property (readonly, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (readonly, copy, nonatomic) NSString *definition;
@property (nonatomic) NSUInteger foreignKeyDeleteAction; // ivar: _foreignKeyDeleteAction
@property (weak, nonatomic) EFSQLTableSchema *foreignKeyTarget; // ivar: _foreignKeyTarget
@property (copy, nonatomic) NSString *foreignKeyTargetString; // ivar: _foreignKeyTargetString
@property (nonatomic) NSUInteger foreignKeyUpdateAction; // ivar: _foreignKeyUpdateAction
@property (readonly, nonatomic) BOOL isAutoincrementing; // ivar: _isAutoincrementing
@property (readonly, nonatomic) BOOL isPrimaryKey; // ivar: _isPrimaryKey
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL nullable; // ivar: _nullable
@property (readonly, weak, nonatomic) EFSQLTableSchema *table;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)columnTypeForString:(id)arg0 ;
+(id)blobColumnWithName:(id)arg0 nullable:(BOOL)arg1 ;
+(id)integerColumnWithName:(id)arg0 nullable:(BOOL)arg1 ;
+(id)integerColumnWithName:(id)arg0 nullable:(BOOL)arg1 defaultValue:(id)arg2 ;
+(id)realColumnWithName:(id)arg0 nullable:(BOOL)arg1 ;
+(id)realColumnWithName:(id)arg0 nullable:(BOOL)arg1 defaultValue:(id)arg2 ;
+(id)stringForColumnType:(NSUInteger)arg0 ;
+(id)textColumnWithName:(id)arg0 collation:(NSUInteger)arg1 nullable:(BOOL)arg2 ;
+(id)textColumnWithName:(id)arg0 collation:(NSUInteger)arg1 nullable:(BOOL)arg2 defaultValue:(id)arg3 ;
-(id)_stringForForeignKeyAction:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)fullNameWithDatabaseName:(id)arg0 ;
-(id)initRowIDWithAlias:(id)arg0 isAutoincrementing:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 isPrimaryKey:(BOOL)arg1 isAutoincrementing:(BOOL)arg2 type:(NSUInteger)arg3 collation:(NSUInteger)arg4 nullable:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 collation:(NSUInteger)arg2 nullable:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)associateWithTable:(id)arg0 ;
-(void)setAsForeignKeyForString:(id)arg0 onDelete:(NSUInteger)arg1 onUpdate:(NSUInteger)arg2 ;
-(void)setAsForeignKeyForTable:(id)arg0 onDelete:(NSUInteger)arg1 onUpdate:(NSUInteger)arg2 ;


@end


#endif