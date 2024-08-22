// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDWIFIRECONFIGURATIONLOGEVENT_H
#define HMDWIFIRECONFIGURATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessory.h"

@interface HMDWiFiReconfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (retain, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (retain, nonatomic) HMDAccessory *routerAccessory; // ivar: _routerAccessory
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (nonatomic, getter=isUsingFailSafeUpdate) BOOL usingFailSafeUpdate; // ivar: _usingFailSafeUpdate


-(id)init;


@end


#endif