// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYBACKENGINESESSIONMANAGER_H
#define _MPCPLAYBACKENGINESESSIONMANAGER_H

@class MPRemoteCommandCenter, NSString, MPNowPlayingInfoCenter, NSMutableArray, NSMutableDictionary;
@protocol MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "MPCPlayerPath.h"

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSource>



@property (readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // ivar: _commandCenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // ivar: _infoCenter
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) NSMutableArray *sessionArchives; // ivar: _sessionArchives
@property (readonly, nonatomic) NSMutableDictionary *sessionIdentifierArchiveMap; // ivar: _sessionIdentifierArchiveMap
@property (readonly, nonatomic) NSMutableDictionary *stagedQueueControllers; // ivar: _stagedQueueControllers
@property (retain, nonatomic) NSString *stateRestorationSessionIdentifier;
@property (readonly) Class superclass;


+(id)archivesAtURL:(id)arg0 ;
-(BOOL)unstageQueueControllerForIdentifier:(id)arg0 ;
-(id)_cachesDirectory;
-(id)_playbackSessionsDirectory;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)nowPlayingInfoCenter:(id)arg0 artworkForContentItem:(id)arg1 size:(struct CGSize )arg2 completion:(id)arg3 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemForID:(id)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemIDForOffset:(NSInteger)arg1 ;
-(id)queueControllerForIdentifier:(id)arg0 ;
-(id)stagedQueueControllerIdentifiers;
-(void)_performCommandEvent:(id)arg0 completion:(id)arg1 ;
-(void)deleteSessionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)loadSessionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)publishIfNeeded;
-(void)saveSessionWithCompletion:(id)arg0 ;
-(void)stageQueueController:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif