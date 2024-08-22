// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCCONVOLUTIONDESCRIPTOR_H
#define MLCCONVOLUTIONDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCConvolutionDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) int convolutionType; // ivar: _convolutionType
@property (readonly, nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (readonly, nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (readonly, nonatomic) NSUInteger groupCount; // ivar: _groupCount
@property (readonly, nonatomic) NSUInteger inputFeatureChannelCount; // ivar: _inputFeatureChannelCount
@property (readonly, nonatomic) BOOL isConvolutionTranspose;
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) NSUInteger outputFeatureChannelCount; // ivar: _outputFeatureChannelCount
@property (nonatomic) int paddingPolicy; // ivar: _paddingPolicy
@property (nonatomic) NSUInteger paddingSizeInX; // ivar: _paddingSizeInX
@property (nonatomic) NSUInteger paddingSizeInY; // ivar: _paddingSizeInY
@property (readonly, nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (readonly, nonatomic) NSUInteger strideInY; // ivar: _strideInY
@property (readonly, nonatomic) BOOL usesDepthwiseConvolution;


+(id)convolutionTransposeDescriptorWithKernelSizes:(id)arg0 inputFeatureChannelCount:(NSUInteger)arg1 outputFeatureChannelCount:(NSUInteger)arg2 groupCount:(NSUInteger)arg3 strides:(id)arg4 dilationRates:(id)arg5 paddingPolicy:(int)arg6 paddingSizes:(id)arg7 ;
+(id)convolutionTransposeDescriptorWithKernelSizes:(id)arg0 inputFeatureChannelCount:(NSUInteger)arg1 outputFeatureChannelCount:(NSUInteger)arg2 strides:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 ;
+(id)convolutionTransposeDescriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannelCount:(NSUInteger)arg2 outputFeatureChannelCount:(NSUInteger)arg3 ;
+(id)depthwiseConvolutionDescriptorWithKernelSizes:(id)arg0 inputFeatureChannelCount:(NSUInteger)arg1 channelMultiplier:(NSUInteger)arg2 strides:(id)arg3 dilationRates:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6 ;
+(id)depthwiseConvolutionDescriptorWithKernelSizes:(id)arg0 inputFeatureChannelCount:(NSUInteger)arg1 channelMultiplier:(NSUInteger)arg2 strides:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 ;
+(id)depthwiseConvolutionDescriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannelCount:(NSUInteger)arg2 channelMultiplier:(NSUInteger)arg3 ;
+(id)descriptorWithKernelSizes:(id)arg0 inputFeatureChannelCount:(NSUInteger)arg1 outputFeatureChannelCount:(NSUInteger)arg2 groupCount:(NSUInteger)arg3 strides:(id)arg4 dilationRates:(id)arg5 paddingPolicy:(int)arg6 paddingSizes:(id)arg7 ;
+(id)descriptorWithKernelSizes:(id)arg0 inputFeatureChannelCount:(NSUInteger)arg1 outputFeatureChannelCount:(NSUInteger)arg2 strides:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 ;
+(id)descriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannelCount:(NSUInteger)arg2 outputFeatureChannelCount:(NSUInteger)arg3 ;
+(id)descriptorWithType:(int)arg0 kernelSizes:(id)arg1 inputFeatureChannelCount:(NSUInteger)arg2 outputFeatureChannelCount:(NSUInteger)arg3 groupCount:(NSUInteger)arg4 strides:(id)arg5 dilationRates:(id)arg6 paddingPolicy:(int)arg7 paddingSizes:(id)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(int)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 inputFeatureChannelCount:(NSUInteger)arg3 outputFeatureChannelCount:(NSUInteger)arg4 groupCount:(NSUInteger)arg5 strideInX:(NSUInteger)arg6 strideInY:(NSUInteger)arg7 dilationRateInX:(NSUInteger)arg8 dilationRateInY:(NSUInteger)arg9 paddingPolicy:(int)arg10 paddingSizeInX:(NSUInteger)arg11 paddingSizeInY:(NSUInteger)arg12 ;


@end


#endif