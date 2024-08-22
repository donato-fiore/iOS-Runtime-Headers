// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMUSICPLAYERAPPLICATIONCONTROLLER_H
#define MPMUSICPLAYERAPPLICATIONCONTROLLER_H

@class NSXPCConnection;


#import "MPMusicPlayerController.h"

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {
    NSInteger _shuffleMode;
    NSInteger _repeatMode;
}


@property (readonly, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection


-(NSInteger)repeatMode;
-(NSInteger)shuffleMode;
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
-(void)setDisableAutomaticCanBeNowPlaying:(BOOL)arg0 ;
-(void)setQueueWithDescriptor:(id)arg0 ;
-(void)setRelativeVolume:(float)arg0 ;
-(void)setRepeatMode:(NSInteger)arg0 ;
-(void)setShuffleMode:(NSInteger)arg0 ;


@end


#endif