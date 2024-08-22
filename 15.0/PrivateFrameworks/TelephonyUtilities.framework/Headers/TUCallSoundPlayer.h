// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCALLSOUNDPLAYER_H
#define TUCALLSOUNDPLAYER_H


#import <Foundation/Foundation.h>

#import "TUSoundPlayer.h"

@interface TUCallSoundPlayer : NSObject

@property (nonatomic) NSInteger currentlyPlayingSoundType; // ivar: _currentlyPlayingSoundType
@property (retain, nonatomic) TUSoundPlayer *player; // ivar: _player
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;


-(BOOL)attemptToPlayDescriptor:(id)arg0 ;
-(BOOL)attemptToPlayDescriptor:(id)arg0 completion:(id)arg1 ;
-(BOOL)attemptToPlaySoundType:(NSInteger)arg0 forCall:(id)arg1 ;
-(BOOL)attemptToPlaySoundType:(NSInteger)arg0 forCall:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(void)stopPlaying;


@end


#endif