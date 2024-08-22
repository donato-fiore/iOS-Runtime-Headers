// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDPERSISTENCEFOREIGNKEYPLACEHOLDER_H
#define EDPERSISTENCEFOREIGNKEYPLACEHOLDER_H

@class EFSQLColumnSchema, NSString;

#import <Foundation/Foundation.h>


@interface EDPersistenceForeignKeyPlaceholder : NSObject

@property (readonly, nonatomic) EFSQLColumnSchema *column; // ivar: _column
@property (readonly, nonatomic) NSUInteger deleteAction; // ivar: _deleteAction
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName
@property (readonly, nonatomic) NSUInteger updateAction; // ivar: _updateAction


-(BOOL)resolveToStringForTableNames:(id)arg0 ;
-(BOOL)resolveWithSchema:(id)arg0 ;
-(id)description;
-(id)initWithColumn:(id)arg0 tableName:(id)arg1 onDelete:(NSUInteger)arg2 onUpdate:(NSUInteger)arg3 ;


@end


#endif