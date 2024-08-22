// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOREADERRAND_H
#define VIDEOREADERRAND_H



#import "VideoReader.h"

@interface VideoReaderRand : VideoReader {
    ? _frameTimes;
    int _lastFrameDex;
    int _numFrames;
}




-(?)getFrameAtTime:(?)arg0 framerawFrameIndex;
-(id)initFromFile:(id)arg0 frameTimes:(*void)arg1 ;
-(id)initFromFile:(id)arg0 withParams:(id)arg1 ;
-(int)indexForTime:(struct ? )arg0 ;
-(int)reset;


@end


#endif