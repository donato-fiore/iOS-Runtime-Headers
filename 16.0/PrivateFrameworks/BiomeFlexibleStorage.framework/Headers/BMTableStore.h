// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMTABLESTORE_H
#define BMTABLESTORE_H

@class NSArray, NSURL, NSString;

#import <Foundation/Foundation.h>

#import "_bmFMDatabase.h"

@interface BMTableStore : NSObject

@property (readonly, nonatomic) NSArray *classArray; // ivar: _classArray
@property (readonly, nonatomic) _bmFMDatabase *db; // ivar: _db
@property (readonly, nonatomic) NSURL *dbURL; // ivar: _dbURL
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSString *sqlReplace; // ivar: _sqlReplace
@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName


-(BOOL)addTable:(id)arg0 named:(id)arg1 error:(*id)arg2 ;
-(BOOL)closeDB;
-(BOOL)openDB;
-(BOOL)setupClassArray:(id)arg0 table:(id)arg1 named:(id)arg2 error:(*id)arg3 ;
-(BOOL)upsertRows:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)selectTableNamed:(id)arg0 error:(*id)arg1 ;


@end


#endif