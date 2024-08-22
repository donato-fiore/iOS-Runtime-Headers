// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERAMEDIAPARAMETERSELECTION_H
#define HMDCAMERAMEDIAPARAMETERSELECTION_H



#import "HMDCameraParameterSelection.h"
#import "HMDCameraAudioParameterSelection.h"
#import "HMDCameraVideoParameterSelection.h"

@interface HMDCameraMediaParameterSelection : HMDCameraParameterSelection

@property (retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection; // ivar: _audioParameterSelection
@property (retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection; // ivar: _videoParameterSelection


-(BOOL)findBestMatchWithProtocolParameters:(id)arg0 streamingCapabilities:(id)arg1 videoTierParameters:(id)arg2 ;
-(void)setReselectedConfigParameters:(id)arg0 videoTier:(id)arg1 ;
-(void)setSelectedConfigParameters:(id)arg0 ;
-(void)setSelectedEndPointSetupParameters:(id)arg0 videoNetworkConfig:(id)arg1 audioNetworkConfig:(id)arg2 ;


@end


#endif