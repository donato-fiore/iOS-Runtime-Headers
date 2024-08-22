// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEROAPPSINGLESUGGESTIONLOGGER_H
#define ATXHEROAPPSINGLESUGGESTIONLOGGER_H

@class NSMutableArray;
@protocol ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>


@interface ATXHeroAppSingleSuggestionLogger : NSObject

@property (retain, nonatomic) NSMutableArray *negativeEventBuffer; // ivar: _negativeEventBuffer
@property (retain, nonatomic) NSMutableArray *positiveEventBuffer; // ivar: _positiveEventBuffer
@property (retain, nonatomic) NSObject<ATXPETEventTracker2Protocol> *tracker; // ivar: _tracker


-(id)_heroAppEngagementMetricWithBundleId:(id)arg0 interactionType:(int)arg1 consumerSubType:(id)arg2 ;
-(id)init;
-(id)initWithTracker:(id)arg0 ;
-(void)_flushEventBuffer:(id)arg0 numEventsToSample:(NSInteger)arg1 isNegative:(BOOL)arg2 ;
-(void)_logHeroAppEngagementMetric:(id)arg0 ;
-(void)flushEventBuffers;
-(void)handleSingleSuggestion:(id)arg0 ;


@end


#endif