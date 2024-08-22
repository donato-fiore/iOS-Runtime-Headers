// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVDDEFAULTS_H
#define GEONAVDDEFAULTS_H


#import <Foundation/Foundation.h>


@interface GEONavdDefaults : NSObject

@property (readonly, nonatomic) NSUInteger accessValueThresholdToUpdateCacheEntries;
@property (readonly, nonatomic) CGFloat automaticTrafficIncidentRerouteDelay;
@property (readonly, nonatomic) CGFloat averageWalkingSpeed;
@property (readonly, nonatomic) CGFloat defaultExpirationOffset;
@property (readonly, nonatomic) int endValidDistanceOffset;
@property (readonly, nonatomic) CGFloat exitRegionSize;
@property (readonly, nonatomic) CGFloat extraLocationWaitTimeInterval;
@property (readonly, nonatomic) CGFloat fastWalkingSpeed;
@property (readonly, nonatomic) CGFloat hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
@property (readonly, nonatomic) CGFloat hypothesisResponseStaleToRefreshThresholdInSeconds;
@property (readonly, nonatomic) CGFloat hypothesisShouldPersistThresholdInSeconds;
@property (readonly, nonatomic) NSUInteger initialClientInitiatedHypothesisCacheAccessValue;
@property (readonly, nonatomic) NSUInteger initialSelfInitiatedHypothesisCacheAccessValue;
@property (readonly, nonatomic) CGFloat locationFreshnessThreshold;
@property (readonly, nonatomic) CGFloat locationReuseThreshold;
@property (readonly, nonatomic) CGFloat locationUpdateTimerInterval;
@property (readonly, nonatomic) CGFloat locationUpdatesDesiredAccuracyForDriving;
@property (readonly, nonatomic) CGFloat locationUpdatesDesiredAccuracyForTransit;
@property (readonly, nonatomic) CGFloat locationUpdatesDesiredAccuracyForWalking;
@property (readonly, nonatomic) CGFloat locationUpdatesDesiredAccuracyWhileStationaryForDriving;
@property (readonly, nonatomic) CGFloat locationUpdatesDesiredAccuracyWhileStationaryForTransit;
@property (readonly, nonatomic) CGFloat locationUpdatesDesiredAccuracyWhileStationaryForWalking;
@property (readonly, nonatomic) CGFloat maxDistanceFromOriginToSuppressReroute;
@property (readonly, nonatomic) NSUInteger maxRandomJitterForHypothesisWakeup;
@property (readonly, nonatomic) NSInteger maximumNumberOfDestinationsToMonitor;
@property (readonly, nonatomic) NSUInteger maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
@property (readonly, nonatomic) NSUInteger maximumNumberOfLeechedLocations;
@property (readonly, nonatomic) NSUInteger maximumNumberOfProcessingLoopRepeats;
@property (readonly, nonatomic) CGFloat maximumRefreshIntervalLeeway;
@property (readonly, nonatomic) CGFloat maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
@property (readonly, nonatomic) NSUInteger maximumTraceFileCount;
@property (readonly, nonatomic) CGFloat maximumUserRoutingPreferencesAge;
@property (readonly, nonatomic) NSUInteger minRandomJitterForHypothesisWakeup;
@property (readonly, nonatomic) CGFloat minimumDistanceToCompareAgainstLocationAccuracy;
@property (readonly, nonatomic) CGFloat minimumDistanceToConsiderLeechedLocationInMeters;
@property (readonly, nonatomic) CGFloat minimumDistanceToGetLocationUpdatesInMeters;
@property (readonly, nonatomic) CGFloat minimumExpirationOffset;
@property (readonly, nonatomic) CGFloat minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
@property (readonly, nonatomic) CGFloat minimumTimeIntervalToConsiderLeechedLocationInSeconds;
@property (readonly, nonatomic) CGFloat minimumTimerTimeStampFudge;
@property (readonly, nonatomic) CGFloat pendingStopTimeToLive;
@property (readonly, nonatomic) CGFloat predictionsWatchdogInterval;
@property (readonly, nonatomic) NSUInteger refreshEquationHighestFrequency;
@property (readonly, nonatomic) NSUInteger refreshEquationLowestFrequency;
@property (readonly, nonatomic) NSUInteger refreshEquationLowestFrequencyTransit;
@property (readonly, nonatomic) CGFloat refreshTimeIntervalBackoffBase;
@property (readonly, nonatomic) CGFloat refreshTimeIntervalBackoffMax;
@property (readonly, nonatomic) CGFloat refreshTimeIntervalToUseIfError;
@property (readonly, nonatomic) BOOL shouldAutomaticallyRerouteTrafficIncidents;
@property (readonly, nonatomic) BOOL shouldLazyLoadRoutes;
@property (readonly, nonatomic) BOOL shouldMatchToLAR;
@property (readonly, nonatomic) BOOL shouldRequestInlineShields;
@property (readonly, nonatomic) BOOL shouldRequestLaneGuidance;
@property (readonly, nonatomic) BOOL shouldRunNavigationInDaemon;
@property (readonly, nonatomic) BOOL shouldShowServiceErrorAlert;
@property (readonly, nonatomic) BOOL shouldSnapToParkingLotSegments;
@property (readonly, nonatomic) BOOL shouldUseGuidanceEventManager;
@property (readonly, nonatomic) BOOL shouldUseServerSideETAs;
@property (readonly, nonatomic) CGFloat slowWalkingSpeed;
@property (readonly, nonatomic) CGFloat staleLocationUseTimerInterval;
@property (readonly, nonatomic) int startValidDistanceOffset;
@property (readonly, nonatomic) BOOL transitListInstructionTimeText;
@property (readonly, nonatomic) BOOL transitTTLSupported;
@property (readonly, nonatomic) BOOL transitTextInPlanningArtwork;
@property (readonly, nonatomic) CGFloat updateTimeout;
@property (readonly, nonatomic) BOOL useConservativeDepartureForRefreshTimer;


+(id)sharedInstance;


@end


#endif