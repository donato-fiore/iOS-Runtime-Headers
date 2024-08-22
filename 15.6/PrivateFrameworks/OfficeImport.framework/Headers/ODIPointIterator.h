// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODIPOINTITERATOR_H
#define ODIPOINTITERATOR_H


#import <Foundation/Foundation.h>


@interface ODIPointIterator : NSObject



+(BOOL)addPoint:(id)arg0 state:(struct ODIPointIteratorState *)arg1 ;
+(BOOL)isDoneForState:(struct ODIPointIteratorState *)arg0 ;
+(BOOL)isPoint:(id)arg0 ofType:(int)arg1 ;
+(id)pointsForSpecification:(id)arg0 startingPoint:(id)arg1 isLast:(BOOL)arg2 ;
+(id)processAttributes:(id)arg0 startingPoint:(id)arg1 isLast:(BOOL)arg2 ;
+(void)processChildAxisFromPoint:(id)arg0 state:(struct ODIPointIteratorState *)arg1 ;
+(void)processFollowingSiblingAxisFromPoint:(id)arg0 state:(struct ODIPointIteratorState *)arg1 ;
+(void)processSelfAxisFromPoint:(id)arg0 state:(struct ODIPointIteratorState *)arg1 ;


@end


#endif