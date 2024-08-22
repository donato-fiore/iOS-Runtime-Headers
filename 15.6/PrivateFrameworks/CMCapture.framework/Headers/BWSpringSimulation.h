// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSPRINGSIMULATION_H
#define BWSPRINGSIMULATION_H


#import <Foundation/Foundation.h>


@interface BWSpringSimulation : NSObject {
    CGFloat _convergedSpeed;
    CGFloat _previousForce;
}


@property (readonly, nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat input; // ivar: _inputValue
@property (readonly, nonatomic) CGFloat output; // ivar: _outputValue
@property (nonatomic) CGFloat tension; // ivar: _tension
@property (readonly, nonatomic) int updateCount; // ivar: _updateCount


+(void)initialize;
-(id)init;
-(void)resetWithInput:(CGFloat)arg0 initialOutput:(CGFloat)arg1 initialVelocity:(CGFloat)arg2 ;
-(void)resetWithInput:(CGFloat)arg0 initialOutput:(CGFloat)arg1 initialVelocity:(CGFloat)arg2 convergedSpeed:(CGFloat)arg3 ;
-(void)update;


@end


#endif