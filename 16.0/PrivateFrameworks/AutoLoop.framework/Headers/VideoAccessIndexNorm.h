// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOACCESSINDEXNORM_H
#define VIDEOACCESSINDEXNORM_H



#import "VideoAccessIndex.h"

@interface VideoAccessIndexNorm : VideoAccessIndex {
    *void mNormalizer;
}




-(id)initFromFile:(id)arg0 pixelFormat:(unsigned int)arg1 normalizer:(*void)arg2 ;
-(int)getFrameAtIndex:(unsigned int)arg0 pixBuf:(struct __CVBuffer **)arg1 ;


@end


#endif