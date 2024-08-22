// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMULTIUSERNEWLANGUAGENOTIFICATIONLOGEVENT_H
#define HMDMULTIUSERNEWLANGUAGENOTIFICATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMultiUserNewLanguageNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)attributeDescriptions;
-(id)initWithLanugage:(id)arg0 ;


@end


#endif