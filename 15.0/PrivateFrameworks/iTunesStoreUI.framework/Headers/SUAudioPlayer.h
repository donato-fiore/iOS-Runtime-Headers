// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUAUDIOPLAYER_H
#define SUAUDIOPLAYER_H

@class AVURLAsset, NSMutableDictionary, AVPlayer, AVPlayerItem, NSURL, NSString;
@protocol AVAssetResourceLoaderDelegate;

#import <Foundation/Foundation.h>

#import "SUPlayerStatus.h"

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate>

 {
    AVURLAsset *_asset;
    BOOL _didPostForPreviewHistory;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SUPlayerStatus *_status;
    id *_timeObserver;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (retain, nonatomic) NSURL *certificateURL; // ivar: _certificateUrl
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *keyURL; // ivar: _keyUrl
@property (readonly, nonatomic) SUPlayerStatus *playerStatus;
@property (nonatomic) NSInteger storeItemIdentifier; // ivar: _storeItemIdentifier
@property (readonly) Class superclass;


-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)_newFadeInAudioMixForAsset:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)valueForNowPlayingKey:(id)arg0 ;
-(void)_applyNowPlayingInfo;
-(void)_destroyPlayer;
-(void)_destroyPlayerItem;
-(void)_failWithError:(id)arg0 ;
-(void)_handleAssetValuesDidLoad;
-(void)_itemFailedToPlayToEndNotification:(id)arg0 ;
-(void)_itemPlayedToEndNotification:(id)arg0 ;
-(void)_postStatusChangeNotification;
-(void)_setPlayerState:(NSInteger)arg0 ;
-(void)_updateForPeriodicTickWithTime:(CGFloat)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)seekToTime:(CGFloat)arg0 ;
-(void)setValue:(id)arg0 forNowPlayingKey:(id)arg1 ;
-(void)stop;


@end


#endif