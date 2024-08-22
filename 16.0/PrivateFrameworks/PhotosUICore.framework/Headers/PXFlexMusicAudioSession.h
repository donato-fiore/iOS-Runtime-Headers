// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFLEXMUSICAUDIOSESSION_H
#define PXFLEXMUSICAUDIOSESSION_H



#import "PXAVPlayerAudioSession.h"
#import "PXFlexMusicAsset.h"

@interface PXFlexMusicAudioSession : PXAVPlayerAudioSession

@property (nonatomic) NSInteger audioRequestID; // ivar: _audioRequestID
@property (readonly, nonatomic) PXFlexMusicAsset *flexMusicAsset;


-(id)initWithAsset:(id)arg0 volume:(float)arg1 startTime:(struct ? )arg2 queue:(id)arg3 audioSessionDelegate:(id)arg4 ;
-(void)cancelMediaRequest;
-(void)dealloc;
-(void)requestMediaWithResultHandler:(id)arg0 ;


@end


#endif