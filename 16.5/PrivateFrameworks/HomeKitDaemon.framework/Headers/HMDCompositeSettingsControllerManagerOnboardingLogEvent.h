// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGSCONTROLLERMANAGERONBOARDINGLOGEVENT_H
#define HMDCOMPOSITESETTINGSCONTROLLERMANAGERONBOARDINGLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSError;
@protocol HMDCompositeSettingsControllerManagerOnboardingLogEvent, HMMCoreAnalyticsLogging;



@interface HMDCompositeSettingsControllerManagerOnboardingLogEvent : HMMLogEvent <HMDCompositeSettingsControllerManagerOnboardingLogEvent, HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger siriEndpointCertificationReason; // ivar: _siriEndpointCertificationReason
@property (readonly) Class superclass;


-(id)initWithError:(id)arg0 siriEndpointCertificationReason:(NSInteger)arg1 ;


@end


#endif