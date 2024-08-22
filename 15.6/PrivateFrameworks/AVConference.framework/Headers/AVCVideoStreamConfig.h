// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCVIDEOSTREAMCONFIG_H
#define AVCVIDEOSTREAMCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVCVideoStreamConfig : NSObject

@property (nonatomic) NSInteger captureSource; // ivar: _captureSource
@property (nonatomic) NSUInteger customHeight; // ivar: _customHeight
@property (nonatomic) NSUInteger customWidth; // ivar: _customWidth
@property (nonatomic) NSUInteger cvoExtensionID; // ivar: _cvoExtensionID
@property (nonatomic) BOOL enableCVO; // ivar: _enableCVO
@property (nonatomic) NSUInteger framerate; // ivar: _framerate
@property (nonatomic) NSUInteger hdrMode; // ivar: _hdrMode
@property (nonatomic) BOOL isVideoProtected; // ivar: _isVideoProtected
@property (nonatomic) NSUInteger keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic, getter=isLatencySensitiveModeEnabled) BOOL latencySensitiveModeEnabled; // ivar: _latencySensitiveModeEnabled
@property (nonatomic, getter=isLTRPEnabled) BOOL ltrpEnabled; // ivar: _ltrpEnabled
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (retain, nonatomic) NSString *profileLevel; // ivar: _profileLevel
@property (retain, nonatomic) NSString *remoteDeviceName; // ivar: _remoteDeviceName
@property (nonatomic) int remoteVideoInitialOrientation; // ivar: _remoteVideoInitialOrientation
@property (retain, nonatomic) NSString *rxCodecFeatureListString; // ivar: _rxCodecFeatureListString
@property (nonatomic) NSInteger rxCodecType; // ivar: _rxCodecType
@property (nonatomic) NSUInteger rxMaxBitrate; // ivar: _rxMaxBitrate
@property (nonatomic) NSUInteger rxMinBitrate; // ivar: _rxMinBitrate
@property (nonatomic) NSUInteger screenDisplayID; // ivar: _screenDisplayID
@property (nonatomic) NSUInteger tilesPerFrame; // ivar: _tilesPerFrame
@property (retain, nonatomic) NSString *txCodecFeatureListString; // ivar: _txCodecFeatureListString
@property (nonatomic) NSInteger txCodecType; // ivar: _txCodecType
@property (nonatomic) NSUInteger txMaxBitrate; // ivar: _txMaxBitrate
@property (nonatomic) NSUInteger txMinBitrate; // ivar: _txMinBitrate
@property (nonatomic) NSInteger videoResolution; // ivar: _videoResolution
@property (nonatomic) NSInteger videoStreamMode; // ivar: _videoStreamMode


+(BOOL)isPixelFormatValid:(unsigned int)arg0 hdrMode:(NSUInteger)arg1 ;
+(NSInteger)clientCodecTypeWithCodecType:(NSInteger)arg0 ;
+(NSInteger)clientVideoCaptureSourceFromCaptureSource:(int)arg0 ;
+(NSInteger)clientVideoResolutionFromResolution:(NSInteger)arg0 ;
+(NSInteger)clientVideoStreamModeFromVideoStreamType:(NSInteger)arg0 ;
+(NSInteger)codecTypeWithClientCodecType:(NSInteger)arg0 ;
+(NSInteger)videoResolutionFromClientResolution:(NSInteger)arg0 ;
+(NSInteger)videoStreamTypeFromClientVideoStreamMode:(NSInteger)arg0 ;
+(int)videoCaptureSourceFromClientCaptureSource:(NSInteger)arg0 ;
-(BOOL)isValidForDirection:(NSInteger)arg0 ;
-(id)dictionary;
-(id)init;
-(void)dealloc;
-(void)setUpWithDictionary:(id)arg0 ;


@end


#endif