// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENREGIONSERVERCONFIGURATION_H
#define ENREGIONSERVERCONFIGURATION_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENRegionServerConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (copy, nonatomic) NSString *appleTelemetryEndpoint; // ivar: _appleTelemetryEndpoint
@property (copy, nonatomic) NSString *appleTelemetryEndpointCredentials; // ivar: _appleTelemetryEndpointCredentials
@property (readonly, nonatomic) CGFloat applicationBackgroundRuntimeInterval; // ivar: _applicationBackgroundRuntimeInterval
@property (readonly, nonatomic) BOOL associatedDomainsEnabled; // ivar: _associatedDomainsEnabled
@property (readonly, nonatomic) CGFloat callbackInterval; // ivar: _callbackInterval
@property (readonly, nonatomic) CGFloat chaffingSelectionPercentage; // ivar: _chaffingSelectionPercentage
@property (readonly, nonatomic) CGFloat chaffingSelectionPercentageAlternative; // ivar: _chaffingSelectionPercentageAlternative
@property (readonly, nonatomic) unsigned int dailyDetectExposureLimit; // ivar: _dailyDetectExposureLimit
@property (readonly, nonatomic) unsigned int detectExposureNKDLimit; // ivar: _detectExposureNKDLimit
@property (readonly, nonatomic) BOOL dynamicAlgorithmEnabled; // ivar: _dynamicAlgorithmEnabled
@property (readonly, nonatomic) unsigned int dynamicThrottleDownAdvDensity; // ivar: _dynamicThrottleDownAdvDensity
@property (readonly, nonatomic) CGFloat dynamicThrottleDownDuration; // ivar: _dynamicThrottleDownDuration
@property (readonly, nonatomic) char dynamicThrottleDownRSSI; // ivar: _dynamicThrottleDownRSSI
@property (readonly, nonatomic) unsigned int dynamicThrottleUpAdvDensity; // ivar: _dynamicThrottleUpAdvDensity
@property (readonly, nonatomic) CGFloat dynamicThrottleUpDuration; // ivar: _dynamicThrottleUpDuration
@property (readonly, nonatomic) BOOL enEnabled; // ivar: _enEnabled
@property (readonly, nonatomic) NSUInteger enVersion; // ivar: _enVersion
@property (readonly, nonatomic) BOOL enableV1; // ivar: _enableV1
@property (readonly, nonatomic) unsigned int featureFlags; // ivar: _featureFlags
@property (readonly, nonatomic) CGFloat forceAPWakeIntervalThreshold; // ivar: _forceAPWakeIntervalThreshold
@property (readonly, nonatomic) BOOL hasSubdivisions; // ivar: _hasSubdivisions
@property (readonly, nonatomic) BOOL isChaffingEnabled; // ivar: _isChaffingEnabled
@property (copy, nonatomic) NSString *legalConsentVersion; // ivar: _legalConsentVersion
@property (readonly, nonatomic) unsigned int maximumChaffsAllowedPerDay; // ivar: _maximumChaffsAllowedPerDay
@property (readonly, nonatomic) unsigned int numberOfAdvSamplesForRPIThreshold; // ivar: _numberOfAdvSamplesForRPIThreshold
@property (readonly, nonatomic) CGFloat osTriggeredAppRunInterval; // ivar: _osTriggeredAppRunInterval
@property (copy, nonatomic) NSString *partnerTelemetryAppleCertificateChain; // ivar: _partnerTelemetryAppleCertificateChain
@property (copy, nonatomic) NSString *partnerTelemetryEndpoint; // ivar: _partnerTelemetryEndpoint
@property (copy, nonatomic) NSString *partnerTelemetryPublicCertificateChain; // ivar: _partnerTelemetryPublicCertificateChain
@property (copy, nonatomic) NSString *phaTelemetryAppleCertificateChain; // ivar: _phaTelemetryAppleCertificateChain
@property (copy, nonatomic) NSString *phaTelemetryEndpoint; // ivar: _phaTelemetryEndpoint
@property (copy, nonatomic) NSString *phaTelemetryOptInMessage; // ivar: _phaTelemetryOptInMessage
@property (copy, nonatomic) NSString *phaTelemetryPublicCertificateChain; // ivar: _phaTelemetryPublicCertificateChain
@property (readonly, nonatomic) BOOL preArmTestVerificationEnabled; // ivar: _preArmTestVerificationEnabled
@property (readonly, copy, nonatomic) NSString *publicKey; // ivar: _publicKey
@property (readonly, copy, nonatomic) NSString *publicKeyVersion; // ivar: _publicKeyVersion
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region
@property (readonly, nonatomic) CGFloat regionDisabledTransitionGracePeriod; // ivar: _regionDisabledTransitionGracePeriod
@property (readonly, nonatomic) CGFloat regionTransitionGracePeriod; // ivar: _regionTransitionGracePeriod
@property (readonly, nonatomic) BOOL resetAvailabilityAlertForDeclinedUsers; // ivar: _resetAvailabilityAlertForDeclinedUsers
@property (readonly, nonatomic) CGFloat rpiAdvertisementTolerance; // ivar: _rpiAdvertisementTolerance
@property (readonly, nonatomic) CGFloat rpiDuplicateAdvertisementTolerance; // ivar: _rpiDuplicateAdvertisementTolerance
@property (readonly, nonatomic) unsigned char selfReportTimeoutDays; // ivar: _selfReportTimeoutDays
@property (readonly, copy, nonatomic) NSArray *subdivisions; // ivar: _subdivisions
@property (readonly, nonatomic) BOOL telemetryAuthorization; // ivar: _telemetryAuthorization
@property (readonly, nonatomic) NSString *textMessagePublicKey; // ivar: _textMessagePublicKey
@property (readonly, nonatomic) NSString *textMessagePublicKeyVersion; // ivar: _textMessagePublicKeyVersion
@property (readonly, nonatomic) BOOL textMessageVerificationEnabled; // ivar: _textMessageVerificationEnabled
@property (readonly, nonatomic) CGFloat timeToResetAvailabilityAlert; // ivar: _timeToResetAvailabilityAlert
@property (readonly, nonatomic) BOOL variantOfConcernEnabled; // ivar: _variantOfConcernEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)supportsFeatures:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponseDictionary:(id)arg0 ;
-(id)preferredLocalizationsFromArray:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif