// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORMEDIAMETADATA_H
#define BLASTDOORMEDIAMETADATA_H

@class NSUUID, NSString, NSDate;

#import <Foundation/Foundation.h>

#import "BlastDoorMediaMetadata_LargeImageContextualInfo.h"

@interface BlastDoorMediaMetadata : NSObject {
    ? mediaMetadata;
}


@property (nonatomic, readonly) CGFloat altitude;
@property (nonatomic, readonly) CGFloat apertureValue;
@property (nonatomic, readonly) CGFloat avDuration;
@property (nonatomic, readonly) CGFloat avFPS;
@property (nonatomic, readonly) NSUUID *burstUuid;
@property (nonatomic, readonly) NSString *captureMode;
@property (nonatomic, readonly) NSInteger ciffWhiteBalanceIndex;
@property (nonatomic, readonly) NSString *codecFourCharCode;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger exposureBiasValue;
@property (nonatomic, readonly) NSUInteger fileSize;
@property (nonatomic, readonly) NSInteger flash;
@property (nonatomic, readonly) CGFloat focalLenIn35mmFilm;
@property (nonatomic, readonly) CGFloat focalLength;
@property (nonatomic, readonly) CGFloat gifDelayTime;
@property (nonatomic, readonly) CGFloat gpsHPositioningError;
@property (nonatomic, readonly) CGFloat gpsSpeed;
@property (nonatomic, readonly) NSString *gpsSpeedRef;
@property (nonatomic, readonly) NSDate *gpsTimestamp;
@property (nonatomic, readonly) BOOL hasHDRGainMap;
@property (nonatomic, readonly) BOOL has_altitude;
@property (nonatomic, readonly) BOOL has_apertureValue;
@property (nonatomic, readonly) BOOL has_avDuration;
@property (nonatomic, readonly) BOOL has_avFPS;
@property (nonatomic, readonly) BOOL has_ciffWhiteBalanceIndex;
@property (nonatomic, readonly) BOOL has_exposureBiasValue;
@property (nonatomic, readonly) BOOL has_fileSize;
@property (nonatomic, readonly) BOOL has_flash;
@property (nonatomic, readonly) BOOL has_focalLenIn35mmFilm;
@property (nonatomic, readonly) BOOL has_focalLength;
@property (nonatomic, readonly) BOOL has_gifDelayTime;
@property (nonatomic, readonly) BOOL has_gpsHPositioningError;
@property (nonatomic, readonly) BOOL has_gpsSpeed;
@property (nonatomic, readonly) BOOL has_hasHDRGainMap;
@property (nonatomic, readonly) BOOL has_hdrGain;
@property (nonatomic, readonly) BOOL has_imageDirection;
@property (nonatomic, readonly) BOOL has_isCustomRendered;
@property (nonatomic, readonly) BOOL has_isFrontFacingCamera;
@property (nonatomic, readonly) BOOL has_isPhotoBooth;
@property (nonatomic, readonly) BOOL has_isoRatingValue;
@property (nonatomic, readonly) BOOL has_latitude;
@property (nonatomic, readonly) BOOL has_lightSource;
@property (nonatomic, readonly) BOOL has_longitude;
@property (nonatomic, readonly) BOOL has_meteringMode;
@property (nonatomic, readonly) BOOL has_processingFlags;
@property (nonatomic, readonly) BOOL has_rawOrientation;
@property (nonatomic, readonly) BOOL has_rawPixelHeight;
@property (nonatomic, readonly) BOOL has_rawPixelWidth;
@property (nonatomic, readonly) BOOL has_shutterSpeed;
@property (nonatomic, readonly) BOOL has_subsecTimeOriginal;
@property (nonatomic, readonly) BOOL has_timezoneOffset;
@property (nonatomic, readonly) BOOL has_variationIdentifier;
@property (nonatomic, readonly) BOOL has_videoComplementDurationTimescale;
@property (nonatomic, readonly) BOOL has_videoComplementDurationValue;
@property (nonatomic, readonly) BOOL has_videoComplementImageDisplayTimescale;
@property (nonatomic, readonly) BOOL has_videoComplementImageDisplayValue;
@property (nonatomic, readonly) BOOL has_videoDurationTimescale;
@property (nonatomic, readonly) BOOL has_videoDurationValue;
@property (nonatomic, readonly) BOOL has_videoDynamicRange;
@property (nonatomic, readonly) BOOL has_whiteBalance;
@property (nonatomic, readonly) CGFloat hdrGain;
@property (nonatomic, readonly) NSDate *imageDate;
@property (nonatomic, readonly) CGFloat imageDirection;
@property (nonatomic, readonly) NSString *imageDirectionRef;
@property (nonatomic, readonly) BOOL isCustomRendered;
@property (nonatomic, readonly) BOOL isFrontFacingCamera;
@property (nonatomic, readonly) BOOL isPhotoBooth;
@property (nonatomic, readonly) NSString *isVideoMontage;
@property (nonatomic, readonly) NSInteger isoRatingValue;
@property (nonatomic, readonly) BlastDoorMediaMetadata_LargeImageContextualInfo *largeImageContextualInfo;
@property (nonatomic, readonly) CGFloat latitude;
@property (nonatomic, readonly) NSString *lensMake;
@property (nonatomic, readonly) NSString *lensModel;
@property (nonatomic, readonly) NSInteger lightSource;
@property (nonatomic, readonly) CGFloat longitude;
@property (nonatomic, readonly) NSString *make;
@property (nonatomic, readonly) NSInteger meteringMode;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *originalFileName;
@property (nonatomic, readonly) NSString *originatingAssetIdentifier;
@property (nonatomic, readonly) NSUInteger processingFlags;
@property (nonatomic, readonly) NSString *profileName;
@property (nonatomic, readonly) NSInteger rawOrientation;
@property (nonatomic, readonly) NSUInteger rawPixelHeight;
@property (nonatomic, readonly) NSUInteger rawPixelWidth;
@property (nonatomic, readonly) CGFloat shutterSpeed;
@property (nonatomic, readonly) CGFloat subsecTimeOriginal;
@property (nonatomic, readonly) NSInteger timezoneOffset;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSString *userComment;
@property (nonatomic, readonly) NSUInteger variationIdentifier;
@property (nonatomic, readonly) CGFloat videoComplementDurationTimescale;
@property (nonatomic, readonly) CGFloat videoComplementDurationValue;
@property (nonatomic, readonly) CGFloat videoComplementImageDisplayTimescale;
@property (nonatomic, readonly) CGFloat videoComplementImageDisplayValue;
@property (nonatomic, readonly) NSString *videoComplementMediaGroupId;
@property (nonatomic, readonly) CGFloat videoDurationTimescale;
@property (nonatomic, readonly) CGFloat videoDurationValue;
@property (nonatomic, readonly) NSInteger videoDynamicRange;
@property (nonatomic, readonly) NSInteger whiteBalance;


-(id)init;


@end


#endif