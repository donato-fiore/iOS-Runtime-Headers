// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOWPLAYINGPLAYERCLIENTCALLBACKS_H
#define MRNOWPLAYINGPLAYERCLIENTCALLBACKS_H

@class NSMutableDictionary, MSVMultiCallback, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRPlayerPath.h"

@interface MRNowPlayingPlayerClientCallbacks : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    id *_playbackSessionCallback;
    id *_playbackSessionMigrateBeginCallback;
    id *_playbackSessionMigrateEndCallback;
    id *_playbackSessionMigrateRequestCallback;
    id *_beginLyricsEventCallback;
    id *_endLyricsEventCallback;
    id *_videoThumbnailsCallback;
    id *_audioAmplitudeSamplesCallback;
    NSMutableDictionary *_commandHandlerBlocks;
    MSVMultiCallback *_createItemToken;
    MSVMultiCallback *_createItemForIdentifierToken;
    MSVMultiCallback *_metadataToken;
    MSVMultiCallback *_languageToken;
    MSVMultiCallback *_artworkToken;
}


@property (readonly, nonatomic) MSVMultiCallback *artworkCallbacks; // ivar: _artworkCallbacks
@property (copy, nonatomic) id *audioAmplitudeSamplesCallback;
@property (copy, nonatomic) id *beginLyricsEventCallback;
@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, copy, nonatomic) NSArray *commandHandlerBlocks;
@property (readonly, nonatomic) MSVMultiCallback *createChildItemCallbacks; // ivar: _createChildItemCallbacks
@property (readonly, nonatomic) MSVMultiCallback *createItemForIdentifierCallbacks; // ivar: _createItemForIdentifierCallbacks
@property (readonly, nonatomic) MSVMultiCallback *createItemForOffsetCallbacks; // ivar: _createItemForOffsetCallbacks
@property (readonly, nonatomic) MSVMultiCallback *createParticipantsCallbacks; // ivar: _createParticipantsCallbacks
@property (readonly, nonatomic) MSVMultiCallback *createPlaybackQueueForRequestCallbacks; // ivar: _createPlaybackQueueForRequestCallbacks
@property (copy, nonatomic) id *endLyricsEventCallback;
@property (readonly, nonatomic) BOOL hasPlaybackQueueCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *infoCallbacks; // ivar: _infoCallbacks
@property (readonly, nonatomic) MSVMultiCallback *languageOptionsCallbacks; // ivar: _languageOptionsCallbacks
@property (readonly, nonatomic) MSVMultiCallback *lyricsCallbacks; // ivar: _lyricsCallbacks
@property (readonly, nonatomic) MSVMultiCallback *metadataCallbacks; // ivar: _metadataCallbacks
@property (copy, nonatomic) id *playbackSessionCallback;
@property (copy, nonatomic) id *playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) id *playbackSessionMigrateEndCallback;
@property (copy, nonatomic) id *playbackSessionMigrateRequestCallback;
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (copy, nonatomic) id *videoThumbnailsCallback;


-(BOOL)removePlaybackQueueDataSourceCallback:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 queue:(id)arg1 ;
// -(void)addCommandHandlerBlock:(id)arg0 forKey:(unk)arg1  ;
-(void)registerNowPlayingInfoArtworkAssetCallback:(id)arg0 ;
-(void)registerNowPlayingInfoAssetCallbacks:(id)arg0 ;
-(void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;
-(void)registerNowPlayingInfoCallbacks:(id)arg0 ;
-(void)removeCommandHandlerBlockForKey:(id)arg0 ;


@end


#endif