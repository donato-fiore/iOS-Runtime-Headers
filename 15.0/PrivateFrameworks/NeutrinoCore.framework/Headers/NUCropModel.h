// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCROPMODEL_H
#define NUCROPMODEL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUCropModel : NSObject <NSCopying>

 {
    ? _imageCenter;
    CGRect _cropRect;
    CGFloat _pitchRadians;
    CGFloat _yawRadians;
    CGFloat _rollRadians;
}


@property (nonatomic) ? aspectRatio; // ivar: _aspectRatio
@property (readonly) BOOL cropNeedsOvercapture;
@property CGRect cropRect;
@property (readonly, nonatomic) CGFloat fovRadians; // ivar: _fovRadians
@property (readonly) BOOL hasCrop;
@property (readonly, nonatomic) BOOL hasOvercapture;
@property (readonly) NSUInteger hitVertexID; // ivar: _hitVertexID
@property (nonatomic) BOOL isAutoCrop; // ivar: _isAutoCrop
@property (readonly, nonatomic) CGRect masterImageRect; // ivar: _masterImageRect
@property (readonly, nonatomic) CGSize masterImageSize;
@property (readonly, nonatomic) CGFloat pitchDegreeUI;
@property (nonatomic) CGFloat pitchRadians;
@property (readonly, nonatomic) CGFloat rollDegreeUI;
@property (nonatomic) CGFloat rollRadians;
@property (readonly, nonatomic) CGRect stitchedImageRect; // ivar: _stitchedImageRect
@property (readonly, nonatomic) CGSize stitchedImageSize;
@property (readonly, nonatomic) CGFloat yawDegreeUI;
@property (nonatomic) CGFloat yawRadians;


+(CGFloat)defaultFocalLength;
+(struct ? )_imageTransformFromPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 roll:(CGFloat)arg2 imageRect:(struct CGRect )arg3 ;
+(struct ? )freeFormAspectRatio;
-(BOOL)_hasDefaultValues;
-(BOOL)canGrowCropRect:(struct CGRect )arg0 constrainWithAnchorPoint:(struct CGPoint )arg1 strict:(BOOL)arg2 withTol:(CGFloat)arg3 ;
-(BOOL)imageContainsRect:(struct CGRect )arg0 withTol:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCropModel:(id)arg0 ;
-(CGFloat)_currentAspectAsDouble:(struct CGRect )arg0 ;
-(NSUInteger)_hitMaskFromRect:(struct CGRect )arg0 ;
-(NSUInteger)_hitMaskFromRect:(struct CGRect )arg0 withTol:(CGFloat)arg1 ;
-(NSUInteger)constrainedMoveCropRectBy:(struct CGVector )arg0 ;
-(NSUInteger)constrainedMoveCropRectBy:(struct CGVector )arg0 strict:(BOOL)arg1 ;
-(NSUInteger)constrainedMoveCropRectBy:(struct CGVector )arg0 strict:(BOOL)arg1 startRect:(struct CGRect )arg2 ;
-(NSUInteger)hash;
-(NSUInteger)setForZoomCropRect:(struct CGRect )arg0 newCropRect:(struct CGRect )arg1 ;
-(NSUInteger)setPitchAngle:(CGFloat)arg0 constrainCropRectWithTargetArea:(CGFloat)arg1 ;
-(NSUInteger)setPitchAngle:(CGFloat)arg0 constrainCropRectWithTargetArea:(CGFloat)arg1 startRect:(struct CGRect )arg2 startAngle:(CGFloat)arg3 ;
-(NSUInteger)setRollAngle:(CGFloat)arg0 constrainCropRectWithTargetArea:(CGFloat)arg1 ;
-(NSUInteger)setRollAngle:(CGFloat)arg0 constrainCropRectWithTargetArea:(CGFloat)arg1 startRect:(struct CGRect )arg2 startAngle:(CGFloat)arg3 ;
-(NSUInteger)setYawAngle:(CGFloat)arg0 constrainCropRectWithTargetArea:(CGFloat)arg1 ;
-(NSUInteger)setYawAngle:(CGFloat)arg0 constrainCropRectWithTargetArea:(CGFloat)arg1 startRect:(struct CGRect )arg2 startAngle:(CGFloat)arg3 ;
-(id)_defaultImageCenter;
-(id)copyWithMasterImageSize:(struct CGSize )arg0 fovRadians:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMasterImageRect:(struct CGRect )arg0 ;
-(id)initWithMasterImageRect:(struct CGRect )arg0 stitchedImageRect:(struct CGRect )arg1 ;
-(id)initWithMasterImageSize:(struct CGSize )arg0 ;
-(id)initWithMasterImageSize:(struct CGSize )arg0 fovRadians:(CGFloat)arg1 ;
-(id)initWithMasterImageSize:(struct CGSize )arg0 stitchedImageSize:(struct CGSize )arg1 ;
-(struct ? )_currentAspectRatio:(struct CGRect )arg0 ;
-(struct ? )_getBoundingQuadFromPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 roll:(CGFloat)arg2 withExpansionTol:(CGFloat)arg3 ;
-(struct ? )_getBoundingQuadFromPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 roll:(CGFloat)arg2 withExpansionTol:(CGFloat)arg3 imageRect:(struct CGRect )arg4 ;
-(struct ? )originalAspectRatio;
-(struct CGRect )_anchorAlignedRectFromCandidate:(struct CGRect )arg0 withAnchor:(struct CGPoint )arg1 ;
-(struct CGRect )_defaultCropRect;
-(struct CGRect )_expandedCropRectForZoom:(struct CGRect )arg0 candidateRect:(struct CGRect )arg1 ;
-(struct CGRect )_integralCropRect:(struct CGRect )arg0 straightenAngle:(CGFloat)arg1 anchorPoint:(struct CGPoint )arg2 ;
-(struct CGRect )_widestCropRect;
-(struct CGRect )getCropRect:(struct CGRect )arg0 newCropRect:(struct CGRect )arg1 pitch:(CGFloat)arg2 yaw:(CGFloat)arg3 roll:(CGFloat)arg4 constrainWithAnchorPoint:(struct CGPoint )arg5 strict:(BOOL)arg6 aspectRatioIsFreeForm:(BOOL)arg7 hitVertexId:(*NSUInteger)arg8 ;
-(struct CGRect )getCropRectThatCompletelyContainsMasterImageForPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 roll:(CGFloat)arg2 ;
-(struct CGRect )integralCropRect:(struct CGRect )arg0 ;
-(struct Quad2d )_getBoundingQuad;
-(struct Quad2d )_getBoundingQuadFromPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 roll:(CGFloat)arg2 ;
-(struct Quad2d )_getBoundingQuadFromPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 roll:(CGFloat)arg2 imageRect:(struct CGRect )arg3 ;
-(void)_debugPrintHitMask;
-(void)_debugPrintHitMask:(NSUInteger)arg0 ;
-(void)_setToDefaultValues;
-(void)makeCurrentAspectRatioFreeForm;
-(void)makeCurrentFreeFormAspectFixed;
-(void)reset;


@end


#endif