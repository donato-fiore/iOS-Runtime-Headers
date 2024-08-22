// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTICKSTYLE_H
#define HKTICKSTYLE_H



#import "HKStrokeStyle.h"

@interface HKTickStyle : HKStrokeStyle

@property (nonatomic) BOOL shouldRenderMajorTickMarks; // ivar: _shouldRenderMajorTickMarks
@property (nonatomic) NSInteger tickDirection; // ivar: _tickDirection
@property (nonatomic) CGFloat tickLength; // ivar: _tickLength


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif