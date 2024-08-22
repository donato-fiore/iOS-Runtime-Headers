// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPLAYBACKCONTEXTREMOTEPLAYBACKQUEUE_H
#define MPPLAYBACKCONTEXTREMOTEPLAYBACKQUEUE_H



#import "MPRemotePlaybackQueue.h"
#import "MPPlaybackContext.h"

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    NSInteger _replaceIntent;
}




-(BOOL)isRequestingImmediatePlayback;
-(NSInteger)replaceIntent;
-(id)asMusicPlaybackContextWithError:(*id)arg0 ;
-(id)description;
-(id)initWithPlaybackContext:(id)arg0 ;
-(id)privateListeningOverride;
-(id)siriAssetInfo;
-(id)siriRecommendationIdentifier;
-(id)siriWHAMetricsInfo;
-(void)setReplaceIntent:(NSInteger)arg0 ;


@end


#endif