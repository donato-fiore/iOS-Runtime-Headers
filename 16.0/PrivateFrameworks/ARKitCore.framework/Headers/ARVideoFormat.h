// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARVIDEOFORMAT_H
#define ARVIDEOFORMAT_H

@class AVCaptureDevice, AVCaptureDeviceFormat, NSString, NSArray;
@protocol ARDaemonSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ARVideoFormat : NSObject <ARDaemonSecureCoding, NSCopying>

 {
    AVCaptureDevice *_device;
    AVCaptureDeviceFormat *_deviceFormat;
    unsigned int _pixelFormat;
    CGSize _imageResolution;
}


@property (readonly, nonatomic) NSInteger captureDevicePosition; // ivar: _captureDevicePosition
@property (readonly, nonatomic) NSString *captureDeviceType; // ivar: _captureDeviceType
@property (readonly, nonatomic) AVCaptureDeviceFormat *depthDataFormat; // ivar: _depthDataFormat
@property (readonly, nonatomic) AVCaptureDevice *device;
@property (readonly, nonatomic) AVCaptureDeviceFormat *deviceFormat;
@property (retain, nonatomic) NSArray *frameRatesByPowerUsage; // ivar: _frameRatesByPowerUsage
@property (readonly, nonatomic) NSInteger framesPerSecond;
@property (readonly, nonatomic) BOOL has4KVideoResolution;
@property (readonly, nonatomic) CGSize imageResolution;
@property (readonly, nonatomic) BOOL isRecommendedForHighResolutionFrameCapturing;
@property (readonly, nonatomic) BOOL isX420PixelFormat;
@property (readonly, nonatomic) NSString *pixelFormat;
@property (readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;


+(BOOL)supportsSecureCoding;
+(id)_querySupportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 videoBinned:(BOOL)arg2 frameRate:(CGFloat)arg3 ;
+(id)bestDepthFormatForDeviceFormat:(id)arg0 ;
+(id)bestTimeOfFlightFormatForDevicePosition:(NSInteger)arg0 frameRates:(id)arg1 ;
+(id)bestVideoFormatForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 resolution:(struct ? )arg2 frameRate:(CGFloat)arg3 videoBinned:(BOOL)arg4 ;
+(id)bestVideoFormatForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 resolution:(struct ? )arg2 frameRate:(CGFloat)arg3 videoBinned:(BOOL)arg4 needsHDRSupport:(BOOL)arg5 ;
+(id)bestVideoFormatForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 resolution:(struct ? )arg2 frameRate:(CGFloat)arg3 videoBinned:(BOOL)arg4 needsHDRSupport:(BOOL)arg5 pixelFormat:(unsigned int)arg6 ;
+(id)bestVideoFormatForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 resolution:(struct ? )arg2 frameRates:(id)arg3 videoBinned:(BOOL)arg4 ;
+(id)bestVideoFormatForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 resolution:(struct ? )arg2 frameRates:(id)arg3 videoBinned:(BOOL)arg4 needsHDRSupport:(BOOL)arg5 pixelFormat:(unsigned int)arg6 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 frameRate:(CGFloat)arg2 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 videoBinned:(BOOL)arg2 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 videoBinned:(BOOL)arg2 frameRate:(CGFloat)arg3 ;
+(id)supportedVideoFormatsForHiResOrX420;
+(id)supportedVideoFormatsForStillImageCapture;
+(struct CGSize )hiResVideoDimensions;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCaptureDevice:(id)arg0 format:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageResolution:(struct CGSize )arg0 captureDevicePosition:(NSInteger)arg1 captureDeviceType:(id)arg2 ;
-(id)initWithImageResolution:(struct CGSize )arg0 captureDevicePosition:(NSInteger)arg1 captureDeviceType:(id)arg2 frameRatesByPowerUsage:(id)arg3 ;
-(id)initWithImageResolution:(struct CGSize )arg0 captureDevicePosition:(NSInteger)arg1 captureDeviceType:(id)arg2 frameRatesByPowerUsage:(id)arg3 pixelFormat:(unsigned int)arg4 ;
-(id)videoFormatWithDepthDataFormat:(id)arg0 ;
-(id)videoFormatWithUnthrottledLowPowerUsageFramerate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif