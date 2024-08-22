// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPACCESSORYNOTIFICATIONEVENT_H
#define HMDHAPACCESSORYNOTIFICATIONEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPAccessory.h"
#import "HMDCharacteristic.h"

@interface HMDHAPAccessoryNotificationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (retain, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) HMDCharacteristic *characteristic; // ivar: _characteristic


-(BOOL)isThreadAccessory:(id)arg0 ;
-(id)eventName;
-(id)initWithAccessory:(id)arg0 characteristic:(id)arg1 ;
-(id)serializedEvent;


@end


#endif