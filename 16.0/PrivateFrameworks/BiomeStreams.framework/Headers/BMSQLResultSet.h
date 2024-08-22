// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSQLRESULTSET_H
#define BMSQLRESULTSET_H

@class NSArray, NSError, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "BMSQLDatabase.h"

@interface BMSQLResultSet : NSObject {
    os_unfair_lock_s _lock;
    BOOL _finished;
    NSUInteger _cursor;
    NSArray *_columns;
}


@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) BMSQLDatabase *database; // ivar: _database
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, nonatomic) NSDictionary *row; // ivar: _row
@property (readonly, nonatomic) *sqlite3_stmt stmt; // ivar: _stmt


+(id)new;
-(BOOL)next;
-(id)description;
-(id)init;
-(id)initWithQuery:(id)arg0 error:(id)arg1 database:(id)arg2 ;
-(id)initWithStatement:(struct sqlite3_stmt *)arg0 database:(id)arg1 ;
-(void)dealloc;


@end


#endif