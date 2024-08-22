// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICAUDIOLEVELSMOOTHER_H
#define SUICAUDIOLEVELSMOOTHER_H


#import <Foundation/Foundation.h>


@interface SUICAudioLevelSmoother : NSObject {
    NSInteger _historyLength;
    NSInteger _samplesSinceLastCleared;
    *float _runningPowerLevels;
    unsigned int _powerPointer;
    float _previousLevel;
    float _attackVelocity;
    float _decayVelocity;
}


@property (nonatomic) float attackSpeed; // ivar: _attackSpeed
@property (nonatomic) float baseValue; // ivar: _baseValue
@property (nonatomic) float decaySpeed; // ivar: _decaySpeed
@property (nonatomic) float exponentMultiplier; // ivar: _exponentMultiplier
@property (nonatomic) float maximumPower; // ivar: _maximumPower
@property (nonatomic) float minimumPower; // ivar: _minimumPower
@property (readonly, nonatomic) BOOL usesAttackAndDecaySpeed; // ivar: _usesAttackAndDecaySpeed
@property (readonly, nonatomic) BOOL usesExponentialCurve; // ivar: _usesExponentialCurve


-(float)_updateMedianWithNewValue:(float)arg0 ;
-(float)smoothedLevelForMicPower:(float)arg0 ;
-(id)_initWithHistoryLength:(NSInteger)arg0 ;
-(id)initWithBaseValue:(float)arg0 exponentMultiplier:(float)arg1 historyLength:(NSInteger)arg2 ;
-(id)initWithMinimumPower:(float)arg0 maximumPower:(float)arg1 historyLength:(NSInteger)arg2 ;
-(id)initWithMinimumPower:(float)arg0 maximumPower:(float)arg1 historyLength:(NSInteger)arg2 attackSpeed:(float)arg3 decaySpeed:(float)arg4 ;
-(void)clearHistory;
-(void)dealloc;


@end


#endif