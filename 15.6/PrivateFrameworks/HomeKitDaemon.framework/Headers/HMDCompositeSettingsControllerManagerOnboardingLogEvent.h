// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOMPOSITESETTINGSCONTROLLERMANAGERONBOARDINGLOGEVENT_H
#define HMDCOMPOSITESETTINGSCONTROLLERMANAGERONBOARDINGLOGEVENT_H

@class HMMLogEvent, NSString, NSError, NSDictionary;
@protocol HMDCompositeSettingsControllerManagerOnboardingLogEvent, HMMCoreAnalyticsLogging;



@interface HMDCompositeSettingsControllerManagerOnboardingLogEvent : HMMLogEvent <HMDCompositeSettingsControllerManagerOnboardingLogEvent, HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSError *error;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly) NSInteger siriEndpointCertificationReason; // ivar: _siriEndpointCertificationReason


-(id)initWithError:(id)arg0 siriEndpointCertificationReason:(NSInteger)arg1 ;


@end


#endif