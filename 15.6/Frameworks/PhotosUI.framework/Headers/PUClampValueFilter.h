// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCLAMPVALUEFILTER_H
#define PUCLAMPVALUEFILTER_H



#import "PUValueFilter.h"

@interface PUClampValueFilter : PUValueFilter

@property (nonatomic) CGFloat maximumValue; // ivar: _maximumValue
@property (nonatomic) CGFloat minimumValue; // ivar: _minimumValue


-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 ;


@end


#endif