// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWRAMP_H
#define BWRAMP_H


#import <Foundation/Foundation.h>


@interface BWRamp : NSObject {
    int _currentIteration;
    float _startValue;
    float _targetValue;
    int _durationInIterations;
    int _shape;
    float _exponentialConvergenceFraction;
    float _exponentialSnapFraction;
}


@property (readonly, nonatomic) float currentValue; // ivar: _currentValue
@property (readonly, nonatomic) BOOL isRamping; // ivar: _isRamping
@property (readonly, nonatomic) BOOL isRampingUp; // ivar: _isRampingUp


+(void)initialize;
-(float)updateRampForNexIteration;
-(id)init;
-(void)startRampFrom:(float)arg0 to:(float)arg1 iterations:(int)arg2 shape:(int)arg3 ;
-(void)startRampFrom:(float)arg0 to:(float)arg1 iterations:(int)arg2 shape:(int)arg3 exponentialConvergenceFraction:(float)arg4 ;


@end


#endif