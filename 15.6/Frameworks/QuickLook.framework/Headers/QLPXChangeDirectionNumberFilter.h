// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPXCHANGEDIRECTIONNUMBERFILTER_H
#define QLPXCHANGEDIRECTIONNUMBERFILTER_H



#import "QLPXNumberFilter.h"

@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter {
    CGFloat _threshold;
}


@property (nonatomic) CGFloat minimumChange; // ivar: _minimumChange


-(CGFloat)initialOutputForInput:(CGFloat)arg0 ;
-(CGFloat)updatedOutput;
-(id)initWithInput:(CGFloat)arg0 ;


@end


#endif