// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLPXCOMPOUNDNUMBERFILTER_H
#define QLPXCOMPOUNDNUMBERFILTER_H

@class NSArray;


#import "QLPXNumberFilter.h"

@interface QLPXCompoundNumberFilter : QLPXNumberFilter

@property (copy, nonatomic) NSArray *filters; // ivar: _filters


-(CGFloat)updatedOutput;


@end


#endif