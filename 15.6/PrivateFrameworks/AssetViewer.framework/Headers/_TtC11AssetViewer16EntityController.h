// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11ASSETVIEWER16ENTITYCONTROLLER_H
#define _TTC11ASSETVIEWER16ENTITYCONTROLLER_H

@class NSURL, NSString, NSArray;
@protocol ASVWorldGestureRecognizerDelegate, ASVTurntableGestureRecognizerDelegate, ASVUnifiedGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "ASVUnifiedGestureRecognizer.h"

@interface _TtC11AssetViewer16EntityController : NSObject <ASVWorldGestureRecognizerDelegate, ASVTurntableGestureRecognizerDelegate, ASVUnifiedGestureRecognizerDelegate>

 {
    ? entity;
    ? type;
    ? animationManager;
    ? animationID;
    ? delegate;
    ? entityWorldPosistionRefreshGuard;
    ? lastARFrameTimestampForMovement;
    ? lastScreenPointForMovement;
    ? lastBoundingBox;
    ? debugVisualizationEntity;
    ? debugBoundingBoxEntities;
    ? currentTurntableYaw;
    ? currentTurntablePitch;
    ? savedLevitationHeight;
    ? transformToCameraInObjectMode;
    ? transformToWorldInARMode;
    ? initialAABB;
    ? _assetNaturalSize;
    ? _assetScaleToFitUnitBox;
    ? projectPointHandler;
    ? shouldDisableGesturesHandler;
    ? shouldUseTightBoundsSPI;
    ? planeType;
    ? planeAnimator;
    ? trackedRaycast;
    ? verticalPlacementMarker;
    ? groundPlaneEntity;
    ? sceneUnderstandingState;
    ? shadowPlaneEntity;
    ? physicsStateManager;
    ? accessibilityAssetURL;
    ? savedInlineModelToCameraTransform;
}


@property (nonatomic, copy) NSURL *accessibilityAssetURL;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *entityAccessibilityWrappers;
@property (nonatomic) float levitationHeight; // ivar: levitationHeight
@property (nonatomic, retain) ASVUnifiedGestureRecognizer *worldGestureRecognizer; // ivar: worldGestureRecognizer


-(id)init;
-(struct CGRect )calculateAssetScreenBoundingRectIn:(id)arg0 ;
-(void)dealloc;
-(void)rotateByDeltaYaw:(float)arg0 deltaPitch:(float)arg1 ;
-(void)scaleTo:(float)arg0 updateARScale:(BOOL)arg1 ;
-(void)turntableGestureRecognizer:(id)arg0 rotatedAssetByDeltaYaw:(float)arg1 deltaPitch:(float)arg2 ;
-(void)unifiedGestureRecognizer:(id)arg0 doubleTappedAtScreenPoint:(BOOL)arg1 onAsset;
-(void)unifiedGestureRecognizer:(id)arg0 rotatedAssetByDeltaYaw:(float)arg1 ;
-(void)unifiedGestureRecognizer:(id)arg0 scaledAssetToScale:(float)arg1 ;
-(void)unifiedGestureRecognizer:(id)arg0 singleTappedAtScreenPoint:(BOOL)arg1 onAsset;
-(void)unifiedGestureRecognizerBeganRotation:(id)arg0 ;
-(void)unifiedGestureRecognizerBeganScaling:(id)arg0 ;
-(void)unifiedGestureRecognizerEndedRotation:(id)arg0 ;
-(void)unifiedGestureRecognizerEndedScaling:(id)arg0 ;
-(void)worldGestureRecognizer:(id)arg0 decelerationTranslationDelta;
-(void)worldGestureRecognizer:(id)arg0 levitatedAssetToScreenPoint;
-(void)worldGestureRecognizer:(id)arg0 translatedAssetToScreenPoint;
-(void)worldGestureRecognizerBeganLevitation:(id)arg0 ;
-(void)worldGestureRecognizerBeganTranslation:(id)arg0 ;
-(void)worldGestureRecognizerBeganTranslationDeceleration:(id)arg0 ;
-(void)worldGestureRecognizerEndedLevitation:(id)arg0 ;
-(void)worldGestureRecognizerEndedTranslation:(id)arg0 ;
-(void)worldGestureRecognizerEndedTranslationDeceleration:(id)arg0 ;


@end


#endif