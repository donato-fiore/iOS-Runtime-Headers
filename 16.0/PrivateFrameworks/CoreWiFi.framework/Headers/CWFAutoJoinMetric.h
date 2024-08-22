// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFAUTOJOINMETRIC_H
#define CWFAUTOJOINMETRIC_H

@class NSArray, NSError, NSString, NSDictionary, SFRemoteHotspotDevice;
@protocol CWFJSONEncodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFAutoJoinParameters.h"
#import "CWFScanResult.h"

@interface CWFAutoJoinMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger GASQueryDuration; // ivar: _GASQueryDuration
@property (copy, nonatomic) NSArray *GASQueryErrors; // ivar: _GASQueryErrors
@property (copy, nonatomic) NSArray *GASQueryNetworks; // ivar: _GASQueryNetworks
@property (nonatomic) NSUInteger autoHotspotBrowseDuration; // ivar: _autoHotspotBrowseDuration
@property (copy, nonatomic) NSError *autoHotspotBrowseError; // ivar: _autoHotspotBrowseError
@property (nonatomic) NSUInteger autoHotspotDuration; // ivar: _autoHotspotDuration
@property (copy, nonatomic) NSError *autoHotspotError; // ivar: _autoHotspotError
@property (nonatomic) NSUInteger autoHotspotJoinDuration; // ivar: _autoHotspotJoinDuration
@property (copy, nonatomic) NSArray *autoHotspotJoinErrors; // ivar: _autoHotspotJoinErrors
@property (nonatomic) NSInteger autoHotspotMode; // ivar: _autoHotspotMode
@property (nonatomic) BOOL autoHotspotResult; // ivar: _autoHotspotResult
@property (nonatomic) BOOL autoHotspotWasAborted; // ivar: _autoHotspotWasAborted
@property (nonatomic) BOOL autoHotspotWasAttempted; // ivar: _autoHotspotWasAttempted
@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters; // ivar: _autoJoinParameters
@property (readonly) NSString *coreAnalyticsEventName;
@property (readonly) NSDictionary *coreAnalyticsEventPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDeferJoinToDiscoverMorePreferredNetwork; // ivar: _didDeferJoinToDiscoverMorePreferredNetwork
@property (nonatomic) BOOL didDetectColocatedNetworkEnvironment; // ivar: _didDetectColocatedNetworkEnvironment
@property (nonatomic) BOOL didFallbackToJoinLessPreferredNetwork; // ivar: _didFallbackToJoinLessPreferredNetwork
@property (nonatomic) BOOL didUseLocationOptimizedChannelList; // ivar: _didUseLocationOptimizedChannelList
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) NSUInteger durationFromDeviceUnlockTrigger; // ivar: _durationFromDeviceUnlockTrigger
@property (nonatomic) NSUInteger durationFromDisplayOnTrigger; // ivar: _durationFromDisplayOnTrigger
@property (nonatomic) NSUInteger durationFromLinkDownTrigger; // ivar: _durationFromLinkDownTrigger
@property (nonatomic) NSUInteger durationFromNonRetryAutoJoinTrigger; // ivar: _durationFromNonRetryAutoJoinTrigger
@property (nonatomic) NSUInteger durationFromWiFiPowerOnTrigger; // ivar: _durationFromWiFiPowerOnTrigger
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspot; // ivar: _hotspot
@property (nonatomic) NSUInteger joinDuration; // ivar: _joinDuration
@property (copy, nonatomic) NSArray *joinErrors; // ivar: _joinErrors
@property (copy, nonatomic) CWFScanResult *network; // ivar: _network
@property (copy, nonatomic) NSArray *optimizedChannelList; // ivar: _optimizedChannelList
@property (copy, nonatomic) NSArray *preAssociationScanChannels; // ivar: _preAssociationScanChannels
@property (nonatomic) NSUInteger preAssociationScanDuration; // ivar: _preAssociationScanDuration
@property (nonatomic) NSInteger previousNonRetryAutoJoinTrigger; // ivar: _previousNonRetryAutoJoinTrigger
@property (nonatomic) BOOL result; // ivar: _result
@property (nonatomic) NSInteger retrySchedule; // ivar: _retrySchedule
@property (nonatomic) NSUInteger retryScheduleIndex; // ivar: _retryScheduleIndex
@property (copy, nonatomic) NSArray *scanChannels; // ivar: _scanChannels
@property (nonatomic) NSUInteger scanDuration; // ivar: _scanDuration
@property (copy, nonatomic) NSArray *scanErrors; // ivar: _scanErrors
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasAborted; // ivar: _wasAborted
@property (nonatomic) BOOL wasAlreadyAssociated; // ivar: _wasAlreadyAssociated
@property (nonatomic) BOOL wasCancelled; // ivar: _wasCancelled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutoJoinMetric:(id)arg0 ;
-(id)JSONCompatibleKeyValueMap;
-(id)__descriptionForError:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif