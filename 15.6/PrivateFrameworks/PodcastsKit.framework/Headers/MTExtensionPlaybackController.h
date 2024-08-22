// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTEXTENSIONPLAYBACKCONTROLLER_H
#define MTEXTENSIONPLAYBACKCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MTExtensionPlaybackController : NSObject

@property (retain, nonatomic) NSMutableArray *magicMomentCompletionHandlers; // ivar: _magicMomentCompletionHandlers


+(struct _MRSystemAppPlaybackQueue *)playbackQueueForIdentifier:(id)arg0 startPlayback:(BOOL)arg1 assetInfo:(id)arg2 ;
+(void)_setPlaybackQueueWithIdentifier:(id)arg0 startPlayback:(BOOL)arg1 assetInfo:(id)arg2 requesterSharedUserId:(id)arg3 sharedUserIdFromPlayableITunesAccount:(id)arg4 playerID:(id)arg5 mrCompletion:(id)arg6 ;
+(void)getNowPlayingInfoForMagicMomentInfoCenterWithCompletion:(id)arg0 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg0 assetInfo:(id)arg1 requesterSharedUserId:(id)arg2 sharedUserIdFromPlayableITunesAccount:(id)arg3 mrCompletion:(id)arg4 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg0 mrCompletion:(id)arg1 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg0 startPlayback:(BOOL)arg1 assetInfo:(id)arg2 requesterSharedUserId:(id)arg3 sharedUserIdFromPlayableITunesAccount:(id)arg4 completion:(id)arg5 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg0 startPlayback:(BOOL)arg1 assetInfo:(id)arg2 requesterSharedUserId:(id)arg3 sharedUserIdFromPlayableITunesAccount:(id)arg4 mrCompletion:(id)arg5 ;
-(id)init;
-(void)_getNowPlayingInfoAndCallPendingCompletions;
-(void)_playbackQueueChangedNotification:(id)arg0 ;
-(void)populateMagicMomentInfoCenterWithPlaybackRequestIdentifier:(id)arg0 mrCompletion:(id)arg1 ;


@end


#endif