// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMULTIUSERSETTINGSLOGEVENT_H
#define HMDMULTIUSERSETTINGSLOGEVENT_H

@class HMMLogEvent, NSString, HMMultiUserSettingsForMetrics;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMultiUserSettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) HMMultiUserSettingsForMetrics *multiUserSettings; // ivar: _multiUserSettings


-(id)eventName;
-(id)initWithMultiUserSettings:(id)arg0 ;
-(id)serializedEvent;


@end


#endif