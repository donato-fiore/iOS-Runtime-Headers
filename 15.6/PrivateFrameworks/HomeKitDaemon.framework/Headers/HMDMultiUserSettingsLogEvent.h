// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMULTIUSERSETTINGSLOGEVENT_H
#define HMDMULTIUSERSETTINGSLOGEVENT_H

@class HMMLogEvent, NSString, HMMultiUserSettingsForMetrics, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMultiUserSettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) HMMultiUserSettingsForMetrics *multiUserSettings; // ivar: _multiUserSettings
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithMultiUserSettings:(id)arg0 ;


@end


#endif