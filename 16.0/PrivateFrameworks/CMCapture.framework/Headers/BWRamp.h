// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWRAMP_H
#define BWRAMP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BWRamp : NSObject {
    NSString *_name;
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
-(float)updateRampForNextIteration;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)startRampFrom:(float)arg0 to:(float)arg1 iterations:(int)arg2 shape:(int)arg3 ;
-(void)startRampFrom:(float)arg0 to:(float)arg1 iterations:(int)arg2 shape:(int)arg3 exponentialConvergenceFraction:(float)arg4 ;


@end


#endif