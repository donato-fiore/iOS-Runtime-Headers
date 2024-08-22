// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNPHYSICSCHARACTER_H
#define SCNPHYSICSCHARACTER_H



#import "SCNPhysicsBehavior.h"
#import "SCNPhysicsWorld.h"

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {
    ? _definition;
    *btCharacterControllerInterface _characterController;
    *void _ghostObject;
    *btOverlapFilterCallback _filterCallback;
    *btCapsuleShape _capsuleShape;
    SCNPhysicsWorld *_world;
}


@property (nonatomic) CGFloat jumpSpeed;
@property (nonatomic) CGFloat velocity;


-(BOOL)canJump;
-(id)initWithCharacter:(id)arg0 ;
-(void)_addToPhysicsWorld:(id)arg0 definition:(struct ? )arg1 ;
-(void)_copyDefinition:(struct ? *)arg0 ;
-(void)_handleCreateIfNeeded:(BOOL)arg0 ;
-(void)_update;
-(void)_willRemoveFromPhysicsWorld:(id)arg0 ;
-(void)dealloc;
-(void)jump;
-(void)setWalkingDirection:(struct SCNVector3 )arg0 ;


@end


#endif