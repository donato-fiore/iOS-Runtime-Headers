// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)description;
-(id)initWithPlaybackContext:(id)arg0 ;
-(id)siriAssetInfo;
-(id)siriRecommendationIdentifier;
-(id)siriWHAMetricsInfo;
-(void)getPlaybackContextWithCompletion:(id)arg0 ;
-(void)setReplaceIntent:(NSInteger)arg0 ;


@end


#endif