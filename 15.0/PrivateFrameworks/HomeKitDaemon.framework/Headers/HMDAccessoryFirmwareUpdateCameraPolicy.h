// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)_handleStreamStatusMultireadResponse:(id)arg0 ;
-(void)_processStreamingStatus:(id)arg0 ;
-(void)configure;
-(void)handleAccessoryConnectedNotification:(id)arg0 ;
-(void)handleAccessoryDisconnectedNotification:(id)arg0 ;
-(void)handleCharacteristicValuesChanged:(id)arg0 ;
-(void)handleSettingsChange:(id)arg0 ;
-(void)monitorStreamStatus:(BOOL)arg0 ;
-(void)registerForNotifications;


@end


#endif