// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINKBEHAVIOR_H
#define PKINKBEHAVIOR_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PKInkFeatheringDescriptor.h"
#import "PKInkParticleDescriptor.h"
#import "PKInkRenderingDescriptor.h"
#import "PKInkSmoothingDescriptor.h"

@interface PKInkBehavior : NSObject {
    BOOL _timeDependent;
    BOOL _usesAzimuthOrAltitude;
    BOOL _showBrushIndicator;
    CGFloat _rulerOffsetScale;
    CGFloat _rulerOffsetConstant;
    BOOL _variableSnappedWidth;
    NSMutableArray *_cachedRadiusFunctions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    unique_ptr<PKFunction, std::default_delete<PKFunction>> _weightFunction;
    vector<PKOutputFunction, std::allocator<PKOutputFunction>> _radiusOutput;
    vector<PKOutputFunction, std::allocator<PKOutputFunction>> _opacityOutput;
    vector<PKOutputFunction, std::allocator<PKOutputFunction>> _edgeWidthOutput;
    vector<PKOutputFunction, std::allocator<PKOutputFunction>> _aspectRatioOutput;
    vector<PKOutputFunction, std::allocator<PKOutputFunction>> _brushOpacityOutput;
}


@property (nonatomic) CGFloat baseAlpha; // ivar: _baseAlpha
@property (nonatomic) CGFloat blendAlpha; // ivar: _blendAlpha
@property (retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor; // ivar: _featheringDescriptor
@property (readonly, nonatomic) NSArray *inkFunctions;
@property (readonly, nonatomic) BOOL isEraser;
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
@property (readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor; // ivar: _renderingDescriptor
@property (retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor; // ivar: _smoothingDescriptor
@property (nonatomic) CGFloat targetMultiple; // ivar: _targetMultiple
@property (readonly, nonatomic) NSString *variant; // ivar: _variant


+(CGFloat)inkRadiusOverride;
-(id)description;
-(id)initWithRenderingDescriptor:(id)arg0 variant:(id)arg1 ;


@end


#endif