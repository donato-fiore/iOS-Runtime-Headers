// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRUDICTIONARY_H
#define CPLRUDICTIONARY_H


#import <Foundation/Foundation.h>

#import "CPLRUDictionaryNode.h"

@interface CPLRUDictionary : NSObject {
    *__CFDictionary _dictionary;
    NSUInteger _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}




+(id)dictionaryWithMaximumCapacity:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(NSUInteger)linkedListCount;
-(id)allKeys;
-(id)allKeysInLRUOrder;
-(id)allValuesInLRUOrder;
-(id)description;
-(id)initWithMaximumCapacity:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyWithoutAffectingLRU:(id)arg0 ;
-(void)_addNodeToFront:(id)arg0 ;
-(void)_moveNodeToFront:(id)arg0 ;
-(void)_removeNode:(id)arg0 ;
-(void)_removeNodeFromLinkedList:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif