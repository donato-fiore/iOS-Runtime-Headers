// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMUSICPLAYERAPPLICATIONCONTROLLER_H
#define MPMUSICPLAYERAPPLICATIONCONTROLLER_H

@class NSXPCConnection;


#import "MPMusicPlayerController.h"

@interface MPMusicPlayerApplicationController : MPMusicPlayerController

@property (nonatomic) BOOL disableAutoPlay; // ivar: _disableAutoPlay
@property (nonatomic) BOOL disableAutomaticCanBeNowPlaying; // ivar: _disableAutomaticCanBeNowPlaying
@property (nonatomic) BOOL disableRepeat; // ivar: _disableRepeat
@property (nonatomic) BOOL disableShuffle; // ivar: _disableShuffle
@property (readonly, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection


+(BOOL)shouldUseSystemMusicAppOnMacOS;
+(void)setShouldUseSystemMusicAppOnMacOS:(BOOL)arg0 ;
-(id)_mediaItemsForContentItemIDs:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 queue:(id)arg1 ;
-(void)_clearConnection;
-(void)_establishConnectionIfNeeded;
-(void)beginGeneratingPlaybackNotifications;
-(void)beginPlaybackAtHostTime:(struct ? )arg0 ;
-(void)dealloc;
-(void)endGeneratingPlaybackNotifications;
-(void)onApplicationServer:(id)arg0 ;
// -(void)onApplicationServerAsync:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)performQueueTransaction:(id)arg0 completionHandler:(unk)arg1  ;
-(void)prerollWithCompletion:(id)arg0 ;
-(void)setRelativeVolume:(float)arg0 ;


@end


#endif