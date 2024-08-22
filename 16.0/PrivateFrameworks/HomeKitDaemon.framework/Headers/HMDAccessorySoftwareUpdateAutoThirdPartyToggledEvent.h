// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYSOFTWAREUPDATEAUTOTHIRDPARTYTOGGLEDEVENT_H
#define HMDACCESSORYSOFTWAREUPDATEAUTOTHIRDPARTYTOGGLEDEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAccessorySoftwareUpdateAutoThirdPartyToggledEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) BOOL autoThirdPartySoftwareUpdateEnable; // ivar: _autoThirdPartySoftwareUpdateEnable
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) NSUInteger numCameraAccessories; // ivar: _numCameraAccessories
@property (readonly) NSUInteger numCameraAccessoriesRecordingEnabled; // ivar: _numCameraAccessoriesRecordingEnabled
@property (readonly) NSUInteger numCriticalSensorAccessories; // ivar: _numCriticalSensorAccessories
@property (readonly) NSUInteger numHAPAccessories; // ivar: _numHAPAccessories
@property (readonly) NSUInteger numSecurityClassAccessories; // ivar: _numSecurityClassAccessories
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(id)eventWithAutoThirdPartyUpdateEnable:(BOOL)arg0 numHAPAccessories:(NSUInteger)arg1 numCameraAccessories:(NSUInteger)arg2 numCameraAccessoriesRecordingEnabled:(NSUInteger)arg3 numSecurityClassAccessories:(NSUInteger)arg4 numCriticalSensorAccessories:(NSUInteger)arg5 ;
+(id)eventWithHome:(id)arg0 ;
-(id)initWithAutoThirdPartyUpdateEnable:(BOOL)arg0 numHAPAccessories:(NSUInteger)arg1 numCameraAccessories:(NSUInteger)arg2 numCameraAccessoriesRecordingEnabled:(NSUInteger)arg3 numSecurityClassAccessories:(NSUInteger)arg4 numCriticalSensorAccessories:(NSUInteger)arg5 ;


@end


#endif