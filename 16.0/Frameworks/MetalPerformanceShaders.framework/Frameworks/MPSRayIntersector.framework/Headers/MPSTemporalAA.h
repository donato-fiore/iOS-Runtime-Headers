// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTEMPORALAA_H
#define MPSTEMPORALAA_H

@class MPSKernel;
@protocol NSSecureCoding, NSCopying;



@interface MPSTemporalAA : MPSKernel <NSSecureCoding, NSCopying>

 {
    float _blendFactor;
}


@property (nonatomic) float blendFactor;


+(BOOL)supportsSecureCoding;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)channelCount:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)description;
-(id)getPipelineForFunctionName:(id)arg0 kernelID:(NSUInteger)arg1 haveMotionVectorTexture:(BOOL)arg2 haveDepthTexture:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(struct MPSTemporalAAFunctionHash )getHashForKernelID:(NSUInteger)arg0 haveMotionVectorTexture:(BOOL)arg1 haveDepthTexture:(BOOL)arg2 ;
-(struct MPSTemporalAAParams )params;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 previousTexture:(id)arg2 destinationTexture:(id)arg3 motionVectorTexture:(id)arg4 depthTexture:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif