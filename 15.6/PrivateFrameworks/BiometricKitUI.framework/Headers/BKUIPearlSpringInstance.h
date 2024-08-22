// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIPEARLSPRINGINSTANCE_H
#define BKUIPEARLSPRINGINSTANCE_H


#import <Foundation/Foundation.h>


@interface BKUIPearlSpringInstance : NSObject {
    FLSpring" springs;
    ? _value;
    ? _matrix;
    ? _initialMatrix;
    ? _color;
    float _alphaFactor;
    float _alphaDecay;
    float _scale;
    float _scaleDest;
    ? _target;
}


@property NSUInteger axisOrientation; // ivar: _axisOrientation
@property (nonatomic) BOOL grayscale; // ivar: _grayscale
@property (nonatomic) NSUInteger springState; // ivar: _springState
@property ? target;
@property ? value;


-(id)initWithInitialRotationcolor;
-(struct ? )createAxisRotationMatrix;
-(void)step:(CGFloat)arg0 ;


@end


#endif