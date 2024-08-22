// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCMEDIAREMOTENULLCONTROLLER_H
#define _MPCMEDIAREMOTENULLCONTROLLER_H



#import "MPCMediaRemoteController.h"
#import "MPCFuture.h"

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_contentItemForIdentifierFuture;
    MPCFuture *_contentItemArtworkForIdentifierFuture;
}




+(BOOL)_shouldRegisterForNotifications;
-(NSInteger)contentItemArtworkCacheStateForIdentifier:(id)arg0 size:(struct CGSize )arg1 ;
-(NSInteger)contentItemCacheStateForIdentifier:(id)arg0 ;
-(NSInteger)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange )arg0 ;
-(NSInteger)playbackStateCacheState;
-(NSInteger)playingIdentifierCacheState;
-(NSInteger)supportedCommandsCacheState;
-(id)_init;
-(id)contentItemArtworkForContentItemIdentifier:(id)arg0 artworkIdentifier:(id)arg1 size:(struct CGSize )arg2 ;
-(id)contentItemForIdentifier:(id)arg0 ;
-(id)playQueueIdentifiersForRange:(struct _MSVSignedRange )arg0 ;
-(id)playQueueIdentifiersForRequest:(*void)arg0 ;
-(id)playbackState;
-(id)playingIdentifier;
-(id)supportedCommands;
-(void)invalidateAllTokens;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif