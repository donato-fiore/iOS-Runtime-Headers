// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEOCAPTURECONVERTER_H
#define VCVIDEOCAPTURECONVERTER_H

@class NSString;
@protocol VCVideoSink, VCVideoCaptureClient;

#import <Foundation/Foundation.h>


@interface VCVideoCaptureConverter : NSObject <VCVideoSink, VCVideoCaptureClient>

 {
    CGFloat _throttleRate;
    unsigned int _sourceFrameCount;
    unsigned int _lastDestinationFrameCount;
    BOOL _isThrottling;
    id *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int destinationFramerate; // ivar: _destinationFramerate
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int sourceFramerate; // ivar: _sourceFramerate
@property (readonly) Class superclass;


-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)processFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)clientCaptureRule;
-(id)delegate;
-(id)initWithDelegate:(id)arg0 ;
-(void)avConferencePreviewError:(id)arg0 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg0 ;
-(void)dealloc;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;
-(void)thermalLevelDidChange:(int)arg0 ;
-(void)updateThrottleRate;


@end


#endif