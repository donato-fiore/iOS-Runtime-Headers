// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFRAGMENTEDASSETTRACK_H
#define AVFRAGMENTEDASSETTRACK_H



#import "AVAssetTrack.h"
#import "AVFragmentedAssetTrackInternal.h"

@interface AVFragmentedAssetTrack : AVAssetTrack {
    AVFragmentedAssetTrackInternal *_fragmentedAssetTrack;
}




+(BOOL)expectsPropertyRevisedNotifications;


@end


#endif