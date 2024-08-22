// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXAVMEDIAVIDEOTRACKREADERSAMPLE_H
#define JFXAVMEDIAVIDEOTRACKREADERSAMPLE_H

@protocol JFXMediaVideoTrackReaderSample;

#import <Foundation/Foundation.h>


@interface JFXAVMediaVideoTrackReaderSample : NSObject <JFXMediaVideoTrackReaderSample>



@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) ? presentationTimeStamp;
@property (readonly, nonatomic) *opaqueCMSampleBuffer sampleBufferRef; // ivar: _sampleBufferRef
@property (readonly, nonatomic) ? timeRange;


-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 duration:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif