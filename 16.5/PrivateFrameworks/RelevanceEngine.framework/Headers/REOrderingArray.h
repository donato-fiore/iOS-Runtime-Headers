// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REORDERINGARRAY_H
#define REORDERINGARRAY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REDependencyGraph.h"

@interface REOrderingArray : NSObject {
    NSArray *_orderedObjects;
    REDependencyGraph *_dependencyGraph;
    BOOL _needsUpdate;
    NSUInteger _batchCount;
}


@property (readonly, nonatomic) NSArray *comparators; // ivar: _comparators
@property (readonly, nonatomic) NSUInteger count;


-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)initWithComparators:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)_createDependenciesForObject:(id)arg0 ;
-(void)_performOrMarkUpdate;
-(void)_updateContentOrder;
-(void)addObject:(id)arg0 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)sortAllObjects;
-(void)updateObject:(id)arg0 ;


@end


#endif