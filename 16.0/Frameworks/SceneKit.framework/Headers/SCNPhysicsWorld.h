// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNPHYSICSWORLD_H
#define SCNPHYSICSWORLD_H

@class NSMutableArray, NSArray, NSMutableSet, NSString;
@protocol SCNTransactionCommandObject, NSSecureCoding, SCNPhysicsContactDelegate;

#import <Foundation/Foundation.h>

#import "SCNPhysicsContact.h"
#import "SCNScene.h"

@interface SCNPhysicsWorld : NSObject <SCNTransactionCommandObject, NSSecureCoding>

 {
    *void _world;
    *btOverlappingPairCallback _ghostPairCallback;
    *btVehicleRaycaster _vehicleRayCaster;
    *btC3DDebugDraw _debugDrawer;
    c3dAether _aether;
    BOOL _hasActiveFields;
    BOOL _firstSimulationDone;
    id<SCNPhysicsContactDelegate> *_contactDelegate;
    SCNPhysicsContact *_contact;
    SCNScene *_scene;
    SCNVector3 _gravity;
    CGFloat _speed;
    CGFloat _scale;
    CGFloat _timeStep;
    NSMutableArray *_fields;
    CGFloat _elapsedTime;
    NSMutableArray *_behaviors;
    NSArray *_activeBehaviors;
    BOOL _activeBehaviorsValid;
    os_unfair_lock_s _lock;
    NSMutableSet *_bodies;
}


@property (readonly, nonatomic) NSArray *allBehaviors;
@property (weak) NSObject<SCNPhysicsContactDelegate> *contactDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SCNVector3 gravity;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat speed;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeStep;


+(BOOL)supportsSecureCoding;
-(*void)_aetherHandle;
-(*void)_handle;
-(?)addPhysicsBody:(?)arg0 nodeRef:(?)arg1 colGroup:(?)arg2 colMaskcolTest;
-(BOOL)_isDefault;
-(BOOL)_needsRedraw;
-(BOOL)parseSpecialKey:(id)arg0 withPath:(id)arg1 intoDestination:(*id)arg2 ;
-(CGFloat)scale;
-(id)_findFieldAttachedToNode:(id)arg0 ;
-(id)_physicsContact;
-(id)_rayTestWithSegmentFromPoint:(struct btVector3 )arg0 toPoint:(struct btVector3 )arg1 options:(id)arg2 ;
-(id)contactTestBetweenBody:(id)arg0 andBody:(id)arg1 options:(id)arg2 ;
-(id)contactTestWithBody:(id)arg0 options:(id)arg1 ;
-(id)convexSweepTestWithShape:(id)arg0 fromTransform:(struct SCNMatrix4 )arg1 toTransform:(struct SCNMatrix4 )arg2 options:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)objectInAllBehaviorsAtIndex:(NSUInteger)arg0 ;
-(id)rayTestWithSegmentFromPoint:(struct SCNVector3 )arg0 toPoint:(struct SCNVector3 )arg1 options:(id)arg2 ;
-(id)scene;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct btVehicleRaycaster *)_defaultVehicleRayCaster;
-(void)_addFieldToWorld:(id)arg0 ;
-(void)_allowGhostObjects;
-(void)_createDynamicWorldIfNeeded;
-(void)_customDecodingOfSCNPhysicsWorld:(id)arg0 ;
-(void)_customEncodingOfSCNPhysicsWorld:(id)arg0 ;
-(void)_didDecodeSCNPhysicsWorld:(id)arg0 ;
-(void)_drawDebugInAuthoringEnvironment:(*void)arg0 ;
-(void)_postCommandWithBlock:(id)arg0 ;
-(void)_preTick:(CGFloat)arg0 ;
-(void)_removeFieldFromWorld:(id)arg0 ;
-(void)_reset;
-(void)_step:(CGFloat)arg0 ;
-(void)_updatePhysicsFieldsTransforms;
-(void)addBehavior:(id)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateBodiesUsingBlock:(id)arg0 ;
-(void)removeAllBehaviors;
-(void)removeBehavior:(id)arg0 ;
-(void)removePhysicsBody:(id)arg0 handle:(*void)arg1 ;
-(void)sceneWillDie;
-(void)setScale:(CGFloat)arg0 ;
-(void)setScene:(id)arg0 ;
-(void)updateCollisionPairs;
-(void)wakeUpAllBodies;


@end


#endif