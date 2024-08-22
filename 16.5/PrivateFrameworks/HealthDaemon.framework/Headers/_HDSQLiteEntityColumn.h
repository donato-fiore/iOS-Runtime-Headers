// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDSQLITEENTITYCOLUMN_H
#define _HDSQLITEENTITYCOLUMN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HDSQLiteEntityForeignKey.h"

@interface _HDSQLiteEntityColumn : NSObject

@property (readonly, copy, nonatomic) NSString *columnType; // ivar: _columnType
@property (readonly, nonatomic) HDSQLiteEntityForeignKey *foreignKey; // ivar: _foreignKey
@property (readonly, nonatomic) unsigned char keyPathType; // ivar: _keyPathType
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)creationSQL;
-(id)description;
-(id)initWithName:(id)arg0 columnType:(id)arg1 keyPathType:(unsigned char)arg2 ;
-(id)initWithName:(id)arg0 columnType:(id)arg1 keyPathType:(unsigned char)arg2 foreignKey:(id)arg3 ;
-(id)initWithName:(id)arg0 columnType:(id)arg1 keyPathType:(unsigned char)arg2 targetEntityClass:(Class)arg3 targetProperty:(id)arg4 deletionAction:(NSInteger)arg5 ;


@end


#endif