// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSTREAMINPUTCAPTURESOURCE_H
#define VCSTREAMINPUTCAPTURESOURCE_H

@class NSString;
@protocol VCVideoSink;


#import "VCVideoCapture.h"

@interface VCStreamInputCaptureSource : VCVideoCapture <VCVideoSink>

 {
    id *_delegate;
    _opaque_pthread_mutex_t _sinkMutex;
}


@property (nonatomic) int captureSourceID; // ivar: _captureSourceID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription; // ivar: _formatDescription
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger streamInputID; // ivar: _streamInputID
@property (readonly) Class superclass;


+(BOOL)readUint32FromConfig:(id)arg0 key:(id)arg1 value:(*unsigned int)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)setupDataFormatWithConfiguration:(id)arg0 ;
-(BOOL)setupVideoFormatWithConfiguration:(id)arg0 ;
-(id)initWithCaptureSourceID:(int)arg0 configuration:(id)arg1 ;
-(unsigned int)addSink:(id)arg0 ;
-(unsigned int)removeSink:(id)arg0 ;
-(void)dealloc;
-(void)setDelegate:(id)arg0 ;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;


@end


#endif