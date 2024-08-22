// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOKITMEDIAPROVIDERAVASSETDOWNLOADSIMULATION_H
#define PUPHOTOKITMEDIAPROVIDERAVASSETDOWNLOADSIMULATION_H

@class AVAsset, AVAudioMix, NSDictionary;


#import "PUPhotoKitMediaProviderDownloadSimulation.h"

@interface PUPhotoKitMediaProviderAVAssetDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultAVAsset:) AVAsset *_resultAVAsset; // ivar: __resultAVAsset
@property (retain, nonatomic, setter=_setResultAudioMix:) AVAudioMix *_resultAudioMix; // ivar: __resultAudioMix
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // ivar: __resultInfo
@property (copy, nonatomic) id *externalProgressHandler; // ivar: _externalProgressHandler
@property (copy, nonatomic) id *externalResultHandler; // ivar: _externalResultHandler
@property (readonly, copy, nonatomic) id *internalProgressHandler; // ivar: _internalProgressHandler
@property (readonly, copy, nonatomic) id *internalResultHandler; // ivar: _internalResultHandler


-(id)init;
-(void)_handleResultAVAsset:(id)arg0 audioMix:(id)arg1 info:(id)arg2 ;
-(void)endSimulationWithError:(id)arg0 ;
-(void)updateSimulationWithProgress:(CGFloat)arg0 ;


@end


#endif