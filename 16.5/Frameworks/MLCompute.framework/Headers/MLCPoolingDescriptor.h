// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCPOOLINGDESCRIPTOR_H
#define MLCPOOLINGDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCPoolingDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL countIncludesPadding; // ivar: _countIncludesPadding
@property (readonly, nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (readonly, nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) int paddingPolicy; // ivar: _paddingPolicy
@property (readonly, nonatomic) NSUInteger paddingSizeInX; // ivar: _paddingSizeInX
@property (readonly, nonatomic) NSUInteger paddingSizeInY; // ivar: _paddingSizeInY
@property (readonly, nonatomic) int poolingType; // ivar: _poolingType
@property (readonly, nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (readonly, nonatomic) NSUInteger strideInY; // ivar: _strideInY


+(id)averagePoolingDescriptorWithKernelSizes:(id)arg0 strides:(id)arg1 dilationRates:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 countIncludesPadding:(BOOL)arg5 ;
+(id)averagePoolingDescriptorWithKernelSizes:(id)arg0 strides:(id)arg1 paddingPolicy:(int)arg2 paddingSizes:(id)arg3 countIncludesPadding:(BOOL)arg4 ;
+(id)l2NormPoolingDescriptorWithKernelSizes:(id)arg0 strides:(id)arg1 dilationRates:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 ;
+(id)l2NormPoolingDescriptorWithKernelSizes:(id)arg0 strides:(id)arg1 paddingPolicy:(int)arg2 paddingSizes:(id)arg3 ;
+(id)maxPoolingDescriptorWithKernelSizes:(id)arg0 strides:(id)arg1 dilationRates:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 ;
+(id)maxPoolingDescriptorWithKernelSizes:(id)arg0 strides:(id)arg1 paddingPolicy:(int)arg2 paddingSizes:(id)arg3 ;
+(id)poolingDescriptorWithType:(int)arg0 kernelSize:(NSUInteger)arg1 stride:(NSUInteger)arg2 ;
+(id)poolingDescriptorWithType:(int)arg0 kernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 ;
+(id)poolingDescriptorWithType:(int)arg0 kernelSizes:(id)arg1 strides:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(int)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInX:(NSUInteger)arg3 strideInY:(NSUInteger)arg4 dilationRateInX:(NSUInteger)arg5 dilationRateInY:(NSUInteger)arg6 paddingPolicy:(int)arg7 paddingSizeInX:(NSUInteger)arg8 paddingSizeInY:(NSUInteger)arg9 countIncludesPadding:(BOOL)arg10 ;


@end


#endif