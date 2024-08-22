// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCAMERA_H
#define TSCH3DCAMERA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DLens.h"

@interface TSCH3DCamera : NSObject <NSCopying>



@property (nonatomic) tvec2<float> containingViewportOffset; // ivar: _containingViewportOffset
@property (readonly, nonatomic) tvec3<float> direction;
@property (retain, nonatomic) TSCH3DLens *lens; // ivar: _lens
@property (readonly, nonatomic) tmat4x4<float> modelViewNormalizedProjection;
@property (readonly, nonatomic) tmat4x4<float> modelViewProjection;
@property (readonly, nonatomic) tmat4x4<float> normalizedProjection;
@property (readonly, nonatomic) tvec3<float> position;
@property (readonly, nonatomic) tmat4x4<float> projection;
@property (readonly, nonatomic) tmat4x4<float> space;
@property (nonatomic) tmat4x4<float> transform; // ivar: _transform
@property (nonatomic) box<glm::detail::tvec2<int>> viewport; // ivar: _viewport
@property (readonly, nonatomic) tmat4x4<float> viewportProjection;
@property (nonatomic) float viewportSamples; // ivar: _viewportSamples
@property (nonatomic) float viewportScale; // ivar: _viewportScale


+(id)cameraWithLens:(id)arg0 size:(*void)arg1 ;
+(id)orthographic;
+(id)orthographicPerPixelWithBounds:(*void)arg0 ;
+(id)orthographicPerPixelWithSize:(*void)arg0 ;
+(id)orthographicWithSize:(*void)arg0 ;
+(id)perspective;
+(id)perspectiveWithSize:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)frustumSliceAtDistance:(float)arg0 ;
-(id)initWithLens:(id)arg0 size:(*void)arg1 ;
-(id)matrixDescription;
-(id)narrowByNormalizedBounds:(*void)arg0 ;
-(id)narrowedByNormalizedBounds:(*void)arg0 ;
-(id)narrowedByViewport:(*void)arg0 ;
-(id)narrowedByViewport:(*void)arg0 samples:(NSInteger)arg1 ;
-(id)pixelAlignedForScaledViewport:(*void)arg0 viewportScale:(float)arg1 samples:(float)arg2 correspondingNoramlizedBounds:(*void)arg3 ;
-(id)shiftByPixels:(*void)arg0 ;
-(id)shiftedByPixels:(*void)arg0 ;
-(struct tmat4x4<float> )modelViewViewportProjectionWithViewportScale:(float)arg0 ;
-(struct tvec3<float> )backProjectCameraSpacePoint:(*void)arg0 ;
-(struct tvec3<float> )fastProjectNormalizedPoint:(*void)arg0 planeDistance:(float)arg1 ;
-(struct tvec3<float> )projectNormalizedPoint:(*void)arg0 planeDistance:(float)arg1 ;
-(void)calculateCullingPlanes:(*void)arg0 ;
-(void)setContainingViewportSize:(*void)arg0 ;


@end


#endif