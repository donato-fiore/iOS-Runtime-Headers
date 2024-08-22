// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETREADERVIDEOCOMPOSITIONOUTPUTINTERNAL_H
#define AVASSETREADERVIDEOCOMPOSITIONOUTPUTINTERNAL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVVideoOutputSettings.h"
#import "AVVideoComposition.h"
#import "AVCustomVideoCompositorSession.h"

@interface AVAssetReaderVideoCompositionOutputInternal : NSObject {
    NSArray *videoTracks;
    NSArray *sampleDataTrackIDs;
    AVVideoOutputSettings *videoOutputSettings;
    AVVideoComposition *videoComposition;
    *void figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
}






@end


#endif