// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARENVIRONMENT_H
#define AVTAVATARENVIRONMENT_H

@class SCNScene, SCNNode, SCNMaterial, NSString;
@protocol SCNSceneRenderer;

#import <Foundation/Foundation.h>

#import "AVTAvatar.h"

@interface AVTAvatarEnvironment : NSObject {
    SCNScene *_scene;
    id<SCNSceneRenderer> *_renderer;
    AVTAvatar *_avatar;
    SCNNode *_trackingLostIndicator;
    BOOL _trackingLostIndicatorVisible;
    SCNMaterial *_shadowPlaneMaterial;
    SCNNode *_whitePlane;
    SCNNode *_environmentNode;
    SCNNode *_defaultPointOfView;
    NSString *_framingMode;
    SCNNode *_animojiCamera;
    SCNNode *_memojiCameraGroup;
    SCNNode *_customCamera;
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}


@property (readonly, nonatomic) SCNNode *defaultPointOfView;
@property (readonly, nonatomic) SCNNode *environmentNode;
@property (readonly, nonatomic) BOOL faceIsFullyVisible;
@property (nonatomic) float fadeFactor;
@property (retain, nonatomic) NSString *framingMode;
@property (nonatomic) BOOL showReticle;


-(id)defaultEnvironmentNode;
-(id)initAndInstallInScene:(id)arg0 renderer:(id)arg1 ;
-(void)avatarDidChange:(id)arg0 arMode:(BOOL)arg1 ;
-(void)didSnapshot;
-(void)hideTrackingLossIndicator;
-(void)showTrackingLossIndicator;
-(void)updateARMode:(BOOL)arg0 ;
-(void)updateCustomCameras;
-(void)updatePointOfViewFromFramingMode;
-(void)updateSpecializedLighting;
-(void)willSnapshot;


@end


#endif