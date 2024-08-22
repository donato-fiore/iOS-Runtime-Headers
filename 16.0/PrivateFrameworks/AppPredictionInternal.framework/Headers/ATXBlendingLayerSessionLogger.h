// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBLENDINGLAYERSESSIONLOGGER_H
#define ATXBLENDINGLAYERSESSIONLOGGER_H

@class NSMutableDictionary, ATXHomeScreenEvent, ATXBlendingLayerHyperParameters, NSArray, NSString, NSDate;
@protocol ATXBlendingLayerSessionLoggerProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXPredictionContext.h"

@interface ATXBlendingLayerSessionLogger : NSObject <ATXBlendingLayerSessionLoggerProtocol>

 {
    NSMutableDictionary *_mostRecentBlendingCacheUpdateByConsumerSubType;
    ATXPredictionContext *_mostRecentPredictionContext;
    ATXHomeScreenEvent *_mostRecentScreenLockEvent;
    id<ATXPETEventTracker2Protocol> *_tracker;
    ATXBlendingLayerHyperParameters *_hyperParameters;
}


@property (retain, nonatomic) NSArray *blendingEvents; // ivar: _blendingEvents
@property (retain, nonatomic) NSArray *clientModelEvents; // ivar: _clientModelEvents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *ermEvents; // ivar: _ermEvents
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *now; // ivar: _now
@property (retain, nonatomic) NSArray *predictionContextEvents; // ivar: _predictionContextEvents
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *uiEvents; // ivar: _uiEvents


-(BOOL)logCurrentSessionIfPossible;
-(BOOL)shouldLogSession;
-(id)clientModelCacheUpdatesFromBlendingCacheUpdate:(id)arg0 ;
-(id)clientModelPublisher;
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