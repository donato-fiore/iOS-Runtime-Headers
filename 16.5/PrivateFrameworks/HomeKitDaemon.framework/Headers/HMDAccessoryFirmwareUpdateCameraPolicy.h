// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATECAMERAPOLICY_H
#define HMDACCESSORYFIRMWAREUPDATECAMERAPOLICY_H



#import "HMDAccessoryFirmwareUpdatePolicy.h"

@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy



+(id)logCategory;
-(BOOL)evaluate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)_checkStreamingStatus;
-(void)_handleStreamStatusCharacteristicChanges;
-(void)_processStreamingStatus:(id)arg0 ;
-(void)configure;
-(void)handleAccessoryConfiguredNotification:(id)arg0 ;
-(void)handleAccessoryUnconfiguredNotification:(id)arg0 ;
-(void)handleCharacteristicValuesChanged:(id)arg0 ;
-(void)handleSettingsChange:(id)arg0 ;
-(void)monitorStreamStatus:(BOOL)arg0 ;
-(void)registerForNotifications;


@end


#endif