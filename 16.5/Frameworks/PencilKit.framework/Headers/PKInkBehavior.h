// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    NSMutableArray *_cachedRadius2Functions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    unique_ptr<PKFunction, std::default_delete<PKFunction>> _weightFunction;
    ? _radiusOutput;
    ? _radius2Output;
    ? _opacityOutput;
    ? _edgeWidthOutput;
    ? _aspectRatioOutput;
    ? _brushOpacityOutput;
}


@property (retain, nonatomic) PKInkAnimationDescriptor *animationDescriptor; // ivar: _animationDescriptor
@property (nonatomic) CGFloat baseAlpha; // ivar: _baseAlpha
@property (nonatomic) CGFloat blendAlpha; // ivar: _blendAlpha
@property (nonatomic) CGFloat defaultWidth; // ivar: _defaultWidth
@property (retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor; // ivar: _featheringDescriptor
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *inkFunctions;
@property (nonatomic) CGAffineTransform inkTransform; // ivar: _inkTransform
@property (readonly, nonatomic) BOOL isEraser;
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
@property (retain, nonatomic) PKInkFeatheringDescriptor *pencilFeatheringDescriptor; // ivar: _pencilFeatheringDescriptor
@property (readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor; // ivar: _renderingDescriptor
@property (readonly, nonatomic) PKInkParticleDescriptor *secondaryParticleDescriptor;
@property (retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor; // ivar: _smoothingDescriptor
@property (nonatomic) BOOL supportsCombiningStrokes; // ivar: _supportsCombiningStrokes
@property (nonatomic) CGFloat targetMultiple; // ivar: _targetMultiple
@property (copy, nonatomic) NSArray *uiWidths; // ivar: _uiWidths
@property (nonatomic) BOOL useUnclampedWeight; // ivar: _useUnclampedWeight
@property (readonly, nonatomic) NSString *variant; // ivar: _variant
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(CGFloat)inkRadiusOverride;
+(id)loadInkV2WithURL:(id)arg0 ;
-(?)initWithRenderingDescriptor:(?)arg0 blendAlpha:(?)arg1 targetMultiple:(?)arg2 baseAlpha:(?)arg3 inkTransform:(?)arg4 useUnclampedWeight:(?)arg5 smoothingDescriptor:(?)arg6 featheringDescriptor:(?)arg7 pencilFeatheringDescriptor:(?)arg8 animationDescriptor:(?)arg9 identifier:(?)arg10 version:(?)arg11 variant:(?)arg12 uiWidths:(?)arg13 defaultWidth:(?)arg14 showBrushIndicator:(?)arg15 supportsCombiningStrokes:(?)arg16 rulerOffsetScale:(?)arg17 rulerOffsetConstant:(?)arg18 weightFunction:(?)arg19 radiusOutput:(?)arg20 radius2Output:(?)arg21 opacityOutput:(?)arg22 edgeWidthOutput:(?)arg23 aspectRatioOutputbrushOpacityOutput;
-(id)description;
-(id)initWithRenderingDescriptor:(id)arg0 blendAlpha:(CGFloat)arg1 targetMultiple:(CGFloat)arg2 baseAlpha:(CGFloat)arg3 inkTransform:(struct CGAffineTransform )arg4 useUnclampedWeight:(BOOL)arg5 smoothingDescriptor:(id)arg6 featheringDescriptor:(id)arg7 pencilFeatheringDescriptor:(id)arg8 animationDescriptor:(id)arg9 identifier:(id)arg10 version:(NSUInteger)arg11 variant:(id)arg12 uiWidths:(id)arg13 defaultWidth:(CGFloat)arg14 showBrushIndicator:(BOOL)arg15 supportsCombiningStrokes:(BOOL)arg16 rulerOffsetScale:(CGFloat)arg17 rulerOffsetConstant:(CGFloat)arg18 weightFunction:(id)arg19 inkFunctions:(id)arg20 ;
-(id)initWithRenderingDescriptor:(id)arg0 variant:(id)arg1 ;
-(id)mutableCopy;
-(void)_calculateUsesAzimuthOrAltitude;
-(void)addNewInkFunction:(id)arg0 ;
-(void)inkFunctionDidChange:(id)arg0 ;
-(void)removeInkFunction:(id)arg0 ;


@end


#endif