// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMFULLSCREENEFFECTPLAYER_H
#define IMFULLSCREENEFFECTPLAYER_H

@class NSString, NSTimer, UIImage, IMMessagePartChatItem;
@protocol IMFullScreenEffectSoundPlayerDelegate, IMFullScreenEffectPlayerDelegate, IMFullScreenEffectSoundPlayer;

#import <Foundation/Foundation.h>

#import "IMFullScreenEffect.h"

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMFullScreenEffectPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didPlay;
@property (weak, nonatomic) NSTimer *effectTimer; // ivar: _effectTimer
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (retain, nonatomic) IMFullScreenEffect *fullScreenEffect; // ivar: _fullScreenEffect
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) UIImage *messageImage; // ivar: _messageImage
@property (weak, nonatomic) IMMessagePartChatItem *messagePartChatItem; // ivar: _messagePartChatItem
@property (nonatomic) BOOL shouldRepeat; // ivar: _shouldRepeat
@property (retain, nonatomic) NSObject<IMFullScreenEffectSoundPlayer> *soundPlayer; // ivar: _soundPlayer
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (nonatomic) BOOL triggeredByResponseKit; // ivar: _triggeredByResponseKit
@property (nonatomic) BOOL wasAborted; // ivar: _wasAborted


-(BOOL)_shouldAddFilter:(id)arg0 toCell:(id)arg1 ;
-(id)createSoundPlayer;
-(id)initWithIdentifier:(id)arg0 isFromMe:(BOOL)arg1 ;
-(id)initWithMessagePartChatItem:(id)arg0 languageCode:(id)arg1 ;
-(void)_didPrepare;
-(void)abortPlayingEffect;
-(void)addFullScreenEffectFilterToTriggeringCell:(id)arg0 ;
-(void)addFullScreenEffectFiltersToCells:(id)arg0 ;
-(void)dealloc;
-(void)didAbortPlaying;
-(void)didSetFullScreenEffect:(id)arg0 ;
-(void)didStopPlaying;
-(void)fullScreenEffectSoundPlayerDidPrepare:(id)arg0 ;
-(void)fullScreenEffectSoundPlayerDidStartPlaying:(id)arg0 ;
-(void)fullScreenEffectSoundPlayerDidStopPlaying:(id)arg0 ;
-(void)loadFullScreenEffect:(id)arg0 ;
-(void)prepareToPlayEffect;
-(void)removeFullScreenEffectFiltersFromCells:(id)arg0 ;
-(void)startPlayingEffect;
-(void)stopPlayingEffect;
-(void)stopTimer;
-(void)willStartPlaying;


@end


#endif