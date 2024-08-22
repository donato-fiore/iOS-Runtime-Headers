// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNPHYSICSCONTACT_H
#define SCNPHYSICSCONTACT_H


#import <Foundation/Foundation.h>

#import "SCNNode.h"

@interface SCNPhysicsContact : NSObject {
    SCNNode *_nodeA;
    SCNNode *_nodeB;
    SCNVector3 _contactPoint;
    SCNVector3 _contactNormal;
    CGFloat _collisionImpulse;
    CGFloat _distance;
    CGFloat _fraction;
    NSInteger _updateCount;
}


@property (readonly, nonatomic) CGFloat collisionImpulse;
@property (readonly, nonatomic) SCNVector3 contactNormal;
@property (readonly, nonatomic) SCNVector3 contactPoint;
@property (readonly, nonatomic) SCNNode *nodeA;
@property (readonly, nonatomic) SCNNode *nodeB;
@property (readonly, nonatomic) CGFloat penetrationDistance;
@property (readonly, nonatomic) CGFloat sweepTestFraction;


+(?)_contactWithManifoldindex;
-(BOOL)_shouldPostUpdate;
-(id)description;
-(void)_fillNodeA:(id)arg0 nodeB:(id)arg1 ;
-(void)_fillNodeA:(id)arg0 nodeB:(id)arg1 contactPoint:(struct SCNVector3 )arg2 collisionImpulse:(struct SCNVector3 )arg3 distance:(CGFloat)arg4 hitFraction:(CGFloat)arg5 ;
-(void)_prepareUpdate;
-(void)_updateWithManifold:(struct btPersistentManifold *)arg0 index:(NSInteger)arg1 point:(struct btManifoldPoint *)arg2 ;
-(void)dealloc;


@end


#endif