// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTPROFILEROUTINECONFIGURATIONEVENT_H
#define HMDSIRIENDPOINTPROFILEROUTINECONFIGURATIONEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDSiriEndpointProfileAccessorySettingFields.h"
#import "HMDSiriEndpointProfileFields.h"

@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly) NSString *accessoryCategoryType; // ivar: _accessoryCategoryType
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields; // ivar: _accessorySettingFields
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDSiriEndpointProfileFields *profileFields; // ivar: _profileFields
@property (readonly) Class superclass;


-(id)attributeDescriptions;
-(id)initWithAccessoryCategoryType:(id)arg0 profileFields:(id)arg1 accessorySettingFields:(id)arg2 ;


@end


#endif