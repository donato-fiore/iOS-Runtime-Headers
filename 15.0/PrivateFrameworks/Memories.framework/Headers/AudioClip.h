// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUDIOCLIP_H
#define AUDIOCLIP_H



#import "KonaClip.h"

@interface AudioClip : KonaClip

@property (nonatomic) int audioType;
@property (nonatomic) int cachedFadeIn; // ivar: cachedFadeIn
@property (nonatomic) int cachedFadeOut; // ivar: cachedFadeOut
@property (nonatomic) BOOL cachedFades; // ivar: cachedFades
@property (nonatomic) BOOL startOffsetValidated; // ivar: startOffsetValidated


+(BOOL)audioEnabledByDefault;
+(id)backgroundClip;
+(id)soundEffectClip;
+(int)defaultAudioTypeForClipType:(int)arg0 ;
+(int)defaultClipTypeForAudioType:(int)arg0 ;
-(BOOL)hasAudioCharacteristic;
-(BOOL)isBackgroundAudio;
-(id)asBackgroundAudioClip;
-(id)asForegroundAudioClip;
-(id)init;
-(id)themeID;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)audioFadeInDuration;
-(int)audioFadeOutDuration;
-(int)clipType;
-(int)startOffset;
-(void)setAudioFadeInDuration:(int)arg0 ;
-(void)setAudioFadeOutDuration:(int)arg0 ;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)setDuration:(int)arg0 ;
-(void)setStartOffset:(int)arg0 ;
-(void)setThemeID:(id)arg0 ;
-(void)validateFades;


@end


#endif