// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSMUTABLEORDEREDDICTIONARY_H
#define BSMUTABLEORDEREDDICTIONARY_H



#import "BSOrderedDictionary.h"
#import "BSOrderedDictionaryKeyStrategy.h"

@interface BSMutableOrderedDictionary : BSOrderedDictionary

@property (retain, nonatomic) BSOrderedDictionaryKeyStrategy *keyOrderingStrategy;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 keyOrderingStrategy:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 keyOrderingStrategy:(id)arg1 ;
-(id)initWithKeyOrderingStrategy:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)addEntriesFromOrderedDictionary:(id)arg0 ;
-(void)addObject:(id)arg0 toCollectionClass:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 fromCollectionForKey:(id)arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif