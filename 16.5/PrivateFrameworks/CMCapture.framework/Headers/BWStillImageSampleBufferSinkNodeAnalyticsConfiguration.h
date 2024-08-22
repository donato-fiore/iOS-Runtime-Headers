// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGESAMPLEBUFFERSINKNODEANALYTICSCONFIGURATION_H
#define BWSTILLIMAGESAMPLEBUFFERSINKNODEANALYTICSCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface BWStillImageSampleBufferSinkNodeAnalyticsConfiguration : NSObject

@property (nonatomic) BOOL binned; // ivar: _binned
@property (nonatomic) BOOL fastCapturePrioritizationEnabled; // ivar: _fastCapturePrioritizationEnabled
@property (nonatomic) int formatDimensionHeight; // ivar: _formatDimensionHeight
@property (nonatomic) int formatDimensionWidth; // ivar: _formatDimensionWidth
@property (nonatomic) float formatMaxFrameRate; // ivar: _formatMaxFrameRate
@property (nonatomic) BOOL isHighQualityPhotoWithVideoFormatSupported; // ivar: _isHighQualityPhotoWithVideoFormatSupported
@property (nonatomic) BOOL isPhotoFormat; // ivar: _isPhotoFormat
@property (nonatomic) BOOL isSemanticStyleRenderingSupported; // ivar: _isSemanticStyleRenderingSupported
@property (nonatomic) BOOL isTimeLapse; // ivar: _isTimeLapse
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat


-(void)dealloc;


@end


#endif