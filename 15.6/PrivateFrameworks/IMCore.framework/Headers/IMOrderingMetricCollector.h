// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMORDERINGMETRICCOLLECTOR_H
#define IMORDERINGMETRICCOLLECTOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMOrderingMetricCollector : NSObject

@property (nonatomic) BOOL needToSubmitMetric; // ivar: _needToSubmitMetric
@property (nonatomic) NSUInteger numberOfHistoryQueryOutOfOrder; // ivar: _numberOfHistoryQueryOutOfOrder
@property (nonatomic) NSUInteger numberOfHistoryQueryPlacedCorrectly; // ivar: _numberOfHistoryQueryPlacedCorrectly
@property (nonatomic) NSUInteger numberOfHistoryQuerySeen; // ivar: _numberOfHistoryQuerySeen
@property (nonatomic) NSUInteger numberOfMessagesPlacedCorrectly; // ivar: _numberOfMessagesPlacedCorrectly
@property (nonatomic) NSUInteger numberOfMessagesPlacedOutOfOrder; // ivar: _numberOfMessagesPlacedOutOfOrder
@property (nonatomic) NSUInteger numberOfMessagesSeen; // ivar: _numberOfMessagesSeen
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *orderingMetricQueue; // ivar: _orderingMetricQueue


+(id)sharedInstance;
-(BOOL)_metricIncomingMessage:(id)arg0 items:(id)arg1 withContext:(NSInteger)arg2 ;
-(id)init;
-(void)_metricHistoryQueryOrder:(id)arg0 ;
-(void)_persistMetric;
-(void)_submitMetric;
-(void)_submitMetricIfNeeded;
-(void)dealloc;
-(void)metricHistoryQueryOrder:(id)arg0 ;
-(void)metricIncomingMessage:(id)arg0 items:(id)arg1 ;


@end


#endif