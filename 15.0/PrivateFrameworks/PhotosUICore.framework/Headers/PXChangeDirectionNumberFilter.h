// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCHANGEDIRECTIONNUMBERFILTER_H
#define PXCHANGEDIRECTIONNUMBERFILTER_H



#import "PXNumberFilter.h"

@interface PXChangeDirectionNumberFilter : PXNumberFilter {
    CGFloat _threshold;
}


@property (nonatomic) CGFloat minimumChange; // ivar: _minimumChange


-(CGFloat)initialOutputForInput:(CGFloat)arg0 ;
-(CGFloat)updatedOutput;
-(id)initWithInput:(CGFloat)arg0 ;


@end


#endif