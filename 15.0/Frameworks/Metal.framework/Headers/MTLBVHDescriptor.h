// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBVHDESCRIPTOR_H
#define MTLBVHDESCRIPTOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTLBVHDescriptor : NSObject

@property (nonatomic) NSUInteger branchingFactor; // ivar: _branchingFactor
@property (retain, nonatomic) NSArray *geometryDescriptors; // ivar: _geometryDescriptors
@property (nonatomic) NSUInteger maxDepth; // ivar: _maxDepth
@property (nonatomic) NSUInteger maxPrimitivesPerLeaf; // ivar: _maxPrimitivesPerLeaf
@property (nonatomic) float minOverlap; // ivar: _minOverlap
@property (nonatomic) NSUInteger minPrimitivesPerLeaf; // ivar: _minPrimitivesPerLeaf
@property (nonatomic) BOOL motion; // ivar: _motion
@property (nonatomic) float motionTraversalCost; // ivar: _motionTraversalCost
@property (nonatomic) float primitiveCost; // ivar: _primitiveCost
@property (nonatomic) NSUInteger primitiveKeyframeCount; // ivar: _primitiveKeyframeCount
@property (nonatomic) float primitiveMotionEndTime; // ivar: _primitiveMotionEndTime
@property (nonatomic) float primitiveMotionStartTime; // ivar: _primitiveMotionStartTime
@property (nonatomic) float splitCapacity; // ivar: _splitCapacity
@property (nonatomic) NSUInteger splitHeuristic; // ivar: _splitHeuristic
@property (nonatomic) float traversalCost; // ivar: _traversalCost


-(BOOL)primitiveMotion;
-(id)init;
-(void)dealloc;


@end


#endif