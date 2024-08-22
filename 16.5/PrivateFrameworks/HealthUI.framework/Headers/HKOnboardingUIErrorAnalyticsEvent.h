// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKONBOARDINGUIERRORANALYTICSEVENT_H
#define HKONBOARDINGUIERRORANALYTICSEVENT_H

@class NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKOnboardingUIErrorAnalyticsEvent : NSObject <HKAnalyticsEvent>



@property (readonly, copy, nonatomic) NSString *OTAFactorPackID; // ivar: _OTAFactorPackID
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy, nonatomic) NSString *errorCategory; // ivar: _errorCategory
@property (readonly, copy, nonatomic) NSString *errorDetail; // ivar: _errorDetail
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, copy, nonatomic) NSString *featureVersion; // ivar: _featureVersion
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, copy, nonatomic) NSString *step; // ivar: _step


-(id)initWithFeatureIdentifier:(id)arg0 featureVersion:(id)arg1 countryCode:(id)arg2 step:(id)arg3 errorCategory:(id)arg4 errorDetail:(id)arg5 OTAFactorPackID:(id)arg6 ;
-(id)initWithFeatureIdentifier:(id)arg0 featureVersion:(id)arg1 countryCode:(id)arg2 step:(id)arg3 onboardingEligibility:(id)arg4 ;
-(id)initWithFeatureIdentifier:(id)arg0 featureVersion:(id)arg1 countryCode:(id)arg2 step:(id)arg3 onboardingIneligibilityReasons:(NSUInteger)arg4 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif