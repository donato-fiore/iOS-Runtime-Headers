// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSLRUCACHE_H
#define AMSLRUCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSDoubleLinkedList.h"

@interface AMSLRUCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSMutableDictionary *backingDictionary; // ivar: _backingDictionary
@property (retain, nonatomic) AMSDoubleLinkedList *backingList; // ivar: _backingList
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger maxSize; // ivar: _maxSize


-(id)allObjectsAndKeys;
-(id)description;
-(id)init;
-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 withCreationBlock:(id)arg1 ;
-(void)_addObject:(id)arg0 forKey:(id)arg1 ;
-(void)_removeObjectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif