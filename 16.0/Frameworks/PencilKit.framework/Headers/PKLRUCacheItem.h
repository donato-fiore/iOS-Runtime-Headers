// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLRUCACHEITEM_H
#define PKLRUCACHEITEM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKLRUCacheItem.h"

@interface PKLRUCacheItem : NSObject {
    id<NSCopying> *_key;
    PKLRUCacheItem *_next;
    PKLRUCacheItem *_prev;
    id *_object;
    NSUInteger _cost;
}






@end


#endif