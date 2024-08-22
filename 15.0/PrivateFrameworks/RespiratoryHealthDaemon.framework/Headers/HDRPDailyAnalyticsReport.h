// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDRPDAILYANALYTICSREPORT_H
#define HDRPDAILYANALYTICSREPORT_H

@class NSCalendar, NSUserDefaults, NSDate, HKRPOxygenSaturationSettings, NRPairedDeviceRegistry, HDProfile;
@protocol HKFeatureAvailabilityProviding;

#import <Foundation/Foundation.h>


@interface HDRPDailyAnalyticsReport : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSUserDefaults *controlCenterUserDefaults; // ivar: _controlCenterUserDefaults
@property (readonly, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityProviding> *featureAvailabilityProvider; // ivar: _featureAvailabilityProvider
@property (readonly, nonatomic, getter=isHealthDataCollectionAllowed) BOOL healthDataCollectionAllowed; // ivar: _healthDataCollectionAllowed
@property (readonly, nonatomic) HKRPOxygenSaturationSettings *oxygenSaturationSettings; // ivar: _oxygenSaturationSettings
@property (readonly, nonatomic) NRPairedDeviceRegistry *pairedDeviceRegistry; // ivar: _pairedDeviceRegistry
@property (readonly, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime


-(BOOL)_hasCompatiblePairedAppleWatch;
-(id)_activePairedWatchBuild;
-(id)_dateIntervalForPreviousDays:(NSUInteger)arg0 ;
-(id)_gatherDiagnosticAndUsageReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)arg0 wasWorn:(id)arg1 error:(*id)arg2 ;
-(id)_gatherImproveHealthAndActivityReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)arg0 oxygenSaturationSamplesInPreviousDay:(id)arg1 error:(*id)arg2 ;
-(id)_numberOfEveningSamplesFromSamples:(id)arg0 ;
-(id)_numberOfForegroundSamplesFromSamples:(id)arg0 ;
-(id)_numberOfSamplesByTruncatedOxygenSaturationValueFromSamples:(id)arg0 keyPrefix:(id)arg1 ;
-(id)_numberOfSamplesWithExerciseMinute5MinutesPriorInPreviousDayAndReturnError:(*id)arg0 ;
-(id)_numberOfSamplesWithHeartRateGreaterThan100BPMFromSamples:(id)arg0 ;
-(id)_numberOfSamplesWithHighElevationTakeFromSamples:(id)arg0 ;
-(id)_numberOfWeeksSinceOnboardedAndReturnError:(*id)arg0 ;
-(id)_queryForBackgroundOxygenSaturationSamplesInPreviousDayAndReturnError:(*id)arg0 ;
-(id)_queryForHasWornWatchInPreviousDayAndReturnError:(*id)arg0 ;
-(id)_queryForOxygenSaturationSamplesInPreviousDayAndReturnError:(*id)arg0 ;
-(id)generatePayloadAndReturnError:(*id)arg0 ;
-(id)initWithDate:(id)arg0 profile:(id)arg1 pairedDeviceRegistry:(id)arg2 featureAvailabilityProvider:(id)arg3 oxygenSaturationSettings:(id)arg4 controlCenterUserDefaults:(id)arg5 healthDataCollectionAllowed:(BOOL)arg6 ;


@end


#endif