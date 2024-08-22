// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERAPLAYBACKENGINECONFIGURATION_H
#define HFCAMERAPLAYBACKENGINECONFIGURATION_H

@class HMCameraProfile, HMHome, NSUUID;
@protocol HFCameraClipScrubbing;

#import <Foundation/Foundation.h>

#import "HFCameraPlaybackPosition.h"

@interface HFCameraPlaybackEngineConfiguration : NSObject

@property (readonly, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (weak, nonatomic) NSObject<HFCameraClipScrubbing> *clipScrubber; // ivar: _clipScrubber
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSUUID *notificationClipUUID; // ivar: _notificationClipUUID
@property (retain, nonatomic) NSUUID *notificationUUID; // ivar: _notificationUUID
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition; // ivar: _playbackPosition


-(id)initWithHome:(id)arg0 cameraProfile:(id)arg1 ;
-(void)assertConfigurationIsValid;


@end


#endif