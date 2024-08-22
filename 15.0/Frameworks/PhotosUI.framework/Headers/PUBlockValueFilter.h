// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBLOCKVALUEFILTER_H
#define PUBLOCKVALUEFILTER_H



#import "PUValueFilter.h"

@interface PUBlockValueFilter : PUValueFilter

@property (copy, nonatomic) id *operationBlock; // ivar: _operationBlock


-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 ;


@end


#endif