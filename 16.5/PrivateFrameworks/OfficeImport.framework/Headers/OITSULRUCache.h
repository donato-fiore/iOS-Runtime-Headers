// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSULRUCACHE_H
#define OITSULRUCACHE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "OITSUNoCopyDictionary.h"

@interface OITSULRUCache : NSObject {
    OITSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    id *mCallbackTarget;
    SEL mCallback;
}


@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSArray *allValues;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger maxSize; // ivar: mMax


-(id)description;
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