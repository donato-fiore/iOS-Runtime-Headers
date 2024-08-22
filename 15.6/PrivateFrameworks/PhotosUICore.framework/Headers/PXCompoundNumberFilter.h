// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCOMPOUNDNUMBERFILTER_H
#define PXCOMPOUNDNUMBERFILTER_H

@class NSArray;


#import "PXNumberFilter.h"

@interface PXCompoundNumberFilter : PXNumberFilter

@property (copy, nonatomic) NSArray *filters; // ivar: _filters


-(CGFloat)updatedOutput;


@end


#endif