// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMETADATA_H
#define PFMETADATA_H

@class NSNumber, NSString, NSDictionary, UTType, NSDate, NSURL, NSArray, CLLocation, NSData, NSTimeZone;
@protocol PFMetadata;

#import <Foundation/Foundation.h>

#import "PFMetadataCore.h"
#import "PFTimeZoneLookup.h"

@interface PFMetadata : NSObject <PFMetadata>

 {
    PFMetadataCore *_internalMetadata;
}


@property (readonly, nonatomic) NSNumber *GIFDelayTime;
@property (readonly, nonatomic) NSNumber *altitude;
@property (readonly, nonatomic) NSString *artworkContentDescription;
@property (readonly, nonatomic) NSNumber *audioDataRate;
@property (readonly, nonatomic) NSNumber *audioSampleRate;
@property (readonly, nonatomic) NSNumber *audioTrackFormat;
@property (readonly, nonatomic) NSNumber *audioTrackFormatFlags;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSNumber *brightness;
@property (readonly, nonatomic) NSString *burstUuid;
@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSString *cameraSerialNumber;
@property (readonly, nonatomic) NSString *captionAbstract;
@property (readonly, nonatomic) NSString *captureMode;
@property (readonly, nonatomic) *CGImageMetadata cgImageMetadata;
@property (readonly, nonatomic) NSDictionary *cgImageProperties;
@property (readonly, nonatomic) NSString *codecFourCharCode;
@property (readonly, nonatomic) NSNumber *colorSpace;
@property (readonly, nonatomic) UTType *contentType;
@property (readonly, nonatomic) UTType *contentTypeFromFastModernizeVideoMedia;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSInteger creationDateSource;
@property (readonly, nonatomic) NSString *creationDateString;
@property (readonly, nonatomic) NSInteger customRendered;
@property (readonly, nonatomic) NSString *defaultProfileName;
@property (readonly, nonatomic) NSString *deferredPhotoProcessingIdentifier;
@property (readonly, nonatomic) unsigned char detail;
@property (readonly, nonatomic) NSNumber *digitalZoomRatio;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic) NSNumber *durationTimeInterval;
@property (readonly, nonatomic) CGSize exifPixelSize;
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (readonly, nonatomic) NSNumber *exposureTime;
@property (readonly, nonatomic) NSNumber *fNumber;
@property (readonly, nonatomic) NSDate *fileCreationDate;
@property (readonly, nonatomic) NSDate *fileModificationDate;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic) NSDictionary *fileSystemProperties;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *firmware;
@property (readonly, nonatomic) NSNumber *flashCompensation;
@property (readonly, nonatomic) BOOL flashFired;
@property (readonly, nonatomic) NSNumber *flashValue;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSNumber *focusDistance;
@property (readonly, nonatomic) NSNumber *focusMode;
@property (readonly, nonatomic) NSArray *focusPoints;
@property (readonly, nonatomic) NSDate *gpsDateTime;
@property (readonly, nonatomic) NSNumber *gpsHPositioningError;
@property (readonly, nonatomic) CLLocation *gpsLocation;
@property (readonly, nonatomic) NSString *groupingUuid;
@property (readonly, nonatomic) BOOL hasCustomRendered;
@property (readonly, nonatomic) BOOL hasHDRGainMap;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) id *hdrGainMap;
@property (readonly, nonatomic) NSNumber *hdrGainMapPercentageValue;
@property (readonly, nonatomic) NSString *imageCaptureRequestIdentifier;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSNumber *imageDirection;
@property (readonly, nonatomic) NSString *imageDirectionRef;
@property (readonly, nonatomic) *CGImageSource imageSource;
@property (readonly, nonatomic) BOOL isAutoLivePhoto;
@property (readonly, nonatomic) BOOL isAutoloop;
@property (readonly, nonatomic) BOOL isCinematicVideo;
@property (readonly, nonatomic) BOOL isDeferredPhotoProxy;
@property (readonly, nonatomic) BOOL isFrontFacingCamera;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isLongExposure;
@property (readonly, nonatomic) BOOL isMirror;
@property (readonly, nonatomic) BOOL isMonoskiMedia;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isPhotoBooth;
@property (readonly, nonatomic) BOOL isPortrait;
@property (readonly, nonatomic) BOOL isProRes;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) BOOL isSloMo;
@property (readonly, nonatomic) BOOL isSpatialOverCapture;
@property (readonly, nonatomic) BOOL isSyndicationOriginated;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (readonly, nonatomic) NSNumber *iso;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSNumber *latitude;
@property (readonly, nonatomic) NSString *lensMake;
@property (readonly, nonatomic) NSNumber *lensMaximumMM;
@property (readonly, nonatomic) NSNumber *lensMinimumMM;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSNumber *lightSource;
@property (readonly, nonatomic) NSNumber *livePhotoMinimumClientVersion;
@property (readonly, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) float livePhotoVitalityScore;
@property (readonly, nonatomic) NSNumber *longitude;
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSString *montageString;
@property (readonly, nonatomic) NSNumber *nominalFrameRate;
@property (readonly, nonatomic) NSInteger orientation;
@property (readonly, nonatomic) CGSize orientedPixelSize;
@property (readonly, nonatomic) NSString *originalFileName;
@property (readonly, nonatomic) NSString *originatingAssetIdentifier;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSUInteger photoProcessingFlags;
@property (readonly, nonatomic) NSString *photoProcessingIdentifier;
@property (readonly, nonatomic) NSNumber *playbackVariation;
@property (readonly, nonatomic) NSString *portraitInLandscapeCamera;
@property (readonly, nonatomic) NSString *profileName;
@property (readonly, nonatomic) NSString *renderOriginatingAssetIdentifier;
@property (readonly, nonatomic) NSNumber *semanticStylePreset;
@property (readonly, nonatomic) NSNumber *semanticStyleRenderingVersion;
@property (readonly, nonatomic) NSNumber *semanticStyleToneBias;
@property (readonly, nonatomic) NSNumber *semanticStyleWarmthBias;
@property (readonly, nonatomic) NSInteger sourceType;
@property (readonly, nonatomic) NSString *spatialOverCaptureIdentifier;
@property (readonly, nonatomic) NSNumber *speed;
@property (readonly, nonatomic) NSString *speedRef;
@property (readonly, nonatomic) ? stillImageDisplayTime;
@property (readonly, nonatomic) NSDictionary *syndicationProperties;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup;
@property (readonly, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) NSNumber *timeZoneOffset;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *userComment;
@property (readonly, nonatomic) NSDate *utcCreationDate;
@property (readonly, nonatomic) NSString *videoCodecName;
@property (readonly, nonatomic) NSNumber *videoDataRate;
@property (readonly, nonatomic) NSNumber *videoDynamicRange;
@property (readonly, nonatomic) NSNumber *whiteBalance;
@property (readonly, nonatomic) NSNumber *whiteBalanceIndex;


+(BOOL)parseISO6709String:(id)arg0 outLatitude:(*CGFloat)arg1 outLongitude:(*CGFloat)arg2 ;
+(id)defaultOptionsForCGImageSource;
+(id)exifTimezoneOffsetFromDateString:(id)arg0 offsetInSeconds:(*NSInteger)arg1 ;
+(id)primaryAudioTrackForAsset:(id)arg0 ;
+(id)primaryVideoTrackForAsset:(id)arg0 ;
+(struct AudioStreamBasicDescription )audioStreamBasicDescriptionForAsset:(id)arg0 ;
+(struct opaqueCMFormatDescription *)formatDescriptionForAsset:(id)arg0 ;
-(BOOL)_respondsToSelector:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)exifAuxDictionary;
-(id)exifDictionary;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)gpsDictionary;
-(id)initForLimitedPropertiesWithPath:(id)arg0 ;
-(id)initWithAVAsset:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithAVProxyData:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)initWithAVURL:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithEncodedImagePropertyData:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageCaptureMovieProperties:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageData:(id)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 cacheImageData:(BOOL)arg6 ;
-(id)initWithImageProperties:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 ;
-(id)initWithImageURL:(id)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 cacheImageData:(BOOL)arg6 ;
-(id)initWithMediaURL:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 shouldCache:(BOOL)arg3 ;
-(id)initWithPropertyListRepresentationData:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)initWithSyndicationProperties:(id)arg0 ;
-(id)iptcDictionary;
-(id)jsonDictionary;
-(id)jsonFormattedDescriptionWithError:(*id)arg0 ;
-(id)makerAppleDictionary;
-(id)makerCanonDictionary;
-(id)makerNikonDictionary;
-(id)plistForEncoding;
-(id)propertyListRepresentationData;
-(id)tiffDictionary;
-(void)fixupGPSWithDate:(id)arg0 time:(id)arg1 ;
-(void)setKeysAndValues:(id)arg0 inDictionary:(id)arg1 ;


@end


#endif