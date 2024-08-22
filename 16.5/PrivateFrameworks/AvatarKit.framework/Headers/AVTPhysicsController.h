// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTPHYSICSCONTROLLER_H
#define AVTPHYSICSCONTROLLER_H

@class SCNPhysicsWorld, NSArray;
@protocol AVTPhysicsControllerDelegate;

#import <Foundation/Foundation.h>


@interface AVTPhysicsController : NSObject {
    SCNPhysicsWorld *_physicsWorld;
    NSArray *_physicsRigs;
    BOOL _physicsBehaviorsAreInstalledInPhysicsWorld;
    unsigned int _frameCount;
    BOOL _setupDone;
    BOOL _hasPhysicsStateOverride;
}


@property (weak, nonatomic) NSObject<AVTPhysicsControllerDelegate> *delegate; // ivar: _delegate


-(id)offsetFromRestingPositionForNode:(id)arg0 inCoordinateSpaceOfNode;
-(id)physicsState;
-(void)_setupCollisionNode:(id)arg0 ;
-(void)_setupPhysicsChain:(id)arg0 physicsRigs:(id)arg1 ;
-(void)addToPhysicsWorld:(id)arg0 ;
-(void)applyForcesWithMultiplier:(CGFloat)arg0 ;
-(void)downforcesDidChange;
-(void)installPhysics;
-(void)removeFromPhysicsWorld:(id)arg0 ;
-(void)resetToPhysicsState:(id)arg0 assumeRestStateIfNil:(BOOL)arg1 ;
-(void)setupPhysics;
-(void)setupPhysicsIfNeeded;
-(void)updateAtTime:(CGFloat)arg0 forceMultiplier:(CGFloat)arg1 ;


@end


#endif