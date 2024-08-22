// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKTRANSFORMNODE_H
#define SKTRANSFORMNODE_H



#import "SKNode.h"

@interface SKTransformNode : SKNode {
    *void _skcTransformLayer;
    ? _euler;
}


@property (nonatomic) CGFloat xRotation;
@property (nonatomic) CGFloat yRotation;


-(*void)_makeBackingNode;
-(CGFloat)zRotation;
-(id)eulerAngles;
-(struct ? )quaternion;
-(struct ? )rotationMatrix;
-(void)_didMakeBackingNode;
-(void)setEulerAngles;
-(void)setQuaternion:(struct ? )arg0 ;
-(void)setRotationMatrix:(struct ? )arg0 ;
-(void)setZRotation:(CGFloat)arg0 ;


@end


#endif