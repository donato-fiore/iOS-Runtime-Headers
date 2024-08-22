// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMAXISMAPPER_H
#define EMAXISMAPPER_H



#import "CMMapper.h"

@interface EMAxisMapper : CMMapper



-(BOOL)centerLabels;
-(BOOL)isLogarithmic;
-(float)maxValue;
-(float)minValue;
-(float)strokeWidth;
-(float)unit;
-(id)label;
-(id)labels;
-(id)position;
-(id)values;
-(struct CGColor *)strokeColor;
-(struct CGColor *)textColor;
-(unsigned int)type;


@end


#endif