// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMEPODSERVICEDETAILS_H
#define HUHOMEPODSERVICEDETAILS_H


#import <Foundation/Foundation.h>


@interface HUHomePodServiceDetails : NSObject



+(id)_homePodDetailsViewControllerForAccessory:(id)arg0 inHome:(id)arg1 ;
+(id)_homePodDetailsViewControllerForAccessoryWithMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 ;
+(id)_homePodDetailsViewControllerForHomePodWithUUID:(id)arg0 inHomeWithUUID:(id)arg1 fromHomes:(id)arg2 ;
+(id)_homePodDetailsViewControllerForMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 ;
+(id)_homePodSettingsViewControllerForAccessory:(id)arg0 inHome:(id)arg1 ;
+(id)_homePodSettingsViewControllerForHomePodWithUUID:(id)arg0 inHomeWithUUID:(id)arg1 fromHomes:(id)arg2 ;
+(id)homePodCardForDeviceUUID:(id)arg0 inHomeWithUUID:(id)arg1 ;
+(id)homePodCardForMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 ;
+(id)homePodCardWithQuickControlsForDeviceUUID:(id)arg0 inHomeWithUUID:(id)arg1 ;


@end


#endif