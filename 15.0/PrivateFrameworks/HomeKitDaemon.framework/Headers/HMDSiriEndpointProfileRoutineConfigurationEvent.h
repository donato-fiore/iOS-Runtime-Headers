// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSIRIENDPOINTPROFILEROUTINECONFIGURATIONEVENT_H
#define HMDSIRIENDPOINTPROFILEROUTINECONFIGURATIONEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;


#import "HMDSiriEndpointProfileAccessorySettingFields.h"
#import "HMDSiriEndpointProfileFields.h"

@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly) NSString *accessoryCategoryType; // ivar: _accessoryCategoryType
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields; // ivar: _accessorySettingFields
@property (readonly) HMDSiriEndpointProfileFields *profileFields; // ivar: _profileFields


-(id)attributeDescriptions;
-(id)eventName;
-(id)initWithAccessoryCategoryType:(id)arg0 profileFields:(id)arg1 accessorySettingFields:(id)arg2 ;
-(id)serializedEvent;


@end


#endif