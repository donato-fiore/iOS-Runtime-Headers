// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TATRACKINGAVOIDANCESERVICE_H
#define TATRACKINGAVOIDANCESERVICE_H

@class NSString, NSDate, NSHashTable;
@protocol TAVisitStateObserver, TATrackingAvoidanceServiceProtocol;

#import <Foundation/Foundation.h>

#import "TATrackingAvoidanceServiceSettings.h"
#import "TASettings.h"
#import "TAOutgoingRequests.h"
#import "TAStore.h"

@interface TATrackingAvoidanceService : NSObject <TAVisitStateObserver, TATrackingAvoidanceServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *latestClassificationDate; // ivar: _latestClassificationDate
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings; // ivar: _serviceSettings
@property (readonly, nonatomic) TASettings *settings; // ivar: _settings
@property (retain, nonatomic) TAOutgoingRequests *stagedIntervisitMetrics; // ivar: _stagedIntervisitMetrics
@property (readonly, nonatomic) TAStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)shouldPerformDetection;
-(id)filterAndStageDetectionResults:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithTASettings:(id)arg0 ;
-(void)_performDetection;
-(void)_performUpdateIfNecessary:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)bootstrapDeviceRecord:(id)arg0 ;
-(void)bootstrapVisitState:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)notifyObserversOfRequests:(id)arg0 ;
-(void)notifyObserversOfStagedSuspiciousDevices:(id)arg0 ;
-(void)notifyObserversOfSuspiciousDeviceUpdate:(id)arg0 ;
-(void)notifyObserversOfSuspiciousDevices:(id)arg0 ;
-(void)notifyObserversOfVisitStateChange;
-(void)removeObserver:(id)arg0 ;
-(void)visitState:(id)arg0 didChangeStateFromType:(NSUInteger)arg1 toType:(NSUInteger)arg2 ;
-(void)visitState:(id)arg0 didIssueMetricsSubmissionHint:(NSUInteger)arg1 ;


@end


#endif