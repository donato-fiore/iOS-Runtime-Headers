// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILRUDICTIONARY_H
#define TILRUDICTIONARY_H


#import <Foundation/Foundation.h>

#import "TILRUDictionaryNode.h"

@interface TILRUDictionary : NSObject {
    *__CFDictionary _dictionary;
    NSUInteger _maxCount;
    TILRUDictionaryNode *_head;
    TILRUDictionaryNode *_tail;
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
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_addNodeToFront:(id)arg0 ;
-(void)_moveNodeToFront:(id)arg0 ;
-(void)_removeNode:(id)arg0 ;
-(void)_removeNodeFromLinkedList:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif