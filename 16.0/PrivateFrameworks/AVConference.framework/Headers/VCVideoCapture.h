// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEOCAPTURE_H
#define VCVIDEOCAPTURE_H

@class NSString, NSArray;
@protocol VCVideoCaptureServer;

#import <Foundation/Foundation.h>

#import "VideoAttributes.h"

@interface VCVideoCapture : NSObject {
    id *_captureServer;
    NSString *_sourceUID;
    VideoAttributes *_localVideoAttributes;
    _opaque_pthread_mutex_t _sinkArrayMutex;
}


@property (readonly) NSObject<VCVideoCaptureServer> *captureServer;
@property (readonly) NSArray *sinkArray; // ivar: _sinkArray
@property (readonly) unsigned int sinkCount;


-(id)initWithCaptureServer:(id)arg0 ;
-(unsigned int)addSink:(id)arg0 ;
-(unsigned int)removeSink:(id)arg0 ;
-(void)dealloc;
-(void)distributeVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 preview:(BOOL)arg2 orientation:(int)arg3 fromCamera:(BOOL)arg4 camera:(int)arg5 switching:(BOOL)arg6 videoMirrored:(BOOL)arg7 ;


@end


#endif