// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATABASEVALUECACHETRANSACTIONSTORAGE_H
#define HDDATABASEVALUECACHETRANSACTIONSTORAGE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HDDatabaseValueCacheTransactionStorage : NSObject {
    BOOL _didRemoveAllObjects;
    NSMutableDictionary *_cache;
    NSInteger _cacheScope;
}




-(id)init;


@end


#endif