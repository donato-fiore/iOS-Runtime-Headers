// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSTATISTICSENGINE_H
#define WFSTATISTICSENGINE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFStatisticsEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsQueue; // ivar: _statisticsQueue


-(id)init;
-(void)applyOperation:(NSInteger)arg0 onNumbers:(id)arg1 completion:(id)arg2 ;
-(void)applyOperation:(NSInteger)arg0 onStatisticsSampleProviders:(id)arg1 completion:(id)arg2 ;
-(void)asyncApplyNSExpressionFunction:(id)arg0 data:(id)arg1 completion:(id)arg2 ;
-(void)averageOfValues:(id)arg0 completion:(id)arg1 ;
-(void)maximumOfValues:(id)arg0 completion:(id)arg1 ;
-(void)medianOfValues:(id)arg0 completion:(id)arg1 ;
-(void)minimumOfValues:(id)arg0 completion:(id)arg1 ;
-(void)modeOfValues:(id)arg0 completion:(id)arg1 ;
-(void)rangeOfValues:(id)arg0 completion:(id)arg1 ;
-(void)standardDeviationOfValues:(id)arg0 completion:(id)arg1 ;
-(void)sumOfValues:(id)arg0 completion:(id)arg1 ;


@end


#endif