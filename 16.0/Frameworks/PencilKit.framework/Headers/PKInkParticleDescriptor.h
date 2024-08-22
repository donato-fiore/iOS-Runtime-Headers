// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINKPARTICLEDESCRIPTOR_H
#define PKINKPARTICLEDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKInkParticleDescriptor : NSObject {
    CGFloat _dynamicStep;
    unique_ptr<PKFunction, std::default_delete<PKFunction>> _particleSpacingFunction;
}


@property (nonatomic, getter=adjustEndCapParticleAlpha, setter=setAdjustEndCapParticleAlpha:) BOOL adjustEndCapParticleAlpha; // ivar: _adjustEndCapParticleAlpha
@property (nonatomic) BOOL initialRandomRotation; // ivar: _initialRandomRotation
@property (nonatomic) CGFloat maskDepth; // ivar: _maskDepth
@property (nonatomic) BOOL maskInitialRandomOffset; // ivar: _maskInitialRandomOffset
@property (nonatomic) CGFloat maskMovement; // ivar: _maskMovement
@property (nonatomic) CGFloat maskScale; // ivar: _maskScale
@property (retain, nonatomic) *CGImage maskTextureImage; // ivar: _maskTextureImage
@property (copy, nonatomic) NSString *maskTextureName; // ivar: _maskTextureName
@property (nonatomic) NSUInteger particleBlendMode; // ivar: _particleBlendMode
@property (nonatomic) NSInteger particleCount; // ivar: _particleCount
@property (nonatomic) NSUInteger particleRotation; // ivar: _particleRotation
@property (nonatomic) CGSize particleSize; // ivar: _particleSize
@property (nonatomic) CGFloat particleSpacing; // ivar: _particleSpacing
@property (retain, nonatomic) *CGImage textureImage; // ivar: _textureImage
@property (copy, nonatomic) NSString *textureName; // ivar: _textureName


+(id)arrayFromVector:(struct vector<double, std::allocator<double>> )arg0 ;
+(id)particleDescriptorWithName:(id)arg0 particleSpacing:(CGFloat)arg1 particleCount:(NSInteger)arg2 particleSize:(struct CGSize )arg3 particleRotation:(NSUInteger)arg4 ;
+(id)particleDescriptorWithName:(id)arg0 texture:(struct CGImage *)arg1 particleSpacing:(CGFloat)arg2 particleCount:(NSInteger)arg3 particleSize:(struct CGSize )arg4 particleRotation:(NSUInteger)arg5 ;
-(CGFloat)dynamicStep;
-(id)initWithTextureName:(id)arg0 textureImage:(struct CGImage *)arg1 maskTextureName:(id)arg2 maskTextureImage:(struct CGImage *)arg3 particleSpacing:(CGFloat)arg4 particleCount:(NSInteger)arg5 particleSize:(struct CGSize )arg6 particleRotation:(NSUInteger)arg7 maskScale:(CGFloat)arg8 maskMovement:(CGFloat)arg9 maskDepth:(CGFloat)arg10 initialRandomRotation:(BOOL)arg11 maskInitialRandomOffset:(BOOL)arg12 adjustEndCapParticleAlpha:(BOOL)arg13 particleBlendMode:(NSUInteger)arg14 ;
-(id)mutableCopy;
-(void)setDynamicStep:(CGFloat)arg0 ;


@end


#endif