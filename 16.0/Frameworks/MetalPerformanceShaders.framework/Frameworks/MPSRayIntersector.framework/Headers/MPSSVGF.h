// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSSVGF_H
#define MPSSVGF_H

@class MPSKernel;
@protocol NSSecureCoding, NSCopying;



@interface MPSSVGF : MPSKernel <NSSecureCoding, NSCopying>

 {
    float _variancePrefilterSigma;
    float _bilateralFilterSigma;
    NSUInteger _temporalWeighting;
    float _temporalReprojectionBlendFactor;
    float _depthWeight;
    float _normalWeight;
    float _luminanceWeight;
    float _reprojectionThreshold;
    float _varianceEstimationSigma;
    NSUInteger _channelCount;
    NSUInteger _channelCount2;
}


@property (nonatomic) NSUInteger bilateralFilterRadius; // ivar: _bilateralFilterRadius
@property (nonatomic) float bilateralFilterSigma;
@property (nonatomic) NSUInteger channelCount;
@property (nonatomic) NSUInteger channelCount2;
@property (nonatomic) float depthWeight;
@property (nonatomic) float luminanceWeight;
@property (nonatomic) NSUInteger minimumFramesForVarianceEstimation; // ivar: _minimumFramesForVarianceEstimation
@property (nonatomic) float normalWeight;
@property (nonatomic) float reprojectionThreshold;
@property (nonatomic) float temporalReprojectionBlendFactor;
@property (nonatomic) NSUInteger temporalWeighting;
@property (nonatomic) NSUInteger varianceEstimationRadius; // ivar: _varianceEstimationRadius
@property (nonatomic) float varianceEstimationSigma;
@property (nonatomic) NSUInteger variancePrefilterRadius; // ivar: _variancePrefilterRadius
@property (nonatomic) float variancePrefilterSigma;


+(BOOL)supportsSecureCoding;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)channelCount:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)description;
-(id)getPipelineForFunctionName:(id)arg0 kernelID:(NSUInteger)arg1 haveMotionVectorTexture:(BOOL)arg2 haveDepthNormalTexture:(BOOL)arg3 haveSecondTexture:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(struct MPSSVGFFunctionHash )getHashForKernelID:(NSUInteger)arg0 haveMotionVectorTexture:(BOOL)arg1 haveDepthNormalTexture:(BOOL)arg2 haveSecondTexture:(BOOL)arg3 ;
-(struct MPSSVGFParams )params;
-(void)dealloc;
-(void)encodeBilateralFilterToCommandBuffer:(id)arg0 stepDistance:(NSUInteger)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 depthNormalTexture:(id)arg4 ;
-(void)encodeBilateralFilterToCommandBuffer:(id)arg0 stepDistance:(NSUInteger)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 sourceTexture2:(id)arg4 destinationTexture2:(id)arg5 depthNormalTexture:(id)arg6 ;
-(void)encodeReprojectionToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 previousTexture:(id)arg2 destinationTexture:(id)arg3 previousLuminanceMomentsTexture:(id)arg4 destinationLuminanceMomentsTexture:(id)arg5 previousFrameCountTexture:(id)arg6 destinationFrameCountTexture:(id)arg7 motionVectorTexture:(id)arg8 depthNormalTexture:(id)arg9 previousDepthNormalTexture:(id)arg10 ;
-(void)encodeReprojectionToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 previousTexture:(id)arg2 destinationTexture:(id)arg3 previousLuminanceMomentsTexture:(id)arg4 destinationLuminanceMomentsTexture:(id)arg5 sourceTexture2:(id)arg6 previousTexture2:(id)arg7 destinationTexture2:(id)arg8 previousLuminanceMomentsTexture2:(id)arg9 destinationLuminanceMomentsTexture2:(id)arg10 previousFrameCountTexture:(id)arg11 destinationFrameCountTexture:(id)arg12 motionVectorTexture:(id)arg13 depthNormalTexture:(id)arg14 previousDepthNormalTexture:(id)arg15 ;
-(void)encodeVarianceEstimationToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 luminanceMomentsTexture:(id)arg2 destinationTexture:(id)arg3 frameCountTexture:(id)arg4 depthNormalTexture:(id)arg5 ;
-(void)encodeVarianceEstimationToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 luminanceMomentsTexture:(id)arg2 destinationTexture:(id)arg3 sourceTexture2:(id)arg4 luminanceMomentsTexture2:(id)arg5 destinationTexture2:(id)arg6 frameCountTexture:(id)arg7 depthNormalTexture:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif