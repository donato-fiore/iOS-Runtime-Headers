// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSQLITESTATEMENTCACHE_H
#define _PASSQLITESTATEMENTCACHE_H


#import <Foundation/Foundation.h>


@interface _PASSqliteStatementCache : NSObject {
    _PASSqliteCacheScore _scores;
    *sqlite3_stmt _cached;
    *void _associatedObjects;
}




-(id)init;


@end


#endif