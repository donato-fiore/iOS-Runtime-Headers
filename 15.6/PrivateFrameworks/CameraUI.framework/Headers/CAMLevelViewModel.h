// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMLEVELVIEWMODEL_H
#define CAMLEVELVIEWMODEL_H



#import "CAMObservable.h"

@interface CAMLevelViewModel : CAMObservable

@property (nonatomic, setter=_setDesiredIndicatorMode:) NSInteger _desiredIndicatorMode; // ivar: __desiredIndicatorMode
@property (nonatomic, setter=_setDesiredModeBeganTime:) CGFloat _desiredModeBeganTime; // ivar: __desiredModeBeganTime
@property (nonatomic, setter=_setCurrentIndicatorAlpha:) CGFloat currentIndicatorAlpha; // ivar: _currentIndicatorAlpha
@property (nonatomic, setter=_setCurrentIndicatorMode:) NSInteger currentIndicatorMode; // ivar: _currentIndicatorMode
@property (nonatomic, setter=_setCurrentIndicatorOffset:) UIOffset currentIndicatorOffset; // ivar: _currentIndicatorOffset
@property (nonatomic, setter=_setDesiredUpdateInterval:) CGFloat desiredUpdateInterval; // ivar: _desiredUpdateInterval


-(CGFloat)_hysteresisAlphaForDesiredAlpha:(CGFloat)arg0 fromCurrentAlpha:(CGFloat)arg1 ;
-(NSInteger)_hysteresisModeForDesiredMode:(NSInteger)arg0 ;
-(id)mutableChangeObject;
-(void)_updateFlatModeWithRoll:(float)arg0 pitch:(float)arg1 magnitude:(float)arg2 ;
-(void)_updateModeNone;
-(void)applyDeviceMotion:(id)arg0 ;


@end


#endif