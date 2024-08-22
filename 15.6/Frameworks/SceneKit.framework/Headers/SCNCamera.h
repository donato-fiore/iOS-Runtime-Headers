// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNCAMERA_H
#define SCNCAMERA_H

@class NSMutableDictionary, NSString, NSArray;
@protocol SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding, MTLTexture;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"
#import "SCNTechnique.h"
#import "SCNMaterialProperty.h"

@interface SCNCamera : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>

 {
    ? _camera;
    BOOL _isPresentationInstance;
    BOOL _custom;
    BOOL _legacyFov;
    BOOL _usesOrthographicProjection;
    BOOL _automaticallyAdjustsZRange;
    BOOL _fillMode;
    BOOL _projectionDirection;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    float _xFov;
    float _yFov;
    CGFloat _orthographicScale;
    CGFloat _zNear;
    CGFloat _zFar;
    float _fieldOfView;
    float _focalLength;
    float _sensorSize;
    ? _lensShift;
    ? _postProjectionTransformTranslation;
    ? _postProjectionTransformScale;
    float _fStop;
    float _focusDistance;
    float _dofIntensity;
    NSInteger _bladeCount;
    NSInteger _focalBlurSampleCount;
    float _aspectRatio;
    NSUInteger _categoryBitMask;
    SCNMatrix4 _projectionTransform;
    SCNTechnique *_technique;
    SCNMaterialProperty *_colorGrading;
    BOOL _wantsHDR;
    float _whitePoint;
    float _averageGray;
    float _exposureOffset;
    float _minimumExposure;
    float _maximumExposure;
    BOOL _wantsExposureAdaptation;
    float _exposureAdaptationDuration;
    float _exposureAdaptationBrighteningSpeedFactor;
    float _exposureAdaptationDarkeningSpeedFactor;
    CGFloat _exposureAdaptationHistogramRangeHighProbability;
    CGFloat _exposureAdaptationHistogramRangeLowProbability;
    NSInteger _exposureAdaptationMode;
    float _bloomIntensity;
    float _bloomThreshold;
    int _bloomIteration;
    float _bloomIterationSpread;
    float _bloomBlurRadius;
    float _motionBlurIntensity;
    float _vignettingPower;
    float _vignettingIntensity;
    float _colorFringeStrength;
    float _colorFringeIntensity;
    float _saturation;
    float _contrast;
    float _grainIntensity;
    float _grainScale;
    BOOL _grainIsColored;
    float _whiteBalanceTemperature;
    float _whiteBalanceTint;
    ? _screenSpaceAmbientOcclusion;
    id<MTLTexture> *_grainTexture;
    float _grainSlice;
}


@property (readonly) NSArray *animationKeys;
@property (nonatomic) NSInteger apertureBladeCount;
@property (nonatomic) BOOL automaticallyAdjustsZRange;
@property (nonatomic) CGFloat averageGray;
@property (nonatomic) CGFloat bloomBlurRadius;
@property (nonatomic) CGFloat bloomIntensity;
@property (nonatomic) NSInteger bloomIterationCount;
@property (nonatomic) CGFloat bloomIterationSpread;
@property (nonatomic) CGFloat bloomThreshold;
@property (nonatomic) NSUInteger categoryBitMask;
@property (nonatomic) CGFloat colorFringeIntensity;
@property (nonatomic) CGFloat colorFringeStrength;
@property (readonly, nonatomic) SCNMaterialProperty *colorGrading;
@property (nonatomic) CGFloat contrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat exposureAdaptationBrighteningSpeedFactor;
@property (nonatomic) CGFloat exposureAdaptationDarkeningSpeedFactor;
@property (nonatomic) CGFloat exposureOffset;
@property (nonatomic) CGFloat fStop;
@property (nonatomic) CGFloat fieldOfView;
@property (nonatomic) NSInteger focalBlurSampleCount;
@property (nonatomic) CGFloat focalLength;
@property (nonatomic) CGFloat focusDistance;
@property (nonatomic) CGFloat grainIntensity;
@property (nonatomic) BOOL grainIsColored;
@property (nonatomic) CGFloat grainScale;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumExposure;
@property (nonatomic) CGFloat minimumExposure;
@property (nonatomic) CGFloat motionBlurIntensity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat orthographicScale;
@property (nonatomic) NSInteger projectionDirection;
@property (nonatomic) SCNMatrix4 projectionTransform;
@property (nonatomic) CGFloat saturation;
@property (nonatomic) CGFloat screenSpaceAmbientOcclusionBias;
@property (nonatomic) CGFloat screenSpaceAmbientOcclusionDepthThreshold;
@property (nonatomic) CGFloat screenSpaceAmbientOcclusionIntensity;
@property (nonatomic) CGFloat screenSpaceAmbientOcclusionNormalThreshold;
@property (nonatomic) CGFloat screenSpaceAmbientOcclusionRadius;
@property (nonatomic) CGFloat sensorHeight;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;
@property (nonatomic) BOOL usesOrthographicProjection;
@property (nonatomic) CGFloat vignettingIntensity;
@property (nonatomic) CGFloat vignettingPower;
@property (nonatomic) BOOL wantsDepthOfField;
@property (nonatomic) BOOL wantsExposureAdaptation;
@property (nonatomic) BOOL wantsHDR;
@property (nonatomic) CGFloat whiteBalanceTemperature;
@property (nonatomic) CGFloat whiteBalanceTint;
@property (nonatomic) CGFloat whitePoint;
@property (nonatomic) CGFloat zFar;
@property (nonatomic) CGFloat zNear;


+(?)cameraWithCameraRef;
+(BOOL)supportsSecureCoding;
+(id)camera;
+(id)cameraWithMDLCamera:(id)arg0 ;
+(id)keyPathsForValuesAffectingFieldOfView;
+(id)keyPathsForValuesAffectingFocalLength;
-(*void)__CFObject;
-(?)initPresentationCameraWithCameraRef;
-(?)initWithCameraRef;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)hasCustomProjectionTransform;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(BOOL)useLegacyFov;
-(CGFloat)aperture;
-(CGFloat)aspectRatio;
-(CGFloat)exposureAdaptationDuration;
-(CGFloat)exposureAdaptationHistogramRangeHighProbability;
-(CGFloat)exposureAdaptationHistogramRangeLowProbability;
-(CGFloat)focalBlurRadius;
-(CGFloat)focalDistance;
-(CGFloat)focalSize;
-(CGFloat)grainSlice;
-(CGFloat)xFov;
-(CGFloat)xMag;
-(CGFloat)yFov;
-(CGFloat)yMag;
-(NSInteger)bloomIteration;
-(NSInteger)exposureAdaptationMode;
-(NSInteger)fillMode;
-(NSInteger)screenSpaceAmbientOcclusionDownSample;
-(NSInteger)screenSpaceAmbientOcclusionSampleCount;
-(float)dofIntensity;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookData;
-(id)debugQuickLookObject;
-(id)grainTexture;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)lensShift;
-(id)presentationCamera;
-(id)presentationInstance;
-(id)scene;
-(struct CGAffineTransform )postProjectionTransform;
-(struct SCNMatrix4 )projectionTransformWithViewportSize:(struct CGSize )arg0 ;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DCamera *)cameraRef;
-(struct __C3DScene *)sceneRef;
-(void)_checkSettingsConsistency;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_customEncodingOfSCNCamera:(id)arg0 ;
-(void)_didDecodeSCNCamera:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_registerAsObserver;
-(void)_syncEntityObjCModel;
-(void)_syncObjCAnimations;
-(void)_syncObjCModel;
-(void)_updateFieldOfView;
-(void)_updateFocalLength;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setAperture:(CGFloat)arg0 ;
-(void)setAspectRatio:(CGFloat)arg0 ;
-(void)setBloomIteration:(NSInteger)arg0 ;
-(void)setDofIntensity:(float)arg0 ;
-(void)setExposureAdaptationDuration:(CGFloat)arg0 ;
-(void)setExposureAdaptationHistogramRangeHighProbability:(CGFloat)arg0 ;
-(void)setExposureAdaptationHistogramRangeLowProbability:(CGFloat)arg0 ;
-(void)setExposureAdaptationMode:(NSInteger)arg0 ;
-(void)setFillMode:(NSInteger)arg0 ;
-(void)setFocalBlurRadius:(CGFloat)arg0 ;
-(void)setFocalDistance:(CGFloat)arg0 ;
-(void)setFocalSize:(CGFloat)arg0 ;
-(void)setGrainSlice:(CGFloat)arg0 ;
-(void)setGrainTexture:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setLensShift;
-(void)setPostProjectionTransform:(struct CGAffineTransform )arg0 ;
-(void)setPostProjectionTransformScale;
-(void)setPostProjectionTransformTranslation;
-(void)setScreenSpaceAmbientOcclusionDownSample:(NSInteger)arg0 ;
-(void)setScreenSpaceAmbientOcclusionSampleCount:(NSInteger)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)setXFov:(CGFloat)arg0 ;
-(void)setXMag:(CGFloat)arg0 ;
-(void)setYFov:(CGFloat)arg0 ;
-(void)setYMag:(CGFloat)arg0 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif