// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZPERSON3DSCNSCENEBUILDER_H
#define OZPERSON3DSCNSCENEBUILDER_H

@class SCNNode;

#import <Foundation/Foundation.h>


@interface OZPerson3DSCNSceneBuilder : NSObject {
    map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>> _jointNodeMap;
    map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>> _limbNodeMap;
    NSUInteger _geometryMode;
    SCNNode *_rootNode;
}




-(id)getRootNode;
-(id)initWithName:(id)arg0 ;
-(id)newNodeForJoint:(NSUInteger)arg0 ;
-(id)newNodeForLimb:(NSUInteger)arg0 ;
-(id)newRoundCylinderForRoot;
-(struct ? )defaultTransform:(NSUInteger)arg0 ;
-(struct SCNMatrix4Pair )getJointTransformsForLimb:(NSUInteger)arg0 ;
-(void)addNode:(id)arg0 joint:(NSUInteger)arg1 node:(id)arg2 ;
-(void)addNode:(id)arg0 limb:(NSUInteger)arg1 node:(id)arg2 ;
-(void)buildPersonGeometry:(id)arg0 ;
-(void)enablePhysics:(BOOL)arg0 ;
-(void)runOnAllBodyGeometry:(id)arg0 ;
-(void)setFriction:(float)arg0 ;
-(void)setMass:(float)arg0 ;
-(void)setOpacity:(float)arg0 ;
-(void)setTransform:(struct ? )arg0 forJoint:(NSUInteger)arg1 ;
-(void)setTransform:(struct ? )arg0 node:(id)arg1 ;
-(void)updateConeLimbGeometry:(id)arg0 upperRadius:(float)arg1 lowerRadius:(float)arg2 length:(float)arg3 ;
-(void)updateCylinderLimbGeometry:(id)arg0 length:(float)arg1 ;
-(void)updateGeometry;
-(void)updateSimpleGeometry:(float)arg0 ;


@end


#endif