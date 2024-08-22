// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSQLSTORE_H
#define BMSQLSTORE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "_bmFMDatabase.h"

@interface BMSQLStore : NSObject {
    _bmFMDatabase *_db;
}


@property (readonly, nonatomic) _bmFMDatabase *db;
@property (readonly, nonatomic) BOOL dbIsReady; // ivar: _dbIsReady
@property (readonly, nonatomic) os_unfair_lock_s dbLock; // ivar: _dbLock
@property (readonly, nonatomic) NSURL *dbURL; // ivar: _dbURL
@property (readonly, nonatomic) *void sqliteHandle;


+(id)migrations;
-(id)initWithFMDBHandle:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif