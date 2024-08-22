// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFRAGMENTEDMOVIETRACK_H
#define AVFRAGMENTEDMOVIETRACK_H



#import "AVMovieTrack.h"
#import "AVFragmentedMovieTrackInternal.h"

@interface AVFragmentedMovieTrack : AVMovieTrack {
    AVFragmentedMovieTrackInternal *_fragmentedMovieTrack;
}




+(BOOL)expectsPropertyRevisedNotifications;


@end


#endif