// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGENETWORKDETAILS_H
#define WIFIUSAGENETWORKDETAILS_H

@class NSString, NSMutableArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WiFiUsageBssDetails.h"

@interface WiFiUsageNetworkDetails : NSObject <NSCopying>



@property (nonatomic) BOOL addedFromApp; // ivar: _addedFromApp
@property (nonatomic) BOOL addedFromUI; // ivar: _addedFromUI
@property (nonatomic) BOOL addedViaATJ; // ivar: _addedViaATJ
@property (nonatomic) BOOL addedViaRecommendation; // ivar: _addedViaRecommendation
@property (nonatomic) BOOL addedViaSharing; // ivar: _addedViaSharing
@property (nonatomic) BOOL addedViaSync; // ivar: _addedViaSync
@property (nonatomic) NSUInteger advertisedCountryCode; // ivar: _advertisedCountryCode
@property (nonatomic) NSUInteger appliedCountryCode; // ivar: _appliedCountryCode
@property (nonatomic) BOOL autoJoinDisabled; // ivar: _autoJoinDisabled
@property (nonatomic) BOOL autoLoginDisabled; // ivar: _autoLoginDisabled
@property (copy, nonatomic) NSString *bssEnvironment; // ivar: _bssEnvironment
@property (nonatomic) BOOL canExposeImsi; // ivar: _canExposeImsi
@property (nonatomic) NSUInteger captiveStatus; // ivar: _captiveStatus
@property (nonatomic) NSUInteger colocatedNetworkCount; // ivar: _colocatedNetworkCount
@property (nonatomic) NSUInteger colocatedScopeCount; // ivar: _colocatedScopeCount
@property (copy, nonatomic) WiFiUsageBssDetails *connectedBss; // ivar: _connectedBss
@property (nonatomic) BOOL controlCenterDisabled; // ivar: _controlCenterDisabled
@property (retain, nonatomic) NSMutableArray *downloadSpeedResults; // ivar: _downloadSpeedResults
@property (nonatomic) BOOL hasAmbiguousSsid; // ivar: _hasAmbiguousSsid
@property (nonatomic) BOOL hasCustomNetworkSettings; // ivar: _hasCustomNetworkSettings
@property (nonatomic) BOOL hasEnterpriseSecurity; // ivar: _hasEnterpriseSecurity
@property (nonatomic) BOOL hasLegacyEnterpriseSecurity; // ivar: _hasLegacyEnterpriseSecurity
@property (nonatomic) BOOL hasNoMap; // ivar: _hasNoMap
@property (nonatomic) BOOL hasWapi; // ivar: _hasWapi
@property (nonatomic) BOOL hasWeakSecurity; // ivar: _hasWeakSecurity
@property (nonatomic) BOOL hasWep; // ivar: _hasWep
@property (nonatomic) BOOL hasWpa3; // ivar: _hasWpa3
@property (nonatomic) BOOL isAdhoc; // ivar: _isAdhoc
@property (nonatomic) BOOL isAppBased; // ivar: _isAppBased
@property (nonatomic) BOOL isAtNonPrimaryHMHome; // ivar: _isAtNonPrimaryHMHome
@property (nonatomic) BOOL isAtPrimaryHMHome; // ivar: _isAtPrimaryHMHome
@property (nonatomic) BOOL isAutoHotspot; // ivar: _isAutoHotspot
@property (nonatomic) BOOL isAutoJoined; // ivar: _isAutoJoined
@property (nonatomic) BOOL isCarPlay; // ivar: _isCarPlay
@property (nonatomic) BOOL isCarrierBased; // ivar: _isCarrierBased
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (nonatomic) BOOL isHome; // ivar: _isHome
@property (nonatomic) BOOL isInstantHotspot; // ivar: _isInstantHotspot
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
@property (nonatomic) BOOL isKnown; // ivar: _isKnown
@property (nonatomic) BOOL isManaged; // ivar: _isManaged
@property (nonatomic) BOOL isMesh; // ivar: _isMesh
@property (nonatomic) BOOL isMetered; // ivar: _isMetered
@property (nonatomic) BOOL isMoving; // ivar: _isMoving
@property (nonatomic) BOOL isOpen; // ivar: _isOpen
@property (nonatomic) BOOL isPasspoint; // ivar: _isPasspoint
@property (nonatomic) BOOL isPersonalHotspot; // ivar: _isPersonalHotspot
@property (nonatomic) BOOL isPublic; // ivar: _isPublic
@property (nonatomic) BOOL isWalletBased; // ivar: _isWalletBased
@property (nonatomic) BOOL isWidelyDeployed; // ivar: _isWidelyDeployed
@property (nonatomic) BOOL isWork; // ivar: _isWork
@property (nonatomic) NSInteger joinFailCountInLastDay; // ivar: _joinFailCountInLastDay
@property (nonatomic) NSInteger joinFailCountInLastMonth; // ivar: _joinFailCountInLastMonth
@property (nonatomic) NSInteger joinFailCountInLastWeek; // ivar: _joinFailCountInLastWeek
@property (nonatomic) NSInteger joinSuccessCountInLastDay; // ivar: _joinSuccessCountInLastDay
@property (nonatomic) NSInteger joinSuccessCountInLastMonth; // ivar: _joinSuccessCountInLastMonth
@property (nonatomic) NSInteger joinSuccessCountInLastWeek; // ivar: _joinSuccessCountInLastWeek
@property (copy, nonatomic) NSDate *lastJoinDate; // ivar: _lastJoinDate
@property (nonatomic) NSUInteger localeSource; // ivar: _localeSource
@property (nonatomic) BOOL lowDataModeEnabled; // ivar: _lowDataModeEnabled
@property (copy, nonatomic) NSString *networkName; // ivar: _networkName
@property (nonatomic) NSInteger networkScore; // ivar: _networkScore
@property (nonatomic) BOOL privateMacDisabledByProfile; // ivar: _privateMacDisabledByProfile
@property (nonatomic) BOOL privateMacFeatureToggled; // ivar: _privateMacFeatureToggled
@property (nonatomic) BOOL privateMacNetworkTypeHome; // ivar: _privateMacNetworkTypeHome
@property (copy, nonatomic) NSString *privateMacType; // ivar: _privateMacType
@property (nonatomic) BOOL privateMacUnderClassification; // ivar: _privateMacUnderClassification
@property (copy, nonatomic) NSString *privateRelayBlockedReason; // ivar: _privateRelayBlockedReason
@property (nonatomic) BOOL privateRelayEnabled; // ivar: _privateRelayEnabled
@property (nonatomic) BOOL requiresIdentity; // ivar: _requiresIdentity
@property (nonatomic) BOOL requiresOtp; // ivar: _requiresOtp
@property (nonatomic) BOOL requiresPassword; // ivar: _requiresPassword
@property (nonatomic) BOOL requiresUsername; // ivar: _requiresUsername
@property (nonatomic) NSUInteger switchedAwayCount; // ivar: _switchedAwayCount
@property (nonatomic) NSUInteger switchedToCount; // ivar: _switchedToCount
@property (nonatomic) NSInteger usageChargingDayTimeInLastDay; // ivar: _usageChargingDayTimeInLastDay
@property (nonatomic) NSInteger usageChargingDayTimeInLastMonth; // ivar: _usageChargingDayTimeInLastMonth
@property (nonatomic) NSInteger usageChargingDayTimeInLastWeek; // ivar: _usageChargingDayTimeInLastWeek
@property (nonatomic) NSInteger usageChargingNightTimeInLastDay; // ivar: _usageChargingNightTimeInLastDay
@property (nonatomic) NSInteger usageChargingNightTimeInLastMonth; // ivar: _usageChargingNightTimeInLastMonth
@property (nonatomic) NSInteger usageChargingNightTimeInLastWeek; // ivar: _usageChargingNightTimeInLastWeek
@property (nonatomic) NSInteger usageDayTimeInLastDay; // ivar: _usageDayTimeInLastDay
@property (nonatomic) NSInteger usageDayTimeInLastMonth; // ivar: _usageDayTimeInLastMonth
@property (nonatomic) NSInteger usageDayTimeInLastWeek; // ivar: _usageDayTimeInLastWeek
@property (nonatomic) NSInteger usageNightTimeInLastDay; // ivar: _usageNightTimeInLastDay
@property (nonatomic) NSInteger usageNightTimeInLastMonth; // ivar: _usageNightTimeInLastMonth
@property (nonatomic) NSInteger usageNightTimeInLastWeek; // ivar: _usageNightTimeInLastWeek
@property (nonatomic) NSInteger usageRank; // ivar: _usageRank
@property (nonatomic) NSInteger usageStationaryDayTimeInLastDay; // ivar: _usageStationaryDayTimeInLastDay
@property (nonatomic) NSInteger usageStationaryDayTimeInLastMonth; // ivar: _usageStationaryDayTimeInLastMonth
@property (nonatomic) NSInteger usageStationaryDayTimeInLastWeek; // ivar: _usageStationaryDayTimeInLastWeek
@property (nonatomic) NSInteger usageStationaryNightTimeInLastDay; // ivar: _usageStationaryNightTimeInLastDay
@property (nonatomic) NSInteger usageStationaryNightTimeInLastMonth; // ivar: _usageStationaryNightTimeInLastMonth
@property (nonatomic) NSInteger usageStationaryNightTimeInLastWeek; // ivar: _usageStationaryNightTimeInLastWeek


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)eventDictionary:(BOOL)arg0 ;
-(id)initWithNetworkName:(id)arg0 ;
-(void)addDownloadSpeed:(CGFloat)arg0 ;


@end


#endif