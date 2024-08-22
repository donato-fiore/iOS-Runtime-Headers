// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLINDEXSCHEMA_H
#define EFSQLINDEXSCHEMA_H

@class NSArray, NSString;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLIndexSchema : NSObject

@property (readonly, copy, nonatomic) NSArray *indexedColumns; // ivar: _indexedColumns
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName
@property (readonly, nonatomic) BOOL unique; // ivar: _unique
@property (readonly, nonatomic) NSObject<EFSQLValueExpressable> *where; // ivar: _where


-(id)definitionWithDatabaseName:(id)arg0 ;
-(id)initWithName:(id)arg0 tableName:(id)arg1 indexedColumns:(id)arg2 where:(id)arg3 unique:(BOOL)arg4 ;
-(id)initWithTableName:(id)arg0 columnNames:(id)arg1 ;
-(id)initWithTableName:(id)arg0 columnNames:(id)arg1 where:(id)arg2 unique:(BOOL)arg3 ;
-(id)initWithTableName:(id)arg0 indexedColumns:(id)arg1 ;
-(id)initWithTableName:(id)arg0 indexedColumns:(id)arg1 where:(id)arg2 unique:(BOOL)arg3 ;


@end


#endif