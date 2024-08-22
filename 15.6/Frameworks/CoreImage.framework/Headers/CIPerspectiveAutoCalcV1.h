// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIPERSPECTIVEAUTOCALCV1_H
#define CIPERSPECTIVEAUTOCALCV1_H



#import "CIPerspectiveAutoCalc.h"
#import "CIImage.h"

@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc {
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
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> vLineCluster;
    vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> hLineCluster;
    BOOL vGuidesValid;
    BOOL hGuidesValid;
    float vGuidesAOE;
    float hGuidesAOE;
    ? vGuide0;
    ? vGuide1;
    ? hGuide0;
    ? hGuide1;
    PseudoRand pseudoRando;
    float rX;
    float rY;
    float rZ;
}


@property CGFloat minimumPitchCorrectionAreaCoverage; // ivar: minimumPitchCorrectionAreaCoverage
@property CGFloat minimumYawCorrectionAreaCoverage; // ivar: minimumYawCorrectionAreaCoverage
@property (readonly) float pitchCorrectionAreaCoverage; // ivar: pitchCorrectionAreaCoverage
@property (readonly) float yawCorrectionAreaCoverage; // ivar: yawCorrectionAreaCoverage


-(BOOL)compute;
-(CGFloat)confidence;
-(id)initWithContext:(id)arg0 image:(id)arg1 config:(struct ? *)arg2 ;
-(void)clusterLineSegments;
-(void)computeGuides;
-(void)computeTransform;
-(void)createGradientMap;
-(void)dealloc;
-(void)extractLineSegments;
-(void)normalizeGradientMap;
-(void)rangeLimitGradientMap;
-(void)standardizeImage;
-(void)thresholdGradientMap;


@end


#endif