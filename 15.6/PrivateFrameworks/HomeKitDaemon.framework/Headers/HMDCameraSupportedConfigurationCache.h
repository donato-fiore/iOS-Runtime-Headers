// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASUPPORTEDCONFIGURATIONCACHE_H
#define HMDCAMERASUPPORTEDCONFIGURATIONCACHE_H

@class HMFObject;


#import "HMDSupportedAudioStreamConfiguration.h"
#import "HMDSupportedRTPConfiguration.h"
#import "HMDSupportedVideoStreamConfiguration.h"

@interface HMDCameraSupportedConfigurationCache : HMFObject

@property (retain) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // ivar: _supportedAudioStreamConfiguration
@property (retain) HMDSupportedRTPConfiguration *supportedRTPConfiguration; // ivar: _supportedRTPConfiguration
@property (retain) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // ivar: _supportedVideoStreamConfiguration
@property (readonly, getter=isValid) BOOL valid;




@end


#endif