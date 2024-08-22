// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APORDEREDMUTABLEDICTIONARY_H
#define APORDEREDMUTABLEDICTIONARY_H

@class NSMutableDictionary, NSMutableOrderedSet, NSArray;

#import <Foundation/Foundation.h>


@interface APOrderedMutableDictionary : NSObject {
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_mutableOrderedSet;
}


@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) id *firstKey;
@property (readonly, nonatomic) id *firstObject;
@property (readonly, nonatomic) id *lastKey;
@property (readonly, nonatomic) id *lastObject;


+(id)dictionary;
+(id)dictionaryWithCapacity:(NSUInteger)arg0 ;
-(BOOL)containsKey:(id)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)enumerateKeysUsingBlock:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif