// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITEDATABASECOLUMNSCHEMA_H
#define HDSQLITEDATABASECOLUMNSCHEMA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSQLiteDatabaseColumnSchema : NSObject

@property (copy, nonatomic) NSString *defaultValue; // ivar: _defaultValue
@property (nonatomic) NSInteger deletionAction; // ivar: _deletionAction
@property (copy, nonatomic) NSString *foreignKeyTargetColumn; // ivar: _foreignKeyTargetColumn
@property (copy, nonatomic) NSString *foreignKeyTargetTable; // ivar: _foreignKeyTargetTable
@property (nonatomic) BOOL isAutoincrement; // ivar: _isAutoincrement
@property (nonatomic) BOOL isNullable; // ivar: _isNullable
@property (nonatomic) BOOL isPrimaryKey; // ivar: _isPrimaryKey
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif