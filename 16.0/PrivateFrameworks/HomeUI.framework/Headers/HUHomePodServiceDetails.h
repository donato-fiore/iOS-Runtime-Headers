// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEPODSERVICEDETAILS_H
#define HUHOMEPODSERVICEDETAILS_H


#import <Foundation/Foundation.h>


@interface HUHomePodServiceDetails : NSObject



+(id)SAHomePodCardForMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 ;
+(id)SAHomePodCardForMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 cornerRadius:(CGFloat)arg3 ;
+(id)SAHomePodCardWithQuickControlsForDeviceUUID:(id)arg0 inHomeWithUUID:(id)arg1 ;
+(id)SAHomePodCardWithQuickControlsForDeviceUUID:(id)arg0 inHomeWithUUID:(id)arg1 cornerRadius:(CGFloat)arg2 ;
+(id)_homePodDetailsViewControllerForAccessory:(id)arg0 inHome:(id)arg1 cornerRadius:(CGFloat)arg2 ;
+(id)_homePodDetailsViewControllerForAccessoryWithMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 cornerRadius:(CGFloat)arg3 ;
+(id)_homePodDetailsViewControllerForHomePodWithUUID:(id)arg0 inHomeWithUUID:(id)arg1 fromHomes:(id)arg2 cornerRadius:(CGFloat)arg3 ;
+(id)_homePodDetailsViewControllerForMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 cornerRadius:(CGFloat)arg3 ;
+(id)_homePodSettingsViewControllerForAccessory:(id)arg0 inHome:(id)arg1 ;
+(id)_homePodSettingsViewControllerForHomePodWithUUID:(id)arg0 inHomeWithUUID:(id)arg1 fromHomes:(id)arg2 ;
+(id)homePodCardForDeviceUUID:(id)arg0 inHomeWithUUID:(id)arg1 ;
+(id)homePodCardForMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 ;
+(id)homePodCardForMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 cornerRadius:(CGFloat)arg3 ;
+(id)homePodCardWithQuickControlsForDeviceUUID:(id)arg0 inHomeWithUUID:(id)arg1 ;
+(id)homePodCardWithQuickControlsForDeviceUUID:(id)arg0 inHomeWithUUID:(id)arg1 cornerRadius:(CGFloat)arg2 ;


@end


#endif