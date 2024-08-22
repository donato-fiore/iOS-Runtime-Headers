// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLAYER_H
#define VUIPLAYER_H

@class TVPPlayer;



@interface VUIPlayer : TVPPlayer



+(id)savedPreferredAudioLanguageCode;
+(void)initialize;
+(void)setSavedPreferredAudioLanguageCode:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;
-(void)_currentMediaItemDidChange:(id)arg0 ;
-(void)_videoPlaybackSettingsDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif