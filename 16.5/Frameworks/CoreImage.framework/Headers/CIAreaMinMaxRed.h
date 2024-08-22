// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIAREAMINMAXRED_H
#define CIAREAMINMAXRED_H



#import "CIAreaReductionFilter.h"

@interface CIAreaMinMaxRed : CIAreaReductionFilter



+(id)customAttributes;
-(id)_reduce1X4;
-(id)_reduce2X2;
-(id)_reduce4X1;
-(id)_reduce4x4;
-(id)_reduceCrop;


@end


#endif