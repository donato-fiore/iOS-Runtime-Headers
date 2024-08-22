// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCHANGEDIRECTIONVALUEFILTER_H
#define PUCHANGEDIRECTIONVALUEFILTER_H



#import "PUValueFilter.h"

@interface PUChangeDirectionValueFilter : PUValueFilter {
    CGFloat _threshold;
}


@property (nonatomic) CGFloat minimumChangeValue; // ivar: _minimumChangeValue


-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 ;


@end


#endif