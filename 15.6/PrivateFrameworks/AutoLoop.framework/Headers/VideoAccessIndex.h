// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOACCESSINDEX_H
#define VIDEOACCESSINDEX_H

@class AVAsset, AVAssetTrack;

#import <Foundation/Foundation.h>

#import "VideoReaderRand.h"

@interface VideoAccessIndex : NSObject {
    ? mFrameTimes;
    unsigned int numFrames;
}


@property (readonly) AVAsset *asset; // ivar: asset
@property (retain) VideoReaderRand *readerRand; // ivar: readerRand
@property (readonly) AVAssetTrack *videoTrack; // ivar: videoTrack


-(id)initFromFile:(id)arg0 pixelFormat:(unsigned int)arg1 frameTimes:(*void)arg2 ;
-(int)getFrameAtIndex:(unsigned int)arg0 pixBuf:(struct __CVBuffer **)arg1 ;


@end


#endif