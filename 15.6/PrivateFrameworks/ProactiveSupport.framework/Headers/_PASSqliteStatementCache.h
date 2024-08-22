// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSQLITESTATEMENTCACHE_H
#define _PASSQLITESTATEMENTCACHE_H


#import <Foundation/Foundation.h>


@interface _PASSqliteStatementCache : NSObject {
    _PASSqliteCacheScore _scores;
    *sqlite3_stmt _cached;
}




-(id)init;


@end


#endif