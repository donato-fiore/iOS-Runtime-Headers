// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFMUTABLEINDEXMAP_H
#define EFMUTABLEINDEXMAP_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface EFMutableIndexMap : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSMutableDictionary *keyToTuple; // ivar: _keyToTuple
@property (retain, nonatomic) NSMutableArray *tuples; // ivar: _tuples


-(BOOL)hasKeyAtIndex:(NSUInteger)arg0 ;
-(BOOL)removeKeyAtIndex:(NSUInteger)arg0 ;
-(NSInteger)keyAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfKey:(NSInteger)arg0 ;
-(id)_tupleForKey:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)objectForInt64Key:(NSInteger)arg0 ;
-(void)addKey:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addKey:(NSInteger)arg0 atIndex:(NSUInteger)arg1 object:(id)arg2 ;
-(void)enumerateKeysAndIndexesUsingBlock:(id)arg0 ;
-(void)enumerateKeysIndexesAndObjectsUsingBlock:(id)arg0 ;
-(void)removeAllKeys;
-(void)setObject:(id)arg0 forKey:(NSInteger)arg1 ;
-(void)shiftKeysStartingAtIndex:(NSUInteger)arg0 by:(NSInteger)arg1 ;


@end


#endif