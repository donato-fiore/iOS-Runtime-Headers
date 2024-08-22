// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARVIDEOFORMAT_H
#define ARVIDEOFORMAT_H

@class AVCaptureDevice, AVCaptureDeviceFormat, NSString, NSArray;
@protocol ARDaemonSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ARVideoFormat : NSObject <ARDaemonSecureCoding, NSCopying>

 {
    AVCaptureDevice *_device;
    AVCaptureDeviceFormat *_deviceFormat;
    CGSize _imageResolution;
}


@property (readonly, nonatomic) NSInteger captureDevicePosition; // ivar: _captureDevicePosition
@property (readonly, nonatomic) NSString *captureDeviceType; // ivar: _captureDeviceType
@property (retain, nonatomic) AVCaptureDeviceFormat *depthDataFormat; // ivar: _depthDataFormat
@property (readonly, nonatomic) AVCaptureDevice *device;
@property (readonly, nonatomic) AVCaptureDeviceFormat *deviceFormat;
@property (retain, nonatomic) NSArray *frameRatesByPowerUsage; // ivar: _frameRatesByPowerUsage
@property (readonly, nonatomic) NSInteger framesPerSecond;
@property (readonly, nonatomic) CGSize imageResolution;


+(BOOL)supportsSecureCoding;
+(id)_querySupportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 videoBinned:(BOOL)arg2 frameRate:(CGFloat)arg3 ;
+(id)bestDepthFormatForDeviceFormat:(id)arg0 ;
+(id)bestTimeOfFlightFormatForDevicePosition:(NSInteger)arg0 frameRates:(id)arg1 ;
+(id)bestVideoFormatForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 resolution:(struct ? )arg2 frameRate:(CGFloat)arg3 videoBinned:(BOOL)arg4 ;
+(id)bestVideoFormatForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 resolution:(struct ? )arg2 frameRates:(id)arg3 videoBinned:(BOOL)arg4 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 frameRate:(CGFloat)arg2 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 videoBinned:(BOOL)arg2 ;
+(id)supportedVideoFormatsForDevicePosition:(NSInteger)arg0 deviceType:(id)arg1 videoBinned:(BOOL)arg2 frameRate:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCaptureDevice:(id)arg0 format:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageResolution:(struct CGSize )arg0 captureDevicePosition:(NSInteger)arg1 captureDeviceType:(id)arg2 ;
-(id)initWithImageResolution:(struct CGSize )arg0 captureDevicePosition:(NSInteger)arg1 captureDeviceType:(id)arg2 frameRatesByPowerUsage:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif