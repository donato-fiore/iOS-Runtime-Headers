// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISWRAPPEDAVAUDIOSESSION_H
#define ISWRAPPEDAVAUDIOSESSION_H

@class AVAudioSession, NSString;

#import <Foundation/Foundation.h>


@interface ISWrappedAVAudioSession : NSObject {
    BOOL _didBeginObservingOutputVolume;
}


@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) float outputVolume;
@property (copy, nonatomic) id *outputVolumeChangeHandler; // ivar: _outputVolumeChangeHandler


+(id)auxiliarySession;
+(id)sharedAmbientInstance;
+(id)sharedPhotosOneUpInstance;
+(id)sharedPlaybackInstance;
+(void)sharedAmbientInstanceWithLoadHandler:(id)arg0 ;
+(void)sharedPhotosOneUpInstanceWithLoadHandler:(id)arg0 ;
+(void)sharedPlaybackInstanceWithLoadHandler:(id)arg0 ;
-(BOOL)setActive:(BOOL)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithAudioSession:(id)arg0 ;
-(void)_beginObservingOutputVolumeIfNeeded;
-(void)_endObservingOutputVolumeIfNeeded;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif