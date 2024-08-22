// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WK_RTCVIDEOFRAME_H
#define WK_RTCVIDEOFRAME_H

@protocol RTCVideoFrameBuffer;

#import <Foundation/Foundation.h>


@interface WK_RTCVideoFrame : NSObject {
    NSInteger _rotation;
    NSInteger _timeStampNs;
}


@property (readonly, nonatomic) NSObject<RTCVideoFrameBuffer> *buffer; // ivar: _buffer
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) NSInteger rotation;
@property (nonatomic) int timeStamp; // ivar: timeStamp
@property (readonly, nonatomic) NSInteger timeStampNs;
@property (readonly, nonatomic) int width;


-(id)initWithBuffer:(id)arg0 rotation:(NSInteger)arg1 timeStampNs:(NSInteger)arg2 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 rotation:(NSInteger)arg1 timeStampNs:(NSInteger)arg2 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 scaledWidth:(int)arg1 scaledHeight:(int)arg2 cropWidth:(int)arg3 cropHeight:(int)arg4 cropX:(int)arg5 cropY:(int)arg6 rotation:(NSInteger)arg7 timeStampNs:(NSInteger)arg8 ;
-(id)newI420VideoFrame;


@end


#endif