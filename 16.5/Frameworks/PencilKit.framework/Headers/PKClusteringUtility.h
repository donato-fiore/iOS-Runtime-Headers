// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCLUSTERINGUTILITY_H
#define PKCLUSTERINGUTILITY_H


#import <Foundation/Foundation.h>


@interface PKClusteringUtility : NSObject



+(CGFloat)arrayAverage:(id)arg0 ;
+(CGFloat)estimatedWordDistanceForStrokes:(id)arg0 lineHeight:(CGFloat)arg1 ;
+(id)_clusteredStrokesWithInitialStrokes:(id)arg0 selectionType:(NSInteger)arg1 visibleStrokes:(id)arg2 approximateLineHeight:(CGFloat)arg3 approximateLineCenter:(CGFloat)arg4 ;
+(id)_geometricBasedStrokeClusteringFromPoint:(struct CGPoint )arg0 visibleStrokes:(id)arg1 selectionType:(NSInteger)arg2 inputType:(NSInteger)arg3 ;
+(id)horizontalDistanceBetweenStrokes:(id)arg0 lineHeight:(CGFloat)arg1 ;
+(id)kMeansCluster:(int)arg0 values:(id)arg1 clusterError:(CGFloat)arg2 maxIterations:(int)arg3 ;
+(struct CGRect )constrainRect:(struct CGRect )arg0 ;
+(void)_fetchIntersectedStrokesForGeometricBasedStrokeClusteringBetweenPoint:(struct CGPoint )arg0 otherPoint:(struct CGPoint )arg1 visibleStrokes:(id)arg2 completion:(id)arg3 ;


@end


#endif