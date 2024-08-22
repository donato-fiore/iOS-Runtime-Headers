// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNAUTHORINGENVIRONMENT2_H
#define SCNAUTHORINGENVIRONMENT2_H

@class NSMutableSet, UIColor;

#import <Foundation/Foundation.h>

#import "SCNNode.h"
#import "SCNRenderer.h"
#import "SCNGeometry.h"
#import "SCNManipulator.h"

@interface SCNAuthoringEnvironment2 : NSObject {
    NSMutableSet *_selection;
    *__C3DScene _scene;
    SCNNode *_layerRoot;
    SCNNode *_overlayLayerRoot;
    SCNNode *_lightRoot;
    SCNNode *_cameraRoot;
    SCNNode *_particlesRoot;
    SCNNode *_physicsFieldsRoot;
    SCNNode *_cameraTarget;
    SCNNode *_pointsOfViewRoot;
    *__CFDictionary _lightsDictionary;
    *__CFDictionary _camerasDictionary;
    *__CFDictionary _particlesDictionary;
    *__CFDictionary _physicsFieldsDictionary;
    SCNRenderer *_renderer;
    SCNGeometry *_lightGeometry;
    SCNGeometry *_cameraFrustumGeometry;
    SCNGeometry *_cameraOrthographicFrustumGeometry;
    SCNGeometry *_cameraGeometry;
    SCNGeometry *_cameraNearPlaneGeometry;
    SCNGeometry *_particlesGeometry;
    SCNGeometry *_fieldGeometry;
    NSInteger _displayMask;
    UIColor *_paleGreen;
    UIColor *_paleBlue;
    UIColor *_red;
    UIColor *_green;
    UIColor *_blue;
    UIColor *_cyan;
    UIColor *_yellow;
    UIColor *_orange;
    UIColor *_pink;
    UIColor *_grayLight;
    UIColor *_grayMedium;
    UIColor *_grayDark;
    UIColor *_white;
    SCNManipulator *_manipulator;
}


@property (readonly, nonatomic) SCNNode *authoringLayer;
@property (readonly, nonatomic) SCNNode *authoringOverlayLayer;
@property NSInteger displayMask;
@property (readonly, nonatomic) SCNManipulator *manipulator;


+(id)authoringEnvironmentForScene:(id)arg0 ;
+(id)authoringEnvironmentForScene:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(BOOL)didTapAtPoint:(struct CGPoint )arg0 ;
-(id)authoringCamera:(NSInteger)arg0 ;
-(id)authoringCameraNodes;
-(id)cameraFrustumGeometry;
-(id)cameraGeometry;
-(id)cameraNearPlaneGeometry;
-(id)cameraOrthographicFrustumGeometry;
-(id)fieldGeometry;
-(id)geometryForLightType:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)particlesGeometry;
-(void)_resetLightAuthoringWithContainerNode:(id)arg0 source:(id)arg1 light:(id)arg2 ;
-(void)_updateRootsVisibility;
-(void)addCameraNode:(id)arg0 ;
-(void)addLightNode:(id)arg0 ;
-(void)addNodeToSelection:(id)arg0 ;
-(void)addParticlesNode:(id)arg0 ;
-(void)addPhysicsFieldNode:(id)arg0 ;
-(void)addedNode:(id)arg0 ;
-(void)cancelSelection;
-(void)dealloc;
-(void)prepareScene:(id)arg0 ;
-(void)removeCameraNode:(id)arg0 ;
-(void)removeLightNode:(id)arg0 ;
-(void)removeParticlesNode:(id)arg0 ;
-(void)removePhysicsFieldNode:(id)arg0 ;
-(void)removedNode:(id)arg0 ;
-(void)selectNode:(id)arg0 ;
-(void)selectNodes:(id)arg0 ;
-(void)setAuthoringCamera:(NSInteger)arg0 forView:(id)arg1 ;
-(void)setupParticleMeshEmitter:(id)arg0 authoringNode:(id)arg1 ;
-(void)updateCameraNode:(id)arg0 withSourceNode:(id)arg1 ;
-(void)updateFieldNode:(id)arg0 withSourceNode:(id)arg1 ;
-(void)updateLightNode:(id)arg0 withSourceNode:(id)arg1 ;
-(void)updateLightTypeForNode:(id)arg0 source:(id)arg1 light:(id)arg2 screenspaceScalingFactor:(float)arg3 ;
-(void)updateParticlesNode:(id)arg0 withSourceNode:(id)arg1 ;
-(void)updateWithRenderer:(id)arg0 ;


@end


#endif