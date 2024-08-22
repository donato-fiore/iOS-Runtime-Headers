// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXBLENDINGLAYERSESSIONLOGGER_H
#define ATXBLENDINGLAYERSESSIONLOGGER_H

@class NSMutableDictionary, ATXHomeScreenEvent, BPSPublisher, NSString, NSDate;
@protocol ATXBlendingLayerSessionLoggerProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXPredictionContext.h"
#import "ATXBlendingLayerHyperParameters.h"

@interface ATXBlendingLayerSessionLogger : NSObject <ATXBlendingLayerSessionLoggerProtocol>

 {
    NSMutableDictionary *_mostRecentBlendingCacheUpdateByConsumerSubType;
    ATXPredictionContext *_mostRecentPredictionContext;
    ATXHomeScreenEvent *_mostRecentScreenLockEvent;
    id<ATXPETEventTracker2Protocol> *_tracker;
    ATXBlendingLayerHyperParameters *_hyperParameters;
}


@property (retain, nonatomic) BPSPublisher *blendingPublisher; // ivar: _blendingPublisher
@property (retain, nonatomic) BPSPublisher *clientModelPublisher; // ivar: _clientModelPublisher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BPSPublisher *ermPublisher; // ivar: _ermPublisher
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *now; // ivar: _now
@property (retain, nonatomic) BPSPublisher *predictionContextPublisher; // ivar: _predictionContextPublisher
@property (readonly) Class superclass;
@property (retain, nonatomic) BPSPublisher *uiPublisher; // ivar: _uiPublisher


-(BOOL)logCurrentSessionIfPossible;
-(BOOL)shouldLogSession;
-(id)clientModelCacheUpdatesFromBlendingCacheUpdate:(id)arg0 ;
-(id)generateSessionLog;
-(id)init;
-(id)initWithTracker:(id)arg0 hyperParameters:(id)arg1 ;
-(id)orderedMergeERMBlendingContextUIPublisher;
-(id)sessionBlendingUpdateFromBlendingUICacheUpdate:(id)arg0 deviceContext:(id)arg1 ;
-(id)sessionClientModelUpdatesForUICacheUpdate:(id)arg0 ;
-(id)sessionDeviceContextFromPredictionContext:(id)arg0 ;
-(id)sessionERMEventFromERMEvent:(id)arg0 ;
-(id)sessionSuggestionFromProactiveSuggestion:(id)arg0 ;
-(id)sessionUICacheForUICacheUpdate:(id)arg0 ;
-(int)locationTypeFromLocationOfInterest:(id)arg0 ;
-(void)logSessionLogToPET:(id)arg0 ;


@end


#endif