// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFCLIENTCONFIGURATIONMUTATION_H
#define _AFCLIENTCONFIGURATIONMUTATION_H

@class NSDate, NSString;
@protocol AFClientConfigurationMutating;

#import <Foundation/Foundation.h>

#import "AFClientConfiguration.h"
#import "AFAccessibilityState.h"
#import "AFAudioPlaybackRequest.h"

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating>

 {
    AFClientConfiguration *_baseModel;
    AFAccessibilityState *_accessibilityState;
    NSInteger _deviceRingerSwitchState;
    BOOL _isDeviceInCarDNDMode;
    BOOL _isDeviceInStarkMode;
    BOOL _isDeviceWatchAuthenticated;
    BOOL _areAnnouncementRequestsPermittedByPresentationWhileActive;
    float _outputVolume;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
    NSDate *_deviceSetupFlowBeginDate;
    NSDate *_deviceSetupFlowEndDate;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAccessibilityState:(id)arg0 ;
-(void)setAreAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)arg0 ;
-(void)setDeviceRingerSwitchState:(NSInteger)arg0 ;
-(void)setDeviceSetupFlowBeginDate:(id)arg0 ;
-(void)setDeviceSetupFlowEndDate:(id)arg0 ;
-(void)setIsDeviceInCarDNDMode:(BOOL)arg0 ;
-(void)setIsDeviceInStarkMode:(BOOL)arg0 ;
-(void)setIsDeviceWatchAuthenticated:(BOOL)arg0 ;
-(void)setOutputVolume:(float)arg0 ;
-(void)setTapToSiriAudioPlaybackRequest:(id)arg0 ;
-(void)setTwoShotAudioPlaybackRequest:(id)arg0 ;


@end


#endif