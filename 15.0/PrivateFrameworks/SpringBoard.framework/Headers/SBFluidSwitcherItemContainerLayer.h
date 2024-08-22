// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERITEMCONTAINERLAYER_H
#define SBFLUIDSWITCHERITEMCONTAINERLAYER_H

@class CALayer;



@interface SBFluidSwitcherItemContainerLayer : CALayer {
    CGPoint _previousPosition;
    CATransform3D _previousTransform;
}


@property (nonatomic) BOOL positionAnimationsBeginFromModelState; // ivar: _positionAnimationsBeginFromModelState
@property (nonatomic) BOOL transformAnimationsAreLegacyCounterRotations; // ivar: _transformAnimationsAreLegacyCounterRotations


-(id)init;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)setPosition:(struct CGPoint )arg0 ;
-(void)setTransform:(struct CATransform3D )arg0 ;


@end


#endif