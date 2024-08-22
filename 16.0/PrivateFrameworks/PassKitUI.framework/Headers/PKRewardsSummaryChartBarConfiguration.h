// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREWARDSSUMMARYCHARTBARCONFIGURATION_H
#define PKREWARDSSUMMARYCHARTBARCONFIGURATION_H

@class NSArray, NSString, PKAccountRewardsTierSummary;
@protocol PKSegmentedBarConfiguration;

#import <Foundation/Foundation.h>


@interface PKRewardsSummaryChartBarConfiguration : NSObject <PKSegmentedBarConfiguration>

 {
    NSArray *_tierAmounts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKAccountRewardsTierSummary *summary; // ivar: _summary
@property (readonly) Class superclass;


-(BOOL)isReady;
-(CGFloat)totalValue;
-(CGFloat)valueForSegmentAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfSegments;
-(NSUInteger)_rewardsTierForIndex:(NSInteger)arg0 ;
-(id)_valueAtIndex:(NSInteger)arg0 ;
-(id)colorForSegmentAtIndex:(NSInteger)arg0 ;
-(id)initWithSummary:(id)arg0 ;


@end


#endif