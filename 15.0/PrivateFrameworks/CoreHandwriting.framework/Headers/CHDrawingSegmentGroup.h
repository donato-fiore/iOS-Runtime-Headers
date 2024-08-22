// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDRAWINGSEGMENTGROUP_H
#define CHDRAWINGSEGMENTGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CHDrawingSegmentGroup : NSObject

@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) NSArray *delayedSegments; // ivar: _delayedSegments
@property (readonly, nonatomic) NSInteger segmentGroupIndex; // ivar: _segmentGroupIndex
@property (readonly, nonatomic) NSArray *segments; // ivar: _segments
@property (readonly, nonatomic) NSInteger totalSegmentCount;


+(id)segmentGroupsFromSegments:(id)arg0 delayedSegments:(id)arg1 segmentGroupRanges:(id)arg2 ;
-(id)initWithSegmentGroupIndex:(NSInteger)arg0 segments:(id)arg1 delayedSegments:(id)arg2 ;
-(void)dealloc;


@end


#endif