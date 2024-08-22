// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDEBUGPREFERENCES_H
#define EKDEBUGPREFERENCES_H

@class CalPreferences, NSString;

#import <Foundation/Foundation.h>


@interface EKDebugPreferences : NSObject {
    CalPreferences *_preferences;
}


@property (nonatomic) CGFloat availabilityFreshnessWindow;
@property (nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic) CGFloat overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property (nonatomic) CGFloat overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (nonatomic) CGFloat overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property (nonatomic) BOOL overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) BOOL overrideTravelAdvisoryHypothesis;
@property (nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) BOOL saveGeocodedLocationsInTravelEngine;
@property (nonatomic) BOOL shouldBypassTravelEngineThrottle;
@property (nonatomic) BOOL showDepartureDateForTransitTimeToLeave;
@property (nonatomic) BOOL syntheticTravelAdvisoriesEnabled;
@property (nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines;


+(id)shared;
-(id)init;


@end


#endif