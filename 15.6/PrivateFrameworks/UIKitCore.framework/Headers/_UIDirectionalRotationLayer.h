// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDIRECTIONALROTATIONLAYER_H
#define _UIDIRECTIONALROTATIONLAYER_H

@class CALayer;



@interface _UIDirectionalRotationLayer : CALayer {
    CATransform3D _previousTransform;
}


@property (nonatomic, getter=isCounterTransformLayer) BOOL counterTransformLayer; // ivar: _counterTransformLayer
@property (nonatomic, getter=isInverseTransformLayer) BOOL inverseTransformLayer; // ivar: _inverseTransformLayer


-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)setTransform:(struct CATransform3D )arg0 ;


@end


#endif