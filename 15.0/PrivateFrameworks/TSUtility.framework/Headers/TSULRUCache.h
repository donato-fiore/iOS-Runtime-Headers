// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSULRUCACHE_H
#define TSULRUCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSUNoCopyDictionary.h"

@interface TSULRUCache : NSObject {
    TSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    id *mCallbackTarget;
    SEL mCallback;
}


@property (readonly, nonatomic) NSUInteger maxSize; // ivar: mMax


-(id)allKeys;
-(id)allValues;
-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)clearEvictionCallbackTarget;
-(void)dealloc;
-(void)p_removeOldestObject;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setEvictionCallbackTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif