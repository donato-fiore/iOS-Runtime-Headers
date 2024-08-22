// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASEFOREIGNKEYCONSTRAINT_H
#define ML3DATABASEFOREIGNKEYCONSTRAINT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ML3DatabaseTable.h"

@interface ML3DatabaseForeignKeyConstraint : NSObject

@property (readonly, nonatomic) NSArray *foreignColumns; // ivar: _foreignColumns
@property (readonly, nonatomic) ML3DatabaseTable *foreignTable; // ivar: _foreignTable
@property (readonly, nonatomic) NSArray *localColumns; // ivar: _localColumns


-(id)_foreignKeyClauseSQL;
-(id)initWithForeignTable:(id)arg0 localColumns:(id)arg1 foreignColumns:(id)arg2 ;


@end


#endif