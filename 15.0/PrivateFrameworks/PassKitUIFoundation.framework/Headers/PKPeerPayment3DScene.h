// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENT3DSCENE_H
#define PKPEERPAYMENT3DSCENE_H

@class SCNScene, SCNNode, SCNMaterial;



@interface PKPeerPayment3DScene : SCNScene {
    ? _currentSkew;
    ? _currentRollPitch;
}


@property (retain, nonatomic) SCNNode *cameraNode; // ivar: _cameraNode
@property ? currentRollPitch;
@property (nonatomic) ? currentRotationMatrix; // ivar: _currentRotationMatrix
@property ? currentSkew;
@property (retain, nonatomic) SCNNode *lightNode; // ivar: _lightNode
@property (retain, nonatomic) SCNNode *textContainerNode; // ivar: _textContainerNode
@property (retain, nonatomic) SCNMaterial *textMaterial; // ivar: _textMaterial


+(id)skewForRollPitch;
+(struct ? )rotationMatrixForRollPitch;


@end


#endif