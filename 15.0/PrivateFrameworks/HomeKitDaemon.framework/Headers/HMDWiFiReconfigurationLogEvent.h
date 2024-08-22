// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWIFIRECONFIGURATIONLOGEVENT_H
#define HMDWIFIRECONFIGURATIONLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessory.h"

@interface HMDWiFiReconfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (retain, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (retain, nonatomic) HMDAccessory *routerAccessory; // ivar: _routerAccessory
@property (nonatomic, getter=isUsingFailSafeUpdate) BOOL usingFailSafeUpdate; // ivar: _usingFailSafeUpdate


-(id)eventName;
-(id)init;
-(id)serializedEvent;


@end


#endif