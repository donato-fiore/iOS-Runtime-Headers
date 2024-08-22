// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETEXPORTSESSIONINTERNAL_H
#define AVASSETEXPORTSESSIONINTERNAL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVAsset.h"
#import "AVAudioMix.h"
#import "AVCustomVideoCompositorSession.h"
#import "AVVideoComposition.h"
#import "AVMetadataItemFilter.h"

@interface AVAssetExportSessionInternal : NSObject {
    *OpaqueFigAssetExportSession figExportSession;
    AVAsset *asset;
    AVAudioMix *audioMix;
    *void figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    id *handler;
}






@end


#endif