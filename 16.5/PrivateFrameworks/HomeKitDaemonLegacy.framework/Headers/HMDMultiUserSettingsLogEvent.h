// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMULTIUSERSETTINGSLOGEVENT_H
#define HMDMULTIUSERSETTINGSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, HMMultiUserSettingsForMetrics;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMultiUserSettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMMultiUserSettingsForMetrics *multiUserSettings; // ivar: _multiUserSettings
@property (readonly) Class superclass;


-(id)initWithMultiUserSettings:(id)arg0 ;


@end


#endif