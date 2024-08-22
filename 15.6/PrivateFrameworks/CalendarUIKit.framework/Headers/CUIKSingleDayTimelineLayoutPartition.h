// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKSINGLEDAYTIMELINELAYOUTPARTITION_H
#define CUIKSINGLEDAYTIMELINELAYOUTPARTITION_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface CUIKSingleDayTimelineLayoutPartition : NSObject {
    NSMutableArray *_stackOfOccurrences;
}


@property (nonatomic) CGFloat endBoundary; // ivar: _endBoundary
@property (readonly, nonatomic) CGFloat freeSpaceStartBoundary;
@property (readonly, nonatomic) CGFloat freeSpaceWidth;
@property (nonatomic) CGFloat initialStartBoundary; // ivar: _initialStartBoundary
@property (readonly, nonatomic) NSArray *stackedOccurrences;
@property (nonatomic) CGFloat topBoundaryTime; // ivar: _topBoundaryTime
@property (readonly, nonatomic) CGFloat totalWidth;


-(id)description;
-(id)init;
-(id)peekOccurrence;
-(void)popOccurrence;
-(void)pushOccurrence:(id)arg0 ;


@end


#endif