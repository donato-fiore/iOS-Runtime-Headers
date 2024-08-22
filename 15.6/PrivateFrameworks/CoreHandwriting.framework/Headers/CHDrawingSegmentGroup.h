// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDRAWINGSEGMENTGROUP_H
#define CHDRAWINGSEGMENTGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CHDrawingSegmentGroup : NSObject

@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) NSInteger segmentGroupIndex; // ivar: _segmentGroupIndex
@property (readonly, nonatomic) NSArray *segments; // ivar: _segments
@property (readonly, nonatomic) NSInteger totalSegmentCount;


-(id)initWithSegmentGroupIndex:(NSInteger)arg0 segments:(id)arg1 ;


@end


#endif