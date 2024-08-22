// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WK_RTCCVPIXELBUFFER_H
#define WK_RTCCVPIXELBUFFER_H

@class NSString;
@protocol RTCVideoFrameBuffer;

#import <Foundation/Foundation.h>


@interface WK_RTCCVPixelBuffer : NSObject <RTCVideoFrameBuffer>

 {
    int _width;
    int _height;
    int _bufferWidth;
    int _bufferHeight;
}


@property (readonly, nonatomic) int cropHeight; // ivar: _cropHeight
@property (readonly, nonatomic) int cropWidth; // ivar: _cropWidth
@property (readonly, nonatomic) int cropX; // ivar: _cropX
@property (readonly, nonatomic) int cropY; // ivar: _cropY
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) Class superclass;
@property (readonly, nonatomic) int width;


+(id)supportedPixelFormats;
-(BOOL)cropAndScaleTo:(struct __CVBuffer *)arg0 withTempBuffer:(char *)arg1 ;
-(BOOL)requiresCropping;
-(BOOL)requiresScalingToWidth:(int)arg0 height:(int)arg1 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 adaptedWidth:(int)arg1 adaptedHeight:(int)arg2 cropWidth:(int)arg3 cropHeight:(int)arg4 cropX:(int)arg5 cropY:(int)arg6 ;
-(id)toI420;
-(int)bufferSizeForCroppingAndScalingToWidth:(int)arg0 height:(int)arg1 ;
-(void)cropAndScaleARGBTo:(struct __CVBuffer *)arg0 ;
-(void)cropAndScaleNV12To:(struct __CVBuffer *)arg0 withTempBuffer:(char *)arg1 ;
-(void)dealloc;


@end


#endif