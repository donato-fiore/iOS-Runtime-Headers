// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOCAPTURE_H
#define VCVIDEOCAPTURE_H

@class NSString;
@protocol VCVideoCaptureServer;

#import <Foundation/Foundation.h>

#import "VideoAttributes.h"

@interface VCVideoCapture : NSObject {
    id *_captureServer;
    NSString *_sourceUID;
    VideoAttributes *_localVideoAttributes;
    _opaque_pthread_mutex_t _sinkArrayMutex;
    unsigned int _sinkCount;
    _VCSingleLinkedList _sinkList;
}


@property (readonly) NSObject<VCVideoCaptureServer> *captureServer;
@property (readonly) unsigned int sinkCount;


-(id)initWithCaptureServer:(id)arg0 ;
-(unsigned int)addSink:(id)arg0 ;
-(unsigned int)removeSink:(id)arg0 ;
-(void)cleanupSinkEntry:(struct tagVCVideoCaptureSinkEntry *)arg0 ;
-(void)dealloc;


@end


#endif