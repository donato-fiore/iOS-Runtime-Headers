// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REELEMENTQUEUE_H
#define REELEMENTQUEUE_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>

#import "REOrderingArray.h"

@interface REElementQueue : NSObject {
    REOrderingArray *_relevantElements;
    NSMutableSet *_hiddenElements;
}


@property (readonly, nonatomic) NSArray *allElements;
@property (readonly, nonatomic) NSInteger count;
@property (nonatomic) NSInteger maximumRelevantElementsCount; // ivar: _maximumRelevantElementsCount
@property (readonly, nonatomic) NSInteger visibleCount;


-(BOOL)containsElement:(id)arg0 ;
-(NSInteger)indexOfElement:(id)arg0 ;
-(id)elementAtIndex:(NSUInteger)arg0 ;
-(id)initWithMaximumRelevantElementsCount:(NSInteger)arg0 comparators:(id)arg1 ;
-(void)addElement:(id)arg0 hidden:(BOOL)arg1 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeElement:(id)arg0 ;
-(void)updateAllElements;
-(void)updatePositionForElement:(id)arg0 hidden:(BOOL)arg1 ;


@end


#endif