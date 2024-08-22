// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALHIGHLIGHTCACHE_H
#define PPSOCIALHIGHLIGHTCACHE_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"

@interface PPSocialHighlightCache : NSObject {
    _PASLock *_lock;
    PPSQLDatabase *_db;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;


@end


#endif