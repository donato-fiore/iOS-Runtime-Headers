// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVUSERDEFAULTS_H
#define ASVUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface ASVUserDefaults : NSObject



+(BOOL)allowCheckoutNonSecureHTML;
+(BOOL)forceDisableArKitVerticalRejection;
+(BOOL)forceDisableRayTracedAmbientOcclusion;
+(BOOL)forceDisableRealWorldOcclusion;
+(BOOL)forceDisableRealWorldPhysics;
+(BOOL)forceDisableShadowMaps;
+(BOOL)forceShowAnimationScrubber;
+(BOOL)forceUseLegacyHitTestAPI;
+(BOOL)forceUseSceneReconstructionMeshForOrientation;
+(BOOL)shouldRevertToOldHapticsBehavior;
+(BOOL)triggerAffordanceShouldReshowAfterArReset;
+(BOOL)wants2DOverlayControlsHidden;
+(BOOL)wantsAnimationDisabled;
+(BOOL)wantsDebugActionsButton;
+(BOOL)wantsDebugPhysicsEnabled;
+(BOOL)wantsDebugSceneUnderstandingEnabled;
+(BOOL)wantsDebugVisualizationEnabled;
+(BOOL)wantsObjectFitToScreen;
+(BOOL)wantsObjectPlacedWithoutPlane;
+(BOOL)wantsOpenInObjectMode;
+(BOOL)wantsParentToCameraInARAndEnableProbes;
+(BOOL)wantsPeopleOcclusionDisabled;
+(BOOL)wantsRayTracedAmbientOcclusionEnabled;
+(BOOL)wantsShowLastPlacementResultTypeStatus;
+(BOOL)wantsStatisticsShown;
+(BOOL)wantsStatusBarHidden;
+(BOOL)wantsStatusPillHidden;
+(BOOL)wantsTTRButton;
+(BOOL)wantsTrackedRaycastStatus;
+(CGFloat)triggerAffordanceShowDuration;
+(NSInteger)artificialLoadingDelay;
+(float)objectFitToScreenPercentage;
+(float)sceneIBLARIntensity;
+(id)checkoutFragment;
+(id)defaultPlanePosition;
+(id)inlineFramePreferenceString;
+(id)overrideCameraStateSerializedString;
+(id)overrideURLForSafariInline;
+(id)preferencesValueforKey:(struct __CFString *)arg0 ;
+(id)preferencesValueforKey:(struct __CFString *)arg0 domain:(struct __CFString *)arg1 ;
+(void)setPreferencesValue:(id)arg0 forKey:(struct __CFString *)arg1 ;
+(void)setPreferencesValueForKey:(struct __CFString *)arg0 value:(struct __CFString *)arg1 ;


@end


#endif