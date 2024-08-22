// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHEARTRATEQUERYUTILITY_H
#define HKHEARTRATEQUERYUTILITY_H

@class NSDateInterval, NSMutableDictionary;
@protocol OS_dispatch_queue, HKHeartRateQueryHandler;

#import <Foundation/Foundation.h>


@interface HKHeartRateQueryUtility : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (weak, nonatomic) NSObject<HKHeartRateQueryHandler> *queryHandler; // ivar: _queryHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (retain, nonatomic) NSMutableDictionary *sampleResults; // ivar: _sampleResults
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


+(id)_minMaxStatisticsFromChartPoints:(id)arg0 dateInterval:(id)arg1 ;
+(id)_orderedDisplayTypeContextResults:(id)arg0 ;
+(void)enumerateDisplayTypeContextsWithBlock:(id)arg0 ;
-(id)initWithQueryHandler:(id)arg0 dateInterval:(id)arg1 timeScope:(NSInteger)arg2 resultsHandler:(id)arg3 ;
-(void)setupQueries;


@end


#endif