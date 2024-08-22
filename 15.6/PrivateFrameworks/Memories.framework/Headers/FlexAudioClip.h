// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLEXAUDIOCLIP_H
#define FLEXAUDIOCLIP_H



#import "AudioClip.h"
#import "FMSong.h"
#import "FMSongRendition.h"

@interface FlexAudioClip : AudioClip

@property (nonatomic) BOOL lockedRendition; // ivar: _lockedRendition
@property (readonly, nonatomic) int sampleRate;
@property (retain, nonatomic) FMSong *song; // ivar: _song
@property (retain, nonatomic) FMSongRendition *songRendition; // ivar: _songRendition


+(id)backgroundClipWithSong:(id)arg0 ;
+(id)optionsForSong:(id)arg0 withDuration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(int)clipType;
-(int)duration;
-(int)rawSourceDuration;
-(void)generateEdits;
-(void)outroStingerTime:(struct ? *)arg0 earlyFadeStartTime:(struct ? *)arg1 endTime:(struct ? *)arg2 ;
-(void)refreshSong;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)setDuration:(int)arg0 ;


@end


#endif