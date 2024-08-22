// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMUSICPLAYERSYSTEMCONTROLLER_H
#define MPMUSICPLAYERSYSTEMCONTROLLER_H

@class NSString;
@protocol MPSystemMusicPlayerController;


#import "MPMusicPlayerController.h"

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAccessCache;
-(BOOL)userQueueModificationsDisabled;
-(NSInteger)playbackState;
-(NSInteger)repeatMode;
-(id)_nowPlaying;
-(id)_queueDescriptor;
-(void)_establishConnectionIfNeeded;
-(void)onSystemServer:(id)arg0 ;
-(void)openToPlayQueueDescriptor:(id)arg0 ;
-(void)setRepeatMode:(NSInteger)arg0 ;
-(void)setShuffleMode:(NSInteger)arg0 ;
-(void)setUserQueueModificationsDisabled:(BOOL)arg0 ;


@end


#endif