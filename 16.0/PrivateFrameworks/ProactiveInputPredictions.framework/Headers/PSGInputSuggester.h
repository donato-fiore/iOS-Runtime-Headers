// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGINPUTSUGGESTER_H
#define PSGINPUTSUGGESTER_H

@class _PASTuple2;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PSGInputSuggesterClient.h"
#import "PSGInputSuggestionsRequest.h"

@interface PSGInputSuggester : NSObject {
    PSGInputSuggesterClient *_client;
    NSObject<OS_dispatch_queue> *_lastPredictionQueue;
    PSGInputSuggestionsRequest *_lastRequest;
    _PASTuple2 *_lastPrediction;
    _PASTuple2 *_lastImpression;
}




+(id)sharedInstance;
-(id)initWithClient:(id)arg0 ;
-(void)_reportSpeedMetricWithData:(id)arg0 ;
-(void)hibernate;
-(void)inputSuggestionsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)logMetricForEventType:(unsigned char)arg0 externalMetadata:(id)arg1 predictedValues:(id)arg2 ;
-(void)logMetricForEventType:(unsigned char)arg0 externalMetadata:(id)arg1 request:(id)arg2 responseItems:(id)arg3 ;
-(void)logTimeoutForRequest:(id)arg0 ;
-(void)warmUp;
-(void)warmUpForLocaleIdentifier:(id)arg0 ;


@end


#endif