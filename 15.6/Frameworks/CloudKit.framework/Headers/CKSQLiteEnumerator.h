// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSQLITEENUMERATOR_H
#define CKSQLITEENUMERATOR_H

@class NSEnumerator, NSArray, NSString, NSMutableArray;


#import "CKSQLite.h"

@interface CKSQLiteEnumerator : NSEnumerator {
    CKSQLite *_database;
    NSArray *_columns;
    NSString *_tableName;
    NSString *_whereSQL;
    NSArray *_bindings;
    NSArray *_orderBy;
    NSMutableArray *_objects;
    NSUInteger _index;
    NSUInteger _fetchOffset;
}


@property (copy, nonatomic) id *objectTranslator; // ivar: _objectTranslator


-(id)initWithDatabase:(id)arg0 columns:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 ;
-(id)nextObject;


@end


#endif