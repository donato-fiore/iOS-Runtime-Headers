// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVMOTIONEFFECTTRANSFORMCOMPONENT_H
#define PVMOTIONEFFECTTRANSFORMCOMPONENT_H

@protocol PVEffectTransformable;


#import "PVMotionEffectComponent.h"

@interface PVMotionEffectTransformComponent : PVMotionEffectComponent <PVEffectTransformable>

 {
    unsigned int _top3DGroupID;
    int _top3DGroupIDStatus;
    unsigned int _cameraID;
    int _cameraIDStatus;
}




-(BOOL)addCameraToDocumentOnce_NoLock:(*void)arg0 ;
-(BOOL)bounds:(struct CGRect *)arg0 atTime:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(BOOL)disableCameraOverride_NoLock:(*void)arg0 ;
-(BOOL)enableCameraOverride_NoLock:(*void)arg0 transform:(id)arg1 projection:(id)arg2 ;
-(BOOL)encloseTopGroupIn3DGroupOnce_NoLock:(*void)arg0 ;
-(BOOL)isCameraOverrideEnabled;
-(BOOL)isForceRenderAtPosterFrameEnabledInDictionary:(id)arg0 orInDefaultDictionary:(id)arg1 ;
-(BOOL)motionEffect:(id)arg0 propertiesDisableCache:(id)arg1 time:(struct ? )arg2 forcePosterFrame:(BOOL)arg3 ;
-(BOOL)motionEffect:(id)arg0 shouldInvalidateCachedRenderForProperty:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(BOOL)setCameraProjection_NoLock:(id)arg0 documentInfo:(*void)arg1 ;
-(BOOL)setCameraTransform_NoLock:(id)arg0 documentInfo:(*void)arg1 ;
-(BOOL)setTransform_NoLock:(id)arg0 documentInfo:(*void)arg1 ;
-(id)additionalTopLevelScaleInDictionary:(id)arg0 orInDefaultDictionary:(id)arg1 ;
-(id)applyAdditionalTopLevelScale:(struct CGPoint )arg0 aroundPoint:(struct CGPoint )arg1 toTransform:(id)arg2 ;
-(id)cameraProjection;
-(id)cameraTransform;
-(id)initWithMotionEffect:(id)arg0 ;
-(id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg0 ;
-(id)objectToImageTransform_NoLock:(unsigned int)arg0 timelineTime:(struct ? )arg1 componentTime:(struct ? )arg2 flatten:(BOOL)arg3 includeTransformAnimation:(BOOL)arg4 documentInfo:(*void)arg5 ;
-(id)transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 viewSize:(struct CGSize )arg3 viewOrigin:(int)arg4 ;
-(id)transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 viewSize:(struct CGSize )arg2 viewOrigin:(int)arg3 ;
-(id)transformObjectPointsToImage_NoLock:(id)arg0 objectID:(unsigned int)arg1 timelineTime:(struct ? )arg2 componentTime:(struct ? )arg3 flatten:(BOOL)arg4 documentInfo:(*void)arg5 ;
-(int)objectBounds_NoLock:(*void)arg0 objectID:(unsigned int)arg1 timelineTime:(struct ? )arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 documentInfo:(*void)arg5 ;
-(struct PVCGPointQuad )cornersAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 scale:(struct CGPoint )arg3 viewSize:(struct CGSize )arg4 viewOrigin:(int)arg5 ;
-(struct PVCGPointQuad )objectCorners_NoLock:(unsigned int)arg0 timelineTime:(struct ? )arg1 componentTime:(struct ? )arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 documentInfo:(*void)arg5 ;
-(struct PVCGPointQuad )transformObjectCornersToImage_NoLock:(struct PVCGPointQuad )arg0 objectID:(unsigned int)arg1 timelineTime:(struct ? )arg2 componentTime:(struct ? )arg3 flatten:(BOOL)arg4 documentInfo:(*void)arg5 ;
-(void)applyTransforms_NoLock:(id)arg0 defaultProperties:(id)arg1 componentTime:(struct ? )arg2 documentInfo:(*void)arg3 ;
-(void)disableCameraOverride;
-(void)enableCameraOverride:(id)arg0 projection:(id)arg1 ;
-(void)motionEffect:(id)arg0 didBecomeReady:(*void)arg1 properties:(id)arg2 ;
-(void)motionEffect:(id)arg0 willRender:(*void)arg1 properties:(id)arg2 time:(struct ? )arg3 ;
-(void)motionEffectDidUnload:(id)arg0 ;
-(void)setTopLevelGroupTransform:(id)arg0 ;
-(void)setTopLevelGroupTransform_NoLock:(id)arg0 documentInfo:(*void)arg1 ;
-(void)setTransform:(id)arg0 ;


@end


#endif