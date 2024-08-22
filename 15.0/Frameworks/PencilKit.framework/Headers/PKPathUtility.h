// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPATHUTILITY_H
#define PKPATHUTILITY_H


#import <Foundation/Foundation.h>


@interface PKPathUtility : NSObject



+(?)centripetalCatmullRomPointsFromConvexHull:(?)arg0 alphagranularity;
+(?)smoothedHullForPoints:(?)arg0 alpha:(?)arg1 granularity:(?)arg2 minAngleFactor:(?)arg3 maxLengthThresholdedgeRemovalConstant;
+(BOOL)edge:(struct Edge )arg0 intersectsEdge:(struct Edge )arg1 ;
+(BOOL)newEdgeWithPoint:(struct CGPoint )arg0 betweenEdge:(struct Edge )arg1 intersectsOtherEdgesInHull:(*void)arg2 ;
+(BOOL)vector:(*void)arg0 containsEdge:(struct Edge )arg1 ;
+(BOOL)vector:(*void)arg0 containsPoint:(struct CGPoint )arg1 ;
+(CGFloat)averageDistanceForEdge:(struct Edge )arg0 withPoints:(*void)arg1 ;
+(id)bezierPathFromPoints:(*void)arg0 ;
+(struct CGPoint )pointWithMinAngleForEdge:(struct Edge )arg0 fromPoints:(*void)arg1 minAngle:(*CGFloat)arg2 ;
+(struct Edge )longestEdgeInHull:(*void)arg0 atIndex:(*int)arg1 visitedEdges:(*void)arg2 ;
+(void)convexHull:(*void)arg0 forPoints:(*void)arg1 ;
+(void)openConvexHullToConcave:(*void)arg0 points:(*void)arg1 minAngleFactor:(CGFloat)arg2 maxLengthThreshold:(CGFloat)arg3 edgeRemovalConstant:(CGFloat)arg4 ;
+(void)smoothedHullForPoints:(*void)arg0 completion:(id)arg1 ;


@end


#endif