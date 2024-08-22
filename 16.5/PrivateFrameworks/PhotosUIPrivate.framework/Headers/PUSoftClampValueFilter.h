// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSOFTCLAMPVALUEFILTER_H
#define PUSOFTCLAMPVALUEFILTER_H



#import "PUClampValueFilter.h"

@interface PUSoftClampValueFilter : PUClampValueFilter

@property (nonatomic) CGFloat resistance; // ivar: _resistance


+(id)scrollViewFilter;
-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 ;


@end


#endif