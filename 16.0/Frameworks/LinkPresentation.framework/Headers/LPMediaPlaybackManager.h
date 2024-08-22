// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPMEDIAPLAYBACKMANAGER_H
#define LPMEDIAPLAYBACKMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface LPMediaPlaybackManager : NSObject {
    NSHashTable *_mediaPlayers;
}




+(id)shared;
-(BOOL)_sharedSessionHasPlayingAudio;
-(BOOL)releaseDecodingResourcesForInactivePlayers;
-(id)audioSession;
-(id)init;
-(void)_deactivateAllPlayingMediaPlayersExcept:(id)arg0 ;
-(void)_updateAudioSessionCategory;
-(void)addMediaPlayer:(id)arg0 ;
-(void)mediaPlayer:(id)arg0 didChangeMutedState:(BOOL)arg1 ;
-(void)mediaPlayer:(id)arg0 didChangePlayingState:(BOOL)arg1 ;
-(void)removeMediaPlayer:(id)arg0 ;
-(void)volumeChanged:(id)arg0 ;


@end


#endif