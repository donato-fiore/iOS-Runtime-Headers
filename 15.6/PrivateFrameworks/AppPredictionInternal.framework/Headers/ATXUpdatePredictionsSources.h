// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXUPDATEPREDICTIONSSOURCES_H
#define ATXUPDATEPREDICTIONSSOURCES_H

@class NSArray;
@protocol ATXUpdatePredictionsDelegate;

#import <Foundation/Foundation.h>

#import "ATXTimeBucketedRateLimiter.h"

@interface ATXUpdatePredictionsSources : NSObject <ATXUpdatePredictionsDelegate>



@property (retain, nonatomic) ATXTimeBucketedRateLimiter *rateLimiter; // ivar: _rateLimiter
@property (retain, nonatomic) NSArray *updateSources; // ivar: _updateSources


-(id)init;
-(id)initWithUpdateSources:(id)arg0 rateLimiter:(id)arg1 ;
-(void)forceUpdatePredictionsImmediatelyWithReason:(NSUInteger)arg0 ;
-(void)forwardUpdatePredictionsDefaultIntervalWithReason:(NSUInteger)arg0 ;
-(void)forwardUpdatePredictionsImmediatelyWithReason:(NSUInteger)arg0 ;
-(void)tryUpdatePredictionsDefaultIntervalWithReason:(NSUInteger)arg0 ;
-(void)tryUpdatePredictionsImmediatelyWithReason:(NSUInteger)arg0 ;


@end


#endif