// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSCENE_H
#define SKSCENE_H

@class NSMapTable, NSMutableArray, AVAudioEngine, PKPhysicsWorld, AVAudioEnvironmentNode, UIColor;
@protocol SKSceneDelegate;


#import "SKEffectNode.h"
#import "SKPhysicsBody.h"
#import "SKNode.h"
#import "SKCameraNode.h"
#import "SKPhysicsWorld.h"
#import "SKView.h"

@interface SKScene : SKEffectNode {
    CGFloat _lastUpdate;
    CGFloat _pausedTime;
    NSMapTable *_touchMap;
    NSMutableArray *_allChildenWithConstraints;
    CGRect _bounds;
    BOOL _isSetup;
    BOOL _usesExplicitUpdate;
    BOOL _usesExplicitRender;
    SKPhysicsBody *_scenePinBody;
    id *_view;
    *void _skcSceneNode;
    SKNode *_listener;
    AVAudioEngine *_audioEngine;
}


@property BOOL _needsRender; // ivar: __needsRender
@property BOOL _needsUpdate; // ivar: __needsUpdate
@property (retain, nonatomic) PKPhysicsWorld *_pkPhysicsWorld; // ivar: __pkPhysicsWorld
@property BOOL _usesExplicitRender;
@property BOOL _usesExplicitUpdate;
@property (nonatomic) CGPoint anchorPoint;
@property (readonly, retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioEnvironmentNode *avAudioEnvironmentNode; // ivar: _avAudioEnvironmentNode
@property (retain, nonatomic) UIColor *backgroundColor;
@property (weak, nonatomic) SKCameraNode *camera; // ivar: _camera
@property (weak, nonatomic) NSObject<SKSceneDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) SKNode *listener;
@property (readonly, nonatomic) SKPhysicsWorld *physicsWorld; // ivar: _physicsWorld
@property (nonatomic) NSInteger scaleMode;
@property (nonatomic) CGSize size;
@property (readonly, weak, nonatomic) SKView *view;
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (nonatomic) CGPoint visibleRectCenter;
@property (nonatomic) CGSize visibleRectSize;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(id)sceneWithContentsOfFile:(id)arg0 ;
+(id)sceneWithContentsOfFile:(id)arg0 size:(struct CGSize )arg1 ;
+(id)sceneWithSize:(struct CGSize )arg0 ;
-(*void)_makeBackingNode;
-(BOOL)_hasConstraints;
-(BOOL)_isDirty;
-(BOOL)isEqualToNode:(id)arg0 ;
-(CGFloat)xScale;
-(CGFloat)yScale;
-(CGFloat)zPosition;
-(CGFloat)zRotation;
-(id)_getFocusNodes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)parentFocusEnvironment;
-(struct CGPoint )convertPointFromParent:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointFromView:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointToParent:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointToView:(struct CGPoint )arg0 ;
-(struct CGPoint )position;
-(struct CGRect )frame;
-(void)_didMakeBackingNode;
-(void)_didMoveToView:(id)arg0 ;
-(void)_notifyNextDirtyState;
-(void)_registerConstraintsForNode:(id)arg0 ;
-(void)_removeConstraintsForNode:(id)arg0 ;
-(void)_setBackgroundContentsWithBuffer:(struct __CVBuffer *)arg0 ;
-(void)_setDirty;
-(void)_setNeedsRender;
-(void)_setNeedsUpdate;
-(void)_update:(CGFloat)arg0 ;
-(void)_willMoveFromView:(id)arg0 ;
-(void)checkAudioEngine;
-(void)dealloc;
-(void)didApplyConstraints;
-(void)didChangeSize:(struct CGSize )arg0 ;
-(void)didContinueContact:(id)arg0 ;
-(void)didEvaluateActions;
-(void)didFinishUpdate;
-(void)didMoveToView:(id)arg0 ;
-(void)didSimulatePhysics;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAVAudioEngineInterruption:(id)arg0 ;
-(void)sceneDidLoad;
-(void)setPaused:(BOOL)arg0 ;
-(void)setPosition:(struct CGPoint )arg0 ;
-(void)setScale:(CGFloat)arg0 ;
-(void)setXScale:(CGFloat)arg0 ;
-(void)setYScale:(CGFloat)arg0 ;
-(void)setZPosition:(CGFloat)arg0 ;
-(void)setZRotation:(CGFloat)arg0 ;
-(void)set_anchorPoint:(struct CGPoint )arg0 ;
-(void)update:(CGFloat)arg0 ;
-(void)willMoveFromView:(id)arg0 ;
-(void)willRenderContent;


@end


#endif