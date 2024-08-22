// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINKBEHAVIOR_H
#define PKINKBEHAVIOR_H

@class NSMutableArray, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PKInkAnimationDescriptor.h"
#import "PKInkFeatheringDescriptor.h"
#import "PKInkParticleDescriptor.h"
#import "PKInkRenderingDescriptor.h"
#import "PKInkSmoothingDescriptor.h"

@interface PKInkBehavior : NSObject {
    BOOL _usesAzimuthOrAltitude;
    BOOL _showBrushIndicator;
    CGFloat _rulerOffsetScale;
    CGFloat _rulerOffsetConstant;
    NSMutableArray *_cachedRadiusFunctions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    unique_ptr<PKFunction, std::default_delete<PKFunction>> _weightFunction;
    ? _radiusOutput;
    ? _opacityOutput;
    ? _edgeWidthOutput;
    ? _aspectRatioOutput;
    ? _brushOpacityOutput;
}


@property (retain, nonatomic) PKInkAnimationDescriptor *animationDescriptor; // ivar: _animationDescriptor
@property (nonatomic) CGFloat baseAlpha; // ivar: _baseAlpha
@property (nonatomic) CGFloat blendAlpha; // ivar: _blendAlpha
@property (retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor; // ivar: _featheringDescriptor
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *inkFunctions;
@property (nonatomic) CGAffineTransform inkTransform; // ivar: _inkTransform
@property (readonly, nonatomic) BOOL isEraser;
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
@property (retain, nonatomic) PKInkFeatheringDescriptor *pencilFeatheringDescriptor; // ivar: _pencilFeatheringDescriptor
@property (readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor; // ivar: _renderingDescriptor
@property (retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor; // ivar: _smoothingDescriptor
@property (nonatomic) CGFloat targetMultiple; // ivar: _targetMultiple
@property (nonatomic) BOOL useUnclampedWeight; // ivar: _useUnclampedWeight
@property (readonly, nonatomic) NSString *variant; // ivar: _variant
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(CGFloat)inkRadiusOverride;
+(id)loadInkV2WithURL:(id)arg0 ;
-(?)initWithRenderingDescriptor:(?)arg0 blendAlpha:(?)arg1 targetMultiple:(?)arg2 baseAlpha:(?)arg3 inkTransform:(?)arg4 useUnclampedWeight:(?)arg5 smoothingDescriptor:(?)arg6 featheringDescriptor:(?)arg7 pencilFeatheringDescriptor:(?)arg8 animationDescriptor:(?)arg9 identifier:(?)arg10 version:(?)arg11 variant:(?)arg12 showBrushIndicator:(?)arg13 rulerOffsetScale:(?)arg14 rulerOffsetConstant:(?)arg15 weightFunction:(?)arg16 radiusOutput:(?)arg17 opacityOutput:(?)arg18 edgeWidthOutput:(?)arg19 aspectRatioOutputbrushOpacityOutput;
-(id)description;
-(id)initWithRenderingDescriptor:(id)arg0 blendAlpha:(CGFloat)arg1 targetMultiple:(CGFloat)arg2 baseAlpha:(CGFloat)arg3 inkTransform:(struct CGAffineTransform )arg4 useUnclampedWeight:(BOOL)arg5 smoothingDescriptor:(id)arg6 featheringDescriptor:(id)arg7 pencilFeatheringDescriptor:(id)arg8 animationDescriptor:(id)arg9 identifier:(id)arg10 version:(NSUInteger)arg11 variant:(id)arg12 showBrushIndicator:(BOOL)arg13 rulerOffsetScale:(CGFloat)arg14 rulerOffsetConstant:(CGFloat)arg15 weightFunction:(id)arg16 inkFunctions:(id)arg17 ;
-(id)initWithRenderingDescriptor:(id)arg0 variant:(id)arg1 ;
-(id)mutableCopy;
-(void)_calculateUsesAzimuthOrAltitude;
-(void)addNewInkFunction:(id)arg0 ;
-(void)inkFunctionDidChange:(id)arg0 ;
-(void)removeInkFunction:(id)arg0 ;


@end


#endif