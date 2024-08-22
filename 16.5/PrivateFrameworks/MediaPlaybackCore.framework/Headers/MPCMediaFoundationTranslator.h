// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMEDIAFOUNDATIONTRANSLATOR_H
#define MPCMEDIAFOUNDATIONTRANSLATOR_H

@class NSMapTable, AVPlayerPlaybackCoordinator, NSString;
@protocol MFQueueControlling;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling>



@property (readonly, copy, nonatomic) NSMapTable *mapping; // ivar: _mapping
@property (readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // ivar: _playbackCoordinator
@property (weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, copy, nonatomic) NSString *targetContentItemID;


-(BOOL)canSkipInDirection:(NSInteger)arg0 fromItem:(id)arg1 ;
-(id)MPAVItemForMFPlayerItem:(id)arg0 ;
-(id)_MPAVItemForContentItemID:(id)arg0 allowReuse:(BOOL)arg1 ;
-(id)contentItemIDsFromOffset:(NSInteger)arg0 toOffset:(NSInteger)arg1 nowPlayingIndex:(*NSInteger)arg2 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)itemToFollowItem:(id)arg0 direction:(NSInteger)arg1 distance:(NSInteger)arg2 reason:(NSInteger)arg3 ;
-(id)queueItemForContentItemID:(id)arg0 allowReuse:(BOOL)arg1 error:(*id)arg2 ;
-(id)queueItemForPlayerItem:(id)arg0 allowReuse:(BOOL)arg1 ;
-(void)invalidateCache;
-(void)invalidateCacheWithContentItemID:(id)arg0 ;
-(void)setMPAVItem:(id)arg0 forMFPlayerItem:(id)arg1 ;
-(void)updatePlayerPlaybackCoordinator:(id)arg0 ;


@end


#endif