// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLANEDIRECTIONCOLLISIONCALCULATOR_H
#define MKLANEDIRECTIONCOLLISIONCALCULATOR_H

@class NSMutableDictionary, NSMutableArray, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MKLaneDirectionCollisionCalculator : NSObject {
    NSMutableDictionary *_collisionsForDirection;
    NSMutableArray *_directions;
    NSNumber *_directionWithMostCollisions;
}


@property (readonly, nonatomic) NSArray *directions;
@property (readonly, nonatomic) BOOL hasCollisions; // ivar: _hasCollisions
@property (readonly, nonatomic) BOOL hasDirectionWithMaxCollisions;


-(id)initWithDirections:(id)arg0 ;
-(void)_recalculateCollisions;
-(void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg0 ;
-(void)removeNextDirectionWithCollisions;


@end


#endif