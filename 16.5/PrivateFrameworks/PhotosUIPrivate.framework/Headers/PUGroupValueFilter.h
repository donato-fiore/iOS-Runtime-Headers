// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUGROUPVALUEFILTER_H
#define PUGROUPVALUEFILTER_H

@class NSArray;


#import "PUValueFilter.h"

@interface PUGroupValueFilter : PUValueFilter

@property (copy, nonatomic) NSArray *filters; // ivar: _filters


-(CGFloat)outputValue;
-(void)setInputValue:(CGFloat)arg0 ;


@end


#endif