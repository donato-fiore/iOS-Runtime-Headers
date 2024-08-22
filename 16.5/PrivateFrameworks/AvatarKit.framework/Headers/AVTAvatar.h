// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATAR_H
#define AVTAVATAR_H

@class SCNNode, NSMutableArray, CAAnimation, SCNAnimationPlayer, NSString;
@protocol AVTPhysicsControllerDelegate, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVTPresentationConfiguration.h"
#import "AVTPhysicsController.h"
#import "AVTPupilReflectionCorrectionDescriptor.h"
#import "AVTEyeSkinningDescriptor.h"

@interface AVTAvatar : NSObject <AVTPhysicsControllerDelegate, NSCopying, NSSecureCoding>

 {
    SCNNode *_avatarNode;
    SCNNode *_skeleton;
    SCNNode *_headNode;
    SCNNode *_leftEye;
    SCNNode *_rightEye;
    SCNNode *_neckNode;
    SCNNode *_neckPivotNode;
    *? _morphInfoFromARKitBlendShapeIndex;
    *? _friendlyPoseMorphInfos;
    NSUInteger _friendlyPoseMorphInfoCount;
    ? _friendlyPoseMorphInfoProxy;
    AVTPresentationConfiguration *_presentationConfiguration;
    SCNNode *_portalPresentationConfigurationNode;
    int _transitionCount;
    BOOL _optimizedForSnapshot;
    AVTPhysicsController *_physicsController;
    NSMutableArray *_clipsPlaying;
    ? _lookAt;
    NSMutableArray *_physicalizedMorpherDescriptors;
    NSMutableArray *_physicalizedSkeletonDescriptors;
    NSMutableArray *_morpherDrivenMaterialDescriptors;
    AVTPupilReflectionCorrectionDescriptor *_pupilReflectionCorrectionDescriptor;
    AVTEyeSkinningDescriptor *_eyeSkinningDescriptor;
    ? _arOffset;
    float _arScale;
    CGFloat _physicsScaleFactor;
    CGFloat _lastRenderTime;
    CAAnimation *_bakedAnimation;
    SCNAnimationPlayer *_bakedAnimationPlayer_lazy;
}


@property (nonatomic) BOOL arMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canLoadDataRepresentation:(id)arg0 ;
+(id)avatarWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)avatarWithDataRepresentation:(id)arg0 usageIntent:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)avatarWithDescriptor:(id)arg0 usageIntent:(NSUInteger)arg1 error:(*id)arg2 ;
+(struct ? )applyGazeCorrectionWithInputAngle:(struct ? )arg0 translation;
+(void)preloadAvatar:(id)arg0 ;
-(BOOL)isTransitioning;
-(BOOL)optimizeForSnapshot;
-(BOOL)usesSkinningForEyeOrientation;
-(CGFloat)physicsController:(id)arg0 downforceForNodeNamed:(id)arg1 ;
-(CGFloat)physicsDownforceForNodeNamed:(id)arg0 ;
-(NSInteger)blendShapeIndexForARKitBlendShapeName:(id)arg0 ;
-(NSUInteger)usageIntent;
-(float)arScale;
-(id)_cachePresentationConfigurationShaderModifiersForMaterial:(id)arg0 cacheKey:(id)arg1 shaderModifiersBuilder:(id)arg2 ;
-(id)arOffset;
-(id)assetContainerNodes;
-(id)avatarNode;
-(id)avatarNodeForPhysicsController:(id)arg0 ;
-(id)bakedAnimationCopy;
-(id)bakedAnimationPlayer;
-(id)blendShapeNameForARKitBlendShapeIndex:(NSUInteger)arg0 ;
-(id)cameraNode;
-(id)copyWithUsageIntent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentLookAt;
-(id)dataRepresentation;
-(id)debugPoseJSONRepresentation;
-(id)descriptorsByRemovingDescriptors:(id)arg0 inHierarchy:(id)arg1 passingTest:(id)arg2 ;
-(id)effectiveMorphedNodeForTargetName:(id)arg0 candidateNode:(id)arg1 ;
-(id)headNode;
-(id)init;
-(id)lightingNode;
-(id)neckNode;
-(id)neckPivotNode;
-(id)newDescriptor;
-(id)physicsState;
-(id)pose;
-(id)snapshotWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(id)arg2 ;
-(id)stickerPhysicsStateIdentifier;
-(struct ? )morphInfoForARKitBlendShapeIndex:(NSUInteger)arg0 ;
-(void)_applyBlendShapesWithTrackingData:(struct ? *)arg0 ;
-(void)_applyHeadPoseWithTrackingInfo:(struct ? *)arg0 gazeCorrection:(BOOL)arg1 pointOfView:(id)arg2 ;
-(void)_avatarNodeAndHeadNodeAreNowAvailable;
-(void)_resetFaceToRandomPosition;
-(void)_restoreOriginalShaderModifiersOfMaterial:(id)arg0 ;
-(void)_transitionFromPose:(id)arg0 toPose:(id)arg1 bakedAnimationBlendFactor:(CGFloat)arg2 duration:(CGFloat)arg3 delay:(CGFloat)arg4 timingFunction:(id)arg5 timingAnimation:(id)arg6 completionHandler:(id)arg7 ;
-(void)_updateARModeShaderModifiersForMaterial:(id)arg0 withOnTopMask:(BOOL)arg1 ;
-(void)addCustomBehavioursInHierarchy:(id)arg0 ;
-(void)addMorpherDrivenMaterialsInHierarchy:(id)arg0 ;
-(void)addMorphingSkinningControllersInHierarchy:(id)arg0 ;
-(void)addPhysicalizedDescriptorsInHierarchy:(id)arg0 ignoreUpperNodes:(BOOL)arg1 ;
-(void)animatePhysicsScaleFactor:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)applyBlendShapesWithTrackingInfo:(id)arg0 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg0 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg0 gazeCorrection:(BOOL)arg1 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg0 gazeCorrection:(BOOL)arg1 pointOfView:(id)arg2 ;
-(void)avatarCommonInit;
-(void)configureForBestAnimationQuality;
-(void)dealloc;
-(void)didAddToScene:(id)arg0 ;
-(void)disabledBlendshapesSpecializationSettingsDidChange;
-(void)enumerateMorphInfoForCustomBlendShapeName:(id)arg0 usingBlock:(id)arg1 ;
-(void)evaluatePhysicalizedDescriptors;
-(void)lookAt;
-(void)lookAt:(CGFloat)arg0 withDuration;
-(void)pauseBakedAnimation;
-(void)physicsSpecializationSettingsDidChange;
-(void)removeCustomBehavioursInHierarchy:(id)arg0 ;
-(void)removeMorpherDrivenMaterialsInHierarchy:(id)arg0 ;
-(void)removeMorphingSkinningControllersInHierarchy:(id)arg0 ;
-(void)removePhysicalizedDescriptorsInHierarchy:(id)arg0 ;
-(void)renderer:(id)arg0 didApplyAnimationsAtTime:(CGFloat)arg1 ;
-(void)resetCustomBehaviours;
-(void)resetMorpherDrivenMaterials;
-(void)resetMorphingSkinningControllers;
-(void)resetPhysicalizedDescriptors;
-(void)resetPresentationConfigurationBehavioursInHierarchy:(id)arg0 ;
-(void)resetToPhysicsState:(id)arg0 assumeRestStateIfNil:(BOOL)arg1 ;
-(void)resumeBakedAnimation;
-(void)rotateHead:(CGFloat)arg0 ;
-(void)setBakedAnimationReferenceTime:(CGFloat)arg0 ;
-(void)setOptimizeForSnapshot:(BOOL)arg0 ;
-(void)setPhysicsScaleFactor:(CGFloat)arg0 ;
-(void)setPose:(id)arg0 ;
-(void)setPresentationConfiguration:(id)arg0 ;
-(void)setupEyeOrientationAndReflections;
-(void)setupFaceTracking;
-(void)setupMorphInfo;
-(void)setupMorphInfoForChangeInSubHierarchy;
-(void)stopTransitionAnimation;
-(void)stopTransitionAnimationWithBlendOutDuration:(CGFloat)arg0 ;
-(void)transitionFromPose:(id)arg0 duration:(CGFloat)arg1 delay:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)transitionFromPose:(id)arg0 toPose:(id)arg1 duration:(CGFloat)arg2 delay:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)transitionFromPose:(id)arg0 toPose:(id)arg1 duration:(CGFloat)arg2 delay:(CGFloat)arg3 timingAnimation:(id)arg4 completionHandler:(id)arg5 ;
-(void)transitionFromPose:(id)arg0 toPose:(id)arg1 duration:(CGFloat)arg2 delay:(CGFloat)arg3 timingFunction:(id)arg4 completionHandler:(id)arg5 ;
-(void)transitionToPose:(id)arg0 duration:(CGFloat)arg1 delay:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)update;
-(void)updateAfterAnimationsEvaluatedAtTime:(CGFloat)arg0 renderer:(id)arg1 ;
-(void)updateBindings;
-(void)updateBindingsOfNode:(id)arg0 ;
-(void)updateEyeOrientationAndReflections;
-(void)updateMorpherDrivenMaterialsWithDeltaTime:(CGFloat)arg0 ;
-(void)updatePoseWithCVAFaceTrackingAnimationDictionary:(id)arg0 neckPosition:(struct ? )arg1 neckOrientation:(BOOL)arg2 applySmoothing;
-(void)updatePoseWithFaceTrackingData:(id)arg0 applySmoothing:(BOOL)arg1 ;
-(void)updatePoseWithPoseProvider:(id)arg0 applySmoothing:(BOOL)arg1 ;
-(void)willRemoveFromScene:(id)arg0 ;


@end


#endif