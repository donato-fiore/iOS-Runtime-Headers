// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFANALYTICSCOLLECTION_H
#define SFANALYTICSCOLLECTION_H

@class NSMutableDictionary;
@protocol SFAnalyticsCollectionAction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFAnalyticsCollection : NSObject

@property (retain) NSObject<SFAnalyticsCollectionAction> *actions; // ivar: _actions
@property (retain) NSMutableDictionary *matchingRules; // ivar: _matchingRules
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy) id *tearDownMetricsHook; // ivar: _tearDownMetricsHook


-(id)init;
-(id)initWithActionInterface:(id)arg0 ;
-(id)parseCollection:(id)arg0 logger:(id)arg1 ;
-(unsigned int)match:(id)arg0 eventClass:(NSInteger)arg1 attributes:(id)arg2 bucket:(unsigned int)arg3 logger:(id)arg4 ;
-(void)dealloc;
-(void)loadCollection:(id)arg0 ;
-(void)onQueue_stopMetricCollection;
-(void)setupMetricsHook:(id)arg0 ;
-(void)stopMetricCollection;
-(void)storeCollection:(id)arg0 logger:(id)arg1 ;


@end


#endif