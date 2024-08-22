// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3MIGRATIONADDEDCOLUMN_H
#define ML3MIGRATIONADDEDCOLUMN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ML3MigrationAddedColumn : NSObject

@property (readonly, nonatomic) NSString *columnName; // ivar: _columnName
@property (readonly, nonatomic) NSString *foreignColumnName; // ivar: _foreignColumnName
@property (readonly, nonatomic) NSString *foreignTableName; // ivar: _foreignTableName
@property (readonly, nonatomic) NSString *joinColumnName; // ivar: _joinColumnName
@property (readonly, nonatomic) BOOL shouldImportFromForeignTable;


-(id)initWithName:(id)arg0 foreignTable:(id)arg1 foreignColumn:(id)arg2 joinColumn:(id)arg3 ;


@end


#endif