// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLEARRAY_H
#define HMMUTABLEARRAY_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HMMutableArray : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSArray *array;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy, nonatomic) NSMutableArray *internal; // ivar: _internal


+(id)arrayWithArray:(id)arg0 ;
-(BOOL)addObjectIfNotPresent:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)filteredArrayUsingPredicate:(id)arg0 ;
-(id)firstItemWithCharacteristicType:(id)arg0 ;
-(id)firstItemWithInstanceID:(id)arg0 ;
-(id)firstItemWithName:(id)arg0 ;
-(id)firstItemWithUUID:(id)arg0 ;
-(id)firstItemWithUniqueIdentifier:(id)arg0 ;
-(id)firstItemWithValue:(id)arg0 forKey:(id)arg1 ;
-(id)initWithArray:(id)arg0 ;
-(id)itemsWithValue:(id)arg0 forKey:(id)arg1 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)replaceObject:(id)arg0 ;
-(void)setIfDifferent:(id)arg0 ;


@end


#endif