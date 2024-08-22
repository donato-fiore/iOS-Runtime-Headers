// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNNODE_H
#define SCNNODE_H

@class NSMutableArray, NSMutableDictionary, NSString, NSArray, UIFocusEffect, UIView;
@protocol SCNTransactionCommandObject, NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume, UIFocusItem, UIFocusItemContainer, UIFocusEnvironment, SCNNodeRendererDelegate;

#import <Foundation/Foundation.h>

#import "SCNNode.h"
#import "SCNNodeComponent.h"
#import "SCNOrderedDictionary.h"
#import "SCNCamera.h"
#import "SCNGeometry.h"
#import "SCNLight.h"
#import "SCNMorpher.h"
#import "SCNPhysicsBody.h"
#import "SCNPhysicsField.h"
#import "SCNSkinner.h"

@interface SCNNode : NSObject <SCNTransactionCommandObject, NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume, UIFocusItem>

 {
    ? _node;
    SCNNode *_parent;
    NSMutableArray *_childNodes;
    SCNNode *_presentationInstance;
    BOOL _isPresentationInstance;
    BOOL _lightLoaded;
    BOOL _geometryLoaded;
    BOOL _cameraLoaded;
    BOOL _skinnerLoaded;
    BOOL _morpherLoaded;
    BOOL _paused;
    BOOL _pausedByInheritance;
    BOOL _affineUpToDate;
    BOOL _transformUpToDate;
    BOOL _hasPivot;
    BOOL _isJoint;
    BOOL _rotationRepresentation;
    BOOL _movability;
    BOOL _hidden;
    BOOL _castsShadow;
    BOOL _ignoreAnimationWhenCopying_tmp;
    BOOL _focusBehavior;
    BOOL _isFocusableOrHasFocusableChild;
    BOOL _authoringEnvironmentNode;
    BOOL _hasComponentBitmask;
    ? _transform;
    ? _position;
    ? _rotation;
    ? _scale;
    float _opacity;
    NSUInteger _categoryBitMask;
    NSInteger _renderingOrder;
    SCNNodeComponent *_components;
    SCNOrderedDictionary *_actions;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    *SCNVector3 _fixedBoundingBoxExtrema;
    NSString *_name;
    NSMutableDictionary *_valueForKey;
    os_unfair_lock_s _valueForKeyLock;
    id *_rendererDelegate;
}


@property (readonly, nonatomic) NSArray *actionKeys;
@property (readonly) NSArray *animationKeys;
@property (nonatomic) NSInteger authoringCameraType;
@property (retain, nonatomic) SCNCamera *camera;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (nonatomic) BOOL castsShadow;
@property (nonatomic) NSUInteger categoryBitMask;
@property (readonly, nonatomic) NSArray *childNodes;
@property (copy) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SCNVector3 eulerAngles;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) NSInteger focusBehavior;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSInteger focusGroupPriority;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, nonatomic) CGRect frame;
@property (retain, nonatomic) SCNGeometry *geometry;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (retain, nonatomic) SCNLight *light;
@property (retain, nonatomic) SCNMorpher *morpher;
@property (nonatomic) NSInteger movabilityHint;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat opacity;
@property (nonatomic) SCNVector4 orientation;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, nonatomic) SCNNode *parentNode;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) SCNPhysicsBody *physicsBody;
@property (retain, nonatomic) SCNPhysicsField *physicsField;
@property (nonatomic) SCNMatrix4 pivot;
@property (nonatomic) SCNVector3 position;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) SCNNode *presentationNode;
@property (nonatomic) NSObject<SCNNodeRendererDelegate> *rendererDelegate;
@property (nonatomic) NSInteger renderingOrder;
@property (nonatomic) SCNVector4 rotation;
@property (nonatomic) SCNVector3 scale;
@property ? simdEulerAngles;
@property (nonatomic) ? simdOrientation;
@property (nonatomic) ? simdPivot;
@property ? simdPosition;
@property ? simdRotation;
@property ? simdScale;
@property (nonatomic) ? simdTransform;
@property ? simdWorldFront;
@property (nonatomic) ? simdWorldOrientation;
@property ? simdWorldPosition;
@property ? simdWorldRight;
@property (nonatomic) ? simdWorldTransform;
@property ? simdWorldUp;
@property (retain, nonatomic) SCNSkinner *skinner;
@property (readonly) Class superclass;
@property (nonatomic) SCNMatrix4 transform;
@property (readonly, nonatomic) SCNVector3 worldFront;
@property (nonatomic) SCNVector4 worldOrientation;
@property (nonatomic) SCNVector3 worldPosition;
@property (readonly, nonatomic) SCNVector3 worldRight;
@property (readonly, nonatomic) SCNMatrix4 worldTransform;
@property (readonly, nonatomic) SCNVector3 worldUp;


+(?)nodeWithNodeRef;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(id)_dumpNodeTree:(id)arg0 tab:(id)arg1 ;
+(id)nodeWithGeometry:(id)arg0 ;
+(id)nodeWithMDLObject:(id)arg0 ;
-(?)initPresentationNodeWithNodeRef;
-(?)initWithNodeRef;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
// -(BOOL)_childNodesPassingTest:(id)arg0 recursively:(unk)arg1 output:(BOOL)arg2  ;
-(BOOL)_enumerateChildNodesUsingBlock:(id)arg0 ;
-(BOOL)canAddChildNode:(id)arg0 ;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(BOOL)getFrustum:(struct ? *)arg0 withViewport;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)parseSpecialKey:(id)arg0 withPath:(id)arg1 intoDestination:(*id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)simdGetBoundingSphereCenter:(**float)arg0 radius;
-(NSUInteger)indexOfChildNode:(id)arg0 ;
-(id)_findComponentWithType:(NSInteger)arg0 ;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_subdividedCopyWithSubdivisionLevel:(NSInteger)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)attributeForKey:(id)arg0 ;
-(id)childNodeWithName:(id)arg0 ;
-(id)childNodeWithName:(id)arg0 recursively:(BOOL)arg1 ;
-(id)childNodesPassingTest:(id)arg0 ;
// -(id)childNodesPassingTest:(id)arg0 recursively:(unk)arg1  ;
-(id)childNodesWithAttribute:(Class)arg0 recursively:(BOOL)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hitTestWithSegmentFromPoint:(struct SCNVector3 )arg0 toPoint:(struct SCNVector3 )arg1 options:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsChildNodesWithAttribute:(id)arg0 ;
-(id)objectInAudioPlayersAtIndex:(NSUInteger)arg0 ;
-(id)objectInChildNodesAtIndex:(NSUInteger)arg0 ;
-(id)objectInChildNodesWithAttribute:(id)arg0 firstOnly:(BOOL)arg1 ;
-(id)objectInChildNodesWithName:(id)arg0 ;
-(id)objectInParticleSystemsAtIndex:(NSUInteger)arg0 ;
-(id)simdConvertPositionfromNode;
-(id)simdConvertPositiontoNode;
-(id)simdConvertVectorfromNode;
-(id)simdConvertVectortoNode;
-(id)valueForKeyPath:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct ? )simdConvertTransform:(struct ? )arg0 fromNode:(id)arg1 ;
-(struct ? )simdConvertTransform:(struct ? )arg0 toNode:(id)arg1 ;
-(struct SCNMatrix4 )convertTransform:(struct SCNMatrix4 )arg0 fromNode:(id)arg1 ;
-(struct SCNMatrix4 )convertTransform:(struct SCNMatrix4 )arg0 toNode:(id)arg1 ;
-(struct SCNVector3 )convertPosition:(struct SCNVector3 )arg0 fromNode:(id)arg1 ;
-(struct SCNVector3 )convertPosition:(struct SCNVector3 )arg0 toNode:(id)arg1 ;
-(struct SCNVector3 )convertVector:(struct SCNVector3 )arg0 fromNode:(id)arg1 ;
-(struct SCNVector3 )convertVector:(struct SCNVector3 )arg0 toNode:(id)arg1 ;
-(void)__insertObject:(id)arg0 inChildNodesAtIndex:(NSUInteger)arg1 ;
-(void)__removeObjectFromChildNodesAtIndex:(NSUInteger)arg0 ;
-(void)_addSkinnerWithMDLMesh:(id)arg0 sceneNodes:(id)arg1 ;
-(void)_assignComponent:(id)arg0 toContainerWithType:(NSInteger)arg1 ;
// -(void)_bakeNodes:(id)arg0 folderPath:(id)arg1 inVertex:(BOOL)arg2 bakeAO:(BOOL)arg3 quality:(float)arg4 attenuation:(float)arg5 geomSetter:(id)arg6 terminateSetter:(unk)arg7  ;
-(void)_childNodesWithAttribute:(Class)arg0 output:(id)arg1 recursively:(BOOL)arg2 ;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_customDecodingOfSCNNode:(id)arg0 ;
-(void)_customEncodingOfSCNNode:(id)arg0 usePresentationInstance:(BOOL)arg1 ;
-(void)_didDecodeSCNNode:(id)arg0 ;
-(void)_dump:(id)arg0 ;
-(void)_encodeNodePropertiesWithCoder:(id)arg0 ;
-(void)_focusableCandidates:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_removeAction:(id)arg0 forKey:(id)arg1 ;
-(void)_removeComponentWithType:(NSInteger)arg0 ;
-(void)_removeDeadParticleSystem:(struct __C3DParticleSystem *)arg0 ;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)addAudioPlayer:(id)arg0 ;
-(void)addChildNode:(id)arg0 ;
-(void)addParticleSystem:(id)arg0 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateChildNodesUsingBlock:(id)arg0 ;
-(void)enumerateHierarchyUsingBlock:(id)arg0 ;
-(void)enumerateNodesUsingBlock:(id)arg0 ;
-(void)insertChildNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 inAudioPlayersAtIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 inChildNodesAtIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 inParticleSystemsAtIndex:(NSUInteger)arg1 ;
-(void)localRotateBy:(struct SCNVector4 )arg0 ;
-(void)localTranslateBy:(struct SCNVector3 )arg0 ;
-(void)lookAt:(struct SCNVector3 )arg0 ;
-(void)lookAt:(struct SCNVector3 )arg0 up:(struct SCNVector3 )arg1 localFront:(struct SCNVector3 )arg2 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeActionForKey:(id)arg0 ;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)removeAudioPlayer:(id)arg0 ;
-(void)removeObjectFromAudioPlayersAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectFromChildNodesAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectFromParticleSystemsAtIndex:(NSUInteger)arg0 ;
-(void)removeParticleSystem:(id)arg0 ;
-(void)renderInContext:(*void)arg0 ;
-(void)replaceChildNode:(id)arg0 with:(id)arg1 ;
-(void)replaceObjectInAudioPlayerAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectInChildNodesAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectInParticleSystemsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)rotateBy:(struct SCNVector4 )arg0 aroundTarget:(struct SCNVector3 )arg1 ;
-(void)runAction:(id)arg0 ;
-(void)runAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)runAction:(id)arg0 forKey:(id)arg1 ;
-(void)runAction:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)simdLocalRotateBy:(struct ? )arg0 ;
-(void)simdLocalTranslateBy;
-(void)simdLookAt;
-(void)simdLookAtuplocalFront;
-(void)simdRotateBy:(struct ? )arg0 aroundTarget;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif