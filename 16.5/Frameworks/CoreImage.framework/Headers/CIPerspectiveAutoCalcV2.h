// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIPERSPECTIVEAUTOCALCV2_H
#define CIPERSPECTIVEAUTOCALCV2_H



#import "CIPerspectiveAutoCalc.h"
#import "CIImage.h"

@interface CIPerspectiveAutoCalcV2 : CIPerspectiveAutoCalc {
    float3x3 K;
    float3x3 invK;
    float3x3 T;
    float3x3 invT;
    CIImage *gradMap;
    NSUInteger gradMapW;
    NSUInteger gradMapH;
    ? gradMapBmp;
    NSUInteger gradMapRb;
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> vLines;
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> hLines;
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> vClusterInliers;
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> hClusterInliers;
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> vClusterOutliers;
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> hClusterOutliers;
    vector<LineCostProxy, std::allocator<LineCostProxy>> vClusterInliersProxies;
    vector<LineCostProxy, std::allocator<LineCostProxy>> hClusterInliersProxies;
    vector<LineCostProxy, std::allocator<LineCostProxy>> vClusterOutliersProxies;
    vector<LineCostProxy, std::allocator<LineCostProxy>> hClusterOutliersProxies;
    ? initialSimplexVerticesXYZ;
    ? initialSimplexVerticesXZ;
    ? initialSimplexVerticesYZ;
    int solutionType;
    Solution solution;
}


@property (readonly) CGFloat unlimitedPitch; // ivar: unlimitedPitch
@property (readonly) CGFloat unlimitedRoll; // ivar: unlimitedRoll
@property (readonly) CGFloat unlimitedYaw; // ivar: unlimitedYaw


-(BOOL)compute;
-(float)evaluateCost;
-(float)evaluateCostXZ;
-(float)evaluateCostYZ;
-(id)initWithContext:(id)arg0 image:(id)arg1 config:(struct ? *)arg2 ;
-(void)clusterLineSegments;
-(void)computeConfidence;
-(void)createGradientMap;
-(void)dealloc;
-(void)extractLineSegments;
-(void)normalizeGradientMap;
-(void)runOptimization;
-(void)setupCostFunction;
-(void)standardizeImage;
-(void)thresholdGradientMap;


@end


#endif