// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKFOOTPRINT_H
#define VKFOOTPRINT_H


#import <Foundation/Foundation.h>


@interface VKFootprint : NSObject {
    Box<double, 2> _boundingRect;
    VKFootprintConvexHull_struct _convexHull;
    CGFloat _maxDistance;
    Matrix<double, 3, 1> _furthestGroundPoint;
    CGFloat _minDistance;
    Matrix<double, 3, 1> _nearestGroundPoint;
    Matrix<double, 3, 1> _cornerGroundPoints;
}


@property ? boundingRect;
@property (readonly, nonatomic) CGFloat centerDepth; // ivar: _centerDepth
@property ? convexHull;
@property (readonly, nonatomic) *void cornerGroundPoints;
@property (readonly, nonatomic) int cornerGroundPointsCount; // ivar: _cornerGroundPointsCount
@property ? furthestGroundPoint;
@property (readonly, nonatomic) CGFloat maxDepth; // ivar: _maxDepth
@property (readonly, nonatomic) CGFloat minDepth; // ivar: _minDepth
@property ? nearestGroundPoint;


-(BOOL)containsGroundPoint:(*void)arg0 ;
-(BOOL)rejectsRect:(*void)arg0 ;
-(void)computeFromCamera:(id)arg0 ;


@end


#endif