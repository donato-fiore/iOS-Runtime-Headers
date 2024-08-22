// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAVIDEOPARAMETERSELECTION_H
#define HMDCAMERAVIDEOPARAMETERSELECTION_H

@class NSArray, NSNumber;


#import "HMDCameraParameterSelection.h"
#import "HMDSupportedRTPConfiguration.h"
#import "HMDVideoCodec.h"
#import "HMDH264Level.h"
#import "HMDPacketizationMode.h"
#import "HMDH264Profile.h"
#import "HMDSelectedVideoParameters.h"
#import "HMDCameraVideoTier.h"
#import "HMDStreamingCapabilities.h"
#import "HMDSupportedVideoStreamConfiguration.h"
#import "HMDCameraVideoTierParameters.h"

@interface HMDCameraVideoParameterSelection : HMDCameraParameterSelection

@property (readonly, nonatomic) NSArray *h264LevelsPreference; // ivar: _h264LevelsPreference
@property (readonly, nonatomic) NSArray *h264PacketizationPreference; // ivar: _h264PacketizationPreference
@property (readonly, nonatomic) NSArray *h264ProfilesPreference; // ivar: _h264ProfilesPreference
@property (readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration; // ivar: _rtpConfiguration
@property (retain, nonatomic) HMDVideoCodec *selectedCodecType; // ivar: _selectedCodecType
@property (retain, nonatomic) NSNumber *selectedFramerate; // ivar: _selectedFramerate
@property (retain, nonatomic) HMDH264Level *selectedLevel; // ivar: _selectedLevel
@property (retain, nonatomic) HMDPacketizationMode *selectedPacketizationMode; // ivar: _selectedPacketizationMode
@property (retain, nonatomic) HMDH264Profile *selectedProfile; // ivar: _selectedProfile
@property (retain, nonatomic) HMDSelectedVideoParameters *selectedVideoParameters; // ivar: _selectedVideoParameters
@property (retain, nonatomic) HMDCameraVideoTier *selectedVideoTier; // ivar: _selectedVideoTier
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // ivar: _streamingCapabilities
@property (readonly, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // ivar: _supportedVideoStreamConfiguration
@property (readonly, nonatomic) NSNumber *syncSource; // ivar: _syncSource
@property (readonly, nonatomic) NSArray *validVideoParameterCombinations; // ivar: _validVideoParameterCombinations
@property (readonly, nonatomic) NSArray *videoCodecsPreference; // ivar: _videoCodecsPreference
@property (readonly, nonatomic) NSArray *videoResolutionsPreference; // ivar: _videoResolutionsPreference
@property (readonly, nonatomic) HMDCameraVideoTierParameters *videoTierParameters; // ivar: _videoTierParameters


+(id)logCategory;
-(BOOL)_selectParametersFromCodec:(id)arg0 profiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3 videoAttributes:(id)arg4 ;
-(BOOL)selectVideoParameters;
-(id)createReselectedVideoParameters:(id)arg0 ;
-(id)createSRTPParamters;
-(id)createSelectedVideoParameters;
-(id)initWithSessionID:(id)arg0 videoTierParameters:(id)arg1 supportedVideoConfiguration:(id)arg2 supportedRTPConfiguration:(id)arg3 streamingCapabilities:(id)arg4 ;
-(id)logIdentifier;
-(void)_generateAllCombinations;
-(void)_setVideoResolutionPreference;


@end


#endif