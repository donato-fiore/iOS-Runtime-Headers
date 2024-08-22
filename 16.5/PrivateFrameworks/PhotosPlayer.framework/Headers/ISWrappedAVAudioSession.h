// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISWRAPPEDAVAUDIOSESSION_H
#define ISWRAPPEDAVAUDIOSESSION_H

@class NSString, NSHashTable, AVAudioSession;

#import <Foundation/Foundation.h>


@interface ISWrappedAVAudioSession : NSObject {
    BOOL _didBeginObservingOutputVolume;
    NSString *_expectedCategory;
    NSHashTable *_main_volumeObservers;
}


@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, nonatomic) NSString *category;


+(id)auxiliarySession;
+(id)sharedAmbientInstance;
+(id)sharedPhotosOneUpInstance;
+(id)sharedVideoPlaybackInstance;
+(void)sharedAmbientInstanceWithLoadHandler:(id)arg0 ;
+(void)sharedPhotosOneUpInstanceWithLoadHandler:(id)arg0 ;
+(void)sharedVideoPlaybackInstanceWithLoadHandler:(id)arg0 ;
-(BOOL)setActive:(BOOL)arg0 error:(*id)arg1 ;
-(id)initWithAudioSession:(id)arg0 ;
-(id)initWithAudioSession:(id)arg0 category:(id)arg1 ;
-(void)_beginObservingOutputVolumeIfNeeded;
-(void)_endObservingOutputVolumeIfNeeded;
-(void)_main_informObserversOfVolumeChangeFrom:(float)arg0 to:(float)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerVolumeObserver:(id)arg0 ;
-(void)unregisterVolumeObserver:(id)arg0 ;


@end


#endif