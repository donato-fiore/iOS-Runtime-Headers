// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURECONNECTIONCONFIGURATION_H
#define FIGCAPTURECONNECTIONCONFIGURATION_H

@class NSString;
@protocol FigXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "FigCaptureCameraCalibrationDataSinkConfiguration.h"
#import "FigCaptureDepthDataSinkConfiguration.h"
#import "FigCaptureIrisSinkConfiguration.h"
#import "FigCapturePointCloudDataSinkConfiguration.h"
#import "FigCaptureSinkConfiguration.h"
#import "FigCaptureSourceConfiguration.h"
#import "FigCaptureStillImageSinkConfiguration.h"
#import "FigCaptureVideoThumbnailSinkConfiguration.h"
#import "FigCaptureVideoDataSinkConfiguration.h"
#import "FigCaptureVideoPreviewSinkConfiguration.h"

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying>



@property (readonly) FigCaptureCameraCalibrationDataSinkConfiguration *cameraCalibrationDataSinkConfiguration;
@property (copy, nonatomic) NSString *connectionID; // ivar: _connectionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly) FigCaptureDepthDataSinkConfiguration *depthDataSinkConfiguration;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) FigCaptureIrisSinkConfiguration *irisSinkConfiguration;
@property (nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (readonly) FigCapturePointCloudDataSinkConfiguration *pointCloudDataSinkConfiguration;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration; // ivar: _sinkConfiguration
@property (retain, nonatomic) FigCaptureSourceConfiguration *sourceConfiguration; // ivar: _sourceConfiguration
@property (readonly) FigCaptureStillImageSinkConfiguration *stillImageSinkConfiguration;
@property (readonly) Class superclass;
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration *thumbnailSinkConfiguration;
@property (nonatomic) int underlyingDeviceType; // ivar: _underlyingDeviceType
@property (readonly) FigCaptureVideoDataSinkConfiguration *videoDataSinkConfiguration;
@property (readonly) FigCaptureVideoPreviewSinkConfiguration *videoPreviewSinkConfiguration;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sourcesFromUnderlyingStream;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif