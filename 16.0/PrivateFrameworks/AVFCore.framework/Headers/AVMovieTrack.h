// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOVIETRACK_H
#define AVMOVIETRACK_H



#import "AVAssetTrack.h"
#import "AVMovieTrackInternal.h"

@interface AVMovieTrack : AVAssetTrack {
    AVMovieTrackInternal *_movieTrackInternal;
}


@property (readonly, nonatomic) NSInteger alternateGroupID;
@property (readonly, nonatomic) ? mediaDecodeTimeRange;
@property (readonly, nonatomic) ? mediaPresentationTimeRange;


+(BOOL)expectsPropertyRevisedNotifications;
-(id)description;
-(id)mediaDataStorage;


@end


#endif