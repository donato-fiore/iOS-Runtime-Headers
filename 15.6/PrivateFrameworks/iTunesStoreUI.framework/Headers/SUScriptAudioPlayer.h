// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTAUDIOPLAYER_H
#define SUSCRIPTAUDIOPLAYER_H

@class NSURL, NSString;


#import "SUScriptObject.h"
#import "SUPlayerStatus.h"

@interface SUScriptAudioPlayer : SUScriptObject {
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
    NSURL *_keyUrl;
    NSURL *_certificateUrl;
}


@property (readonly) NSString *URL;
@property (readonly) NSString *certificateURL;
@property (readonly) CGFloat currentTime;
@property (readonly) CGFloat duration;
@property (readonly) NSString *keyURL;
@property (readonly) NSString *nowPlayingKeyAlbumTitle;
@property (readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property (readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property (readonly) NSString *nowPlayingKeyArtist;
@property (readonly) NSString *nowPlayingKeyArtwork;
@property (readonly) NSString *nowPlayingKeyComposer;
@property (readonly) NSString *nowPlayingKeyDiscCount;
@property (readonly) NSString *nowPlayingKeyDiscNumber;
@property (readonly) NSString *nowPlayingKeyGenre;
@property (readonly) NSString *nowPlayingKeyPersistentID;
@property (readonly) NSString *nowPlayingKeyPlaybackDuration;
@property (readonly) NSString *nowPlayingKeyTitle;
@property (readonly) NSInteger playerStateActive;
@property (readonly) NSInteger playerStateBuffering;
@property (readonly) NSInteger playerStateFailed;
@property (readonly) NSInteger playerStateFinished;
@property (readonly) NSInteger playerStatePaused;
@property (readonly) NSInteger playerStateUnplayed;
@property (readonly) NSInteger state;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithURL:(id)arg0 keyURL:(id)arg1 certificateURL:(id)arg2 ;
-(id)scriptAttributeKeys;
-(void)_audioPlayerStateChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)play;
-(void)setValue:(id)arg0 forNowPlayingKey:(id)arg1 ;
-(void)stop;


@end


#endif