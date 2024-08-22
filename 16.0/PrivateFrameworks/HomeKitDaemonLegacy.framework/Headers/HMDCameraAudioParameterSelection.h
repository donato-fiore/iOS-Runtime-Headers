// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERAAUDIOPARAMETERSELECTION_H
#define HMDCAMERAAUDIOPARAMETERSELECTION_H

@class NSArray, NSNumber;


#import "HMDCameraParameterSelection.h"
#import "HMDSupportedRTPConfiguration.h"
#import "HMDCameraAudioParameterCombination.h"
#import "HMDSelectedAudioParameters.h"
#import "HMDBitRateSetting.h"
#import "HMDAudioCodecGroup.h"
#import "HMDAudioSampleRate.h"
#import "HMDStreamingCapabilities.h"
#import "HMDSupportedAudioStreamConfiguration.h"

@interface HMDCameraAudioParameterSelection : HMDCameraParameterSelection

@property (readonly, nonatomic) NSArray *audioCodecsPreference; // ivar: _audioCodecsPreference
@property (readonly, nonatomic) NSArray *bitrateSettingsPreference; // ivar: _bitrateSettingsPreference
@property (retain, nonatomic) NSNumber *comfortNoiseSupported; // ivar: _comfortNoiseSupported
@property (readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration; // ivar: _rtpConfiguration
@property (readonly, nonatomic) NSArray *sampleRatesPreference; // ivar: _sampleRatesPreference
@property (retain, nonatomic) NSNumber *selectedAudioChannelCount; // ivar: _selectedAudioChannelCount
@property (retain, nonatomic) HMDCameraAudioParameterCombination *selectedAudioParameterCombination; // ivar: _selectedAudioParameterCombination
@property (retain, nonatomic) HMDSelectedAudioParameters *selectedAudioParameters; // ivar: _selectedAudioParameters
@property (retain, nonatomic) HMDBitRateSetting *selectedBitRateSetting; // ivar: _selectedBitRateSetting
@property (retain, nonatomic) HMDAudioCodecGroup *selectedCodecGroupType; // ivar: _selectedCodecGroupType
@property (retain, nonatomic) HMDAudioSampleRate *selectedSampleRate; // ivar: _selectedSampleRate
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // ivar: _streamingCapabilities
@property (readonly, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // ivar: _supportedAudioStreamConfiguration
@property (readonly, nonatomic) NSArray *validAudioParameterCombinations; // ivar: _validAudioParameterCombinations


+(id)logCategory;
-(BOOL)_selectParametersFromCodec:(id)arg0 bitRateSettings:(id)arg1 sampleRates:(id)arg2 audioChannelCount:(id)arg3 ;
-(BOOL)selectAudioParameters;
-(id)createSRTPParamters;
-(id)createSelectedAudioParameters;
-(id)initWithSessionID:(id)arg0 supportedAudioConfiguration:(id)arg1 supportedRTPConfiguration:(id)arg2 streamingCapabilities:(id)arg3 ;
-(id)logIdentifier;
-(void)_generateAllCombinations:(id)arg0 ;


@end


#endif