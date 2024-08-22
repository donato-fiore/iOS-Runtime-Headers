// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMULTIDICT_H
#define IMMULTIDICT_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMMultiDict : NSObject

@property (readonly, nonatomic) NSArray *allKeys;
@property (nonatomic) NSUInteger count; // ivar: _count
@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary


-(NSUInteger)countForKey:(id)arg0 ;
-(id)dequeueObjectForKey:(id)arg0 ;
-(id)description;
-(id)headObjectForKey:(id)arg0 ;
-(id)init;
-(id)objectsForKey:(id)arg0 ;
-(id)peekObjectForKey:(id)arg0 ;
-(id)popObjectForKey:(id)arg0 ;
-(void)enqueueObject:(id)arg0 forKey:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)pushObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg0 ;


@end


#endif