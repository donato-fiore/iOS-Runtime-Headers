// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVLRUDICTIONARY_H
#define MSVLRUDICTIONARY_H

@class NSMutableDictionary;
@protocol NSCopying, MSVLRUDictionaryDelegate;

#import <Foundation/Foundation.h>

#import "MSVLRUDictionaryNode.h"

@interface MSVLRUDictionary : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger count;
@property (weak, nonatomic) NSObject<MSVLRUDictionaryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) MSVLRUDictionaryNode *head; // ivar: _head
@property (nonatomic) NSInteger maximumCapacity; // ivar: _maximumCapacity
@property (retain, nonatomic) MSVLRUDictionaryNode *tail; // ivar: _tail
@property (nonatomic) NSInteger transactionCount; // ivar: _transactionCount


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allKeys;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMaximumCapacity:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)peekObjectForKey:(id)arg0 ;
-(void)_addNodeToFront:(id)arg0 ;
-(void)_moveNodeToFront:(id)arg0 ;
-(void)_removeNode:(id)arg0 ;
-(void)_removeNodeFromLinkedList:(id)arg0 ;
-(void)_shrinkToCapacity;
-(void)beginTransaction;
-(void)endTransaction;
-(void)performTransaction:(id)arg0 ;
-(void)pokeKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif