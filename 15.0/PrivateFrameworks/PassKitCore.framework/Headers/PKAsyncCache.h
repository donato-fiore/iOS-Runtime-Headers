// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKASYNCCACHE_H
#define PKASYNCCACHE_H

@class NSCache, NSMapTable, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PKAsyncCache : NSObject {
    os_unfair_lock_s _lock;
    NSCache *_itemByKey;
    NSMapTable *_weakItemByKey;
    NSMutableDictionary *_outstandingRetrievals;
}




-(id)init;
-(id)initWithCache:(id)arg0 ;
// -(void)_executeRetrievalBlock:(id)arg0 forKey:(unk)arg1  ;
// -(void)retrieveItemForKey:(id)arg0 synchronous:(BOOL)arg1 retrievalBlock:(id)arg2 deliveryBlock:(unk)arg3  ;


@end


#endif