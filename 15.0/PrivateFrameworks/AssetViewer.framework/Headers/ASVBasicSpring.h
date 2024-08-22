// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVBASICSPRING_H
#define ASVBASICSPRING_H


#import <Foundation/Foundation.h>


@interface ASVBasicSpring : NSObject {
    float _target;
    float _velocity;
    float _position;
}


@property (nonatomic) float friction; // ivar: _friction
@property (nonatomic) float input;
@property (readonly, nonatomic) float output;
@property (nonatomic) float tension; // ivar: _tension


-(id)initWithTension:(float)arg0 friction:(float)arg1 ;
-(void)stepWithDeltaTime:(CGFloat)arg0 ;


@end


#endif