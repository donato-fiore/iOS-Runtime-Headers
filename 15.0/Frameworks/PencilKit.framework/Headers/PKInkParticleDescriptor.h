// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKINKPARTICLEDESCRIPTOR_H
#define PKINKPARTICLEDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKInkParticleDescriptor : NSObject {
    BOOL _adjustEndCapParticleAlpha;
    CGFloat _dynamicStep;
    unique_ptr<PKFunction, std::default_delete<PKFunction>> _particleSpacingFunction;
}


@property (nonatomic) NSInteger particleCount; // ivar: _particleCount
@property (nonatomic) NSUInteger particleRotation; // ivar: _particleRotation
@property (nonatomic) CGSize particleSize; // ivar: _particleSize
@property (nonatomic) CGFloat particleSpacing; // ivar: _particleSpacing
@property (retain, nonatomic) *CGImage textureImage; // ivar: _textureImage
@property (copy, nonatomic) NSString *textureName; // ivar: _textureName


+(id)arrayFromVector:(struct vector<double, std::allocator<double>> )arg0 ;
+(id)particleDescriptorWithName:(id)arg0 particleSpacing:(CGFloat)arg1 particleCount:(NSInteger)arg2 particleSize:(struct CGSize )arg3 particleRotation:(NSUInteger)arg4 ;
+(id)particleDescriptorWithName:(id)arg0 texture:(struct CGImage *)arg1 particleSpacing:(CGFloat)arg2 particleCount:(NSInteger)arg3 particleSize:(struct CGSize )arg4 particleRotation:(NSUInteger)arg5 ;
-(BOOL)adjustEndCapParticleAlpha;
-(CGFloat)dynamicStep;
-(void)setAdjustEndCapParticleAlpha:(BOOL)arg0 ;
-(void)setDynamicStep:(CGFloat)arg0 ;


@end


#endif