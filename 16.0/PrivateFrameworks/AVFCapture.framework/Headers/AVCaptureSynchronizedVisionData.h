// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTURESYNCHRONIZEDVISIONDATA_H
#define AVCAPTURESYNCHRONIZEDVISIONDATA_H



#import "AVCaptureSynchronizedData.h"
#import "AVCaptureSynchronizedVisionDataInternal.h"

@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedVisionDataInternal *_internal;
}


@property (readonly) NSInteger droppedReason;
@property (readonly) *__CVBuffer visionDataPixelBuffer;
@property (readonly) BOOL visionDataWasDropped;


-(id)_initWithVisionDataPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(struct ? )arg1 visionDataWasDropped:(BOOL)arg2 droppedReason:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif