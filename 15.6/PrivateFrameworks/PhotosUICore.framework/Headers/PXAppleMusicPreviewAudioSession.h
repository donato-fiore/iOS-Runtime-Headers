// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXAPPLEMUSICPREVIEWAUDIOSESSION_H
#define PXAPPLEMUSICPREVIEWAUDIOSESSION_H



#import "PXAVPlayerAudioSession.h"

@interface PXAppleMusicPreviewAudioSession : PXAVPlayerAudioSession {
    NSInteger _requestID;
}




-(id)initWithAsset:(id)arg0 volume:(float)arg1 startTime:(struct ? )arg2 queue:(id)arg3 audioSessionDelegate:(id)arg4 ;
-(void)_handleRequestedAsset:(id)arg0 audioMix:(id)arg1 info:(id)arg2 resultHandler:(id)arg3 ;
-(void)_handleValuesLoadedForAsset:(id)arg0 audioMix:(id)arg1 info:(id)arg2 resultHandler:(id)arg3 ;
-(void)cancelMediaRequest;
-(void)requestMediaWithResultHandler:(id)arg0 ;


@end


#endif