// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTERVALTRACKEDFLOWCOUNTS_H
#define INTERVALTRACKEDFLOWCOUNTS_H



#import "TrackedFlowCounts.h"

@interface IntervalTrackedFlowCounts : TrackedFlowCounts

@property (nonatomic) NSUInteger numBlemishedFlows; // ivar: _numBlemishedFlows
@property (nonatomic) NSUInteger numUnblemishedFlows; // ivar: _numUnblemishedFlows
@property (nonatomic) NSUInteger timestampSeconds; // ivar: _timestampSeconds


-(id)description;
-(void)addFlowCounts:(id)arg0 ;
-(void)addIntervalFlowCounts:(id)arg0 ;
-(void)subtractFlowCounts:(id)arg0 ;
-(void)subtractIntervalFlowCounts:(id)arg0 ;


@end


#endif