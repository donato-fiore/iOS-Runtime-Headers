// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSMUTABLEORDEREDSET_H
#define WBSMUTABLEORDEREDSET_H

@class NSMutableOrderedSet, NSArray;

#import <Foundation/Foundation.h>


@interface WBSMutableOrderedSet : NSObject {
    NSMutableOrderedSet *_mutableOrderedSet;
    NSUInteger _maximumCount;
}


@property (readonly, nonatomic) NSArray *array;


-(BOOL)containsObject:(id)arg0 ;
-(id)init;
-(id)initWithMaximumCount:(NSUInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexWithoutAffectingRecency:(NSUInteger)arg0 ;
-(void)_moveObjectAtIndexToLast:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)markObjectAsRecentlyUsed:(id)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;


@end


#endif