// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGSCLOUDSTARTUPLOGEVENT_H
#define HMDCOMPOSITESETTINGSCLOUDSTARTUPLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCompositeSettingsCloudStartupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;


-(id)dictionaryRepresentation;
-(id)eventName;
-(id)serializedEvent;


@end


#endif