// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMUTABLEDICTIONARY_H
#define NSMUTABLEDICTIONARY_H



#import "NSDictionary.h"

@interface NSMutableDictionary : NSDictionary



+(id)dictionaryWithCapacity:(NSUInteger)arg0 ;
+(id)dictionaryWithSharedKeySet:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)__addObject:(id)arg0 forKey:(id)arg1 ;
-(void)__setObject:(id)arg0 forKey:(id)arg1 ;
-(void)_mutate;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)addObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)addObjects:(id)arg0 forKeys:(id)arg1 ;
-(void)invert;
-(void)removeAllObjects;
-(void)removeEntriesInDictionary:(id)arg0 ;
-(void)removeEntriesPassingTest:(id)arg0 ;
-(void)removeEntriesWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(void)removeKeysForObject:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)replaceObject:(id)arg0 forKey:(id)arg1 ;
-(void)replaceObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)replaceObjects:(id)arg0 forKeys:(id)arg1 ;
-(void)setDictionary:(id)arg0 ;
-(void)setEntriesFromDictionary:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)setObjects:(id)arg0 forKeys:(id)arg1 ;


@end


#endif