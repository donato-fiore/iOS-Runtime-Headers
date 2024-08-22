// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCADJACENTFLOWANALYZER_H
#define HKMCADJACENTFLOWANALYZER_H


#import <Foundation/Foundation.h>


@interface HKMCAdjacentFlowAnalyzer : NSObject {
    NSInteger _futureFlowDay;
    NSInteger _pastFlowDay;
}


@property (readonly, nonatomic) NSInteger flowDayIndex; // ivar: _flowDayIndex
@property (readonly, nonatomic, getter=isUnsuitableForRange) BOOL unsuitableForRange; // ivar: _unsuitableForRange


-(id)initWithFlowDayIndex:(NSInteger)arg0 ;
-(void)addNextAscendingDay:(id)arg0 shouldStop:(*BOOL)arg1 ;
-(void)addNextDescendingDay:(id)arg0 shouldStop:(*BOOL)arg1 ;


@end


#endif