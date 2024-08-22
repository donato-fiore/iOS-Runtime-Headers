// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKTRAVELENGINEAGENDAENTRY_H
#define EKTRAVELENGINEAGENDAENTRY_H

@class NSString, CLLocation, CalGeocoder, EKTravelEngineHypothesis, NSData;
@protocol OS_dispatch_queue, CALNRouteHypothesizer, CALNRouteHypothesizerProvider;

#import <Foundation/Foundation.h>

#import "EKTravelEngineOriginalEvent.h"
#import "EKTravelEngineThrottle.h"

@interface EKTravelEngineAgendaEntry : NSObject

@property (retain, nonatomic) NSString *agendaEntryIdentifier; // ivar: _agendaEntryIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) BOOL dismissed; // ivar: _dismissed
@property (copy, nonatomic) id *entrySignificantlyChangedBlock; // ivar: _entrySignificantlyChangedBlock
@property (retain, nonatomic) CLLocation *geoLocation; // ivar: _geoLocation
@property (nonatomic) BOOL geocodedEventEncountered; // ivar: _geocodedEventEncountered
@property (retain, nonatomic) CalGeocoder *geocoder; // ivar: _geocoder
@property (retain, nonatomic) NSObject<CALNRouteHypothesizer> *hypothesizer; // ivar: _hypothesizer
@property (readonly, nonatomic) NSObject<CALNRouteHypothesizerProvider> *hypothesizerProvider; // ivar: _hypothesizerProvider
@property (nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis; // ivar: _hypothesizerSentAtLeastOneHypothesis
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis; // ivar: _latestHypothesis
@property (retain, nonatomic) NSData *mapKitHandle; // ivar: _mapKitHandle
@property (nonatomic) CGFloat maximumTravelDurationEncountered; // ivar: _maximumTravelDurationEncountered
@property (readonly, nonatomic) EKTravelEngineOriginalEvent *originalEvent;
@property (retain, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal; // ivar: _originalEventInternal
@property (retain, nonatomic) EKTravelEngineThrottle *throttle; // ivar: _throttle
@property (nonatomic) NSInteger travelTimeThresholdExceededState; // ivar: _travelTimeThresholdExceededState
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(CGFloat)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
-(id)_createSyntheticHypothesis;
-(id)_generateDestination;
-(id)emissionHypothesisRefreshAlarmName;
-(id)initWithRouteHypothesizerProvider:(id)arg0 ;
-(id)requestHypothesisRefreshAlarmName;
-(void)_accountForGeocodedEventEncounter;
-(void)_clearEverything;
-(void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg0 ;
-(void)_createHypothesisRequestRefreshTimerWithDate:(id)arg0 ;
-(void)_createHypothesizerForDestination:(id)arg0 ;
-(void)_emissionHypothesisRefreshTimerFired;
-(void)_enhanceLocation;
-(void)_hypothesisRefreshTimerFired;
-(void)_performAnalyticsPostProcessing;
-(void)_requestHypothesisRefreshTimerFired;
-(void)_sendFeedbackToHypothesizerForPostingNotification:(NSUInteger)arg0 ;
-(void)_setUpRouteMonitoring;
-(void)_trackTTLCandidateEvent:(id)arg0 ;
-(void)_uninstallEmissionHypothesisRefreshTimer;
-(void)_uninstallRequestHypothesisRefreshTimer;
-(void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)arg0 ;
-(void)_updateWithHypothesis:(id)arg0 ;
-(void)cancelEmissionHypothesisRefresh;
-(void)cancelHypothesisRefreshRequest;
-(void)createAlarmWithName:(id)arg0 atDate:(id)arg1 ;
-(void)dealloc;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)removeAlarmWithName:(id)arg0 ;
-(void)requestHypothesisRefreshAtDate:(id)arg0 ;
-(void)reset;
-(void)sendFeedbackForPostingLeaveByNotification;
-(void)sendFeedbackForPostingLeaveNowNotification;
-(void)updateWithOriginalEvent:(id)arg0 ;


@end


#endif