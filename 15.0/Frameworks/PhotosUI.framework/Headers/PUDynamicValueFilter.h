// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUDYNAMICVALUEFILTER_H
#define PUDYNAMICVALUEFILTER_H



#import "PUValueFilter.h"

@interface PUDynamicValueFilter : PUValueFilter

@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) CGFloat targetValue; // ivar: _targetValue


-(CGFloat)outputValue;
-(CGFloat)outputValueChangeRate;
-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 timeInterval:(CGFloat)arg2 ;
-(id)init;
-(void)_update;
-(void)setInputValue:(CGFloat)arg0 ;


@end


#endif