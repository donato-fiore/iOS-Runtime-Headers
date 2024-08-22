// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFMETADATA_H
#define PFMETADATA_H

@class NSDictionary, NSString, NSNumber, AVAsset, NSArray, UTType, NSDate, NSURL, CLLocation, NSData, NSTimeZone;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PFMetadataStateHandler.h"
#import "PFTimeZoneLookup.h"

@interface PFMetadata : NSObject <NSCopying>

 {
    NSDictionary *_iccMovieProperties;
    NSDictionary *_syndicationProperties;
    NSString *_portraitInLandscapeCamera;
    PFMetadataStateHandler *_stateHandler;
    NSDictionary *_audioVideoProperties;
    NSDictionary *_originalAssetDateProperties;
    NSNumber *_isProRes;
    NSInteger _sourceType;
    NSDictionary *_stillImageDisplayTimeDictionary;
}


@property (retain, nonatomic) NSNumber *GIFDelayTime; // ivar: _GIFDelayTime
@property (retain, nonatomic) NSNumber *altitude; // ivar: _altitude
@property (readonly, nonatomic) NSString *artworkContentDescription;
@property (retain, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSNumber *audioDataRate;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSNumber *brightness;
@property (readonly, nonatomic) NSString *burstUuid;
@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (retain, nonatomic) NSString *cameraSerialNumber; // ivar: _cameraSerialNumber
@property (readonly, nonatomic) NSString *captionAbstract;
@property (readonly, nonatomic) NSString *captureMode;
@property (readonly, nonatomic) *CGImageMetadata cgImageMetadata;
@property (retain, nonatomic) NSArray *cgImageMetadataProperties; // ivar: _cgImageMetadataProperties
@property (retain, nonatomic) NSDictionary *cgImageProperties; // ivar: _cgImageProperties
@property (retain, nonatomic) NSString *codecFourCharCode; // ivar: _codecFourCharCode
@property (readonly, nonatomic) NSNumber *colorSpace;
@property (retain, nonatomic) UTType *contentType; // ivar: _contentType
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) NSInteger creationDateSource; // ivar: _creationDateSource
@property (readonly, nonatomic) NSInteger customRendered;
@property (readonly, nonatomic) NSString *defaultProfileName;
@property (readonly, nonatomic) NSString *deferredPhotoProcessingIdentifier;
@property (nonatomic) unsigned char detail; // ivar: _detail
@property (readonly, nonatomic) NSNumber *digitalZoomRatio;
@property (retain, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (retain, nonatomic) NSNumber *exposureTime; // ivar: _exposureTime
@property (retain, nonatomic) NSNumber *fNumber; // ivar: _fNumber
@property (readonly, nonatomic) NSDate *fileCreationDate;
@property (readonly, nonatomic) NSDate *fileModificationDate;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (retain, nonatomic) NSDictionary *fileSystemProperties; // ivar: _fileSystemProperties
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSString *firmware;
@property (readonly, nonatomic) NSNumber *flashCompensation;
@property (readonly, nonatomic) BOOL flashFired;
@property (readonly, nonatomic) NSNumber *flashValue;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSNumber *focusDistance;
@property (readonly, nonatomic) NSNumber *focusMode;
@property (readonly, nonatomic) NSArray *focusPoints;
@property (retain, nonatomic) NSDate *gpsDateTime; // ivar: _gpsDateTime
@property (readonly, nonatomic) NSNumber *gpsHPositioningError;
@property (retain, nonatomic) CLLocation *gpsLocation; // ivar: _gpsLocation
@property (readonly, nonatomic) NSString *groupingUuid;
@property (readonly, nonatomic) BOOL hasCustomRendered;
@property (readonly, nonatomic) BOOL hasHDRGainMap;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) id *hdrGainMap;
@property (retain, nonatomic) NSString *identifyingTagClass; // ivar: _identifyingTagClass
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSNumber *imageDirection;
@property (readonly, nonatomic) NSString *imageDirectionRef;
@property (nonatomic) *CGImageSource imageSource; // ivar: _imageSource
@property (readonly, nonatomic) BOOL isAutoLivePhoto;
@property (readonly, nonatomic) BOOL isAutoloop;
@property (readonly, nonatomic) BOOL isCinematicVideo;
@property (readonly, nonatomic) BOOL isDeferredPhotoProxy;
@property (readonly, nonatomic) BOOL isFrontFacingCamera;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isImage; // ivar: _isImage
@property (readonly, nonatomic) BOOL isLongExposure;
@property (readonly, nonatomic) BOOL isMirror;
@property (readonly, nonatomic) BOOL isMovie; // ivar: _isMovie
@property (readonly, nonatomic) BOOL isPhotoBooth;
@property (readonly, nonatomic) BOOL isPortrait;
@property (readonly, nonatomic) BOOL isProRes;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) BOOL isSloMo;
@property (readonly, nonatomic) BOOL isSpatialOverCapture;
@property (readonly) BOOL isSyndicationOriginated;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (retain, nonatomic) NSNumber *iso; // ivar: _iso
@property (retain, nonatomic) NSString *jsonFormattedDescription; // ivar: _jsonFormattedDescription
@property (readonly, nonatomic) NSArray *keywords;
@property (retain, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (readonly, nonatomic) NSString *lensMake;
@property (readonly, nonatomic) NSNumber *lensMaximumMM;
@property (readonly, nonatomic) NSNumber *lensMinimumMM;
@property (readonly, nonatomic) NSString *lensModel;
@property (retain, nonatomic) NSNumber *lightSource; // ivar: _lightSource
@property (readonly, nonatomic) NSNumber *livePhotoMinimumClientVersion;
@property (readonly, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) float livePhotoVitalityScore;
@property (retain, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSString *montageString;
@property (readonly, nonatomic) NSNumber *nominalFrameRate;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) NSString *originalFileName;
@property (readonly, nonatomic) NSString *originatingAssetIdentifer;
@property (readonly, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSNumber *pixelHeight; // ivar: _pixelHeight
@property (readonly, nonatomic) CGSize pixelSize;
@property (retain, nonatomic) NSNumber *pixelWidth; // ivar: _pixelWidth
@property (readonly, nonatomic) NSNumber *playbackVariation;
@property (retain, nonatomic) NSString *profileName; // ivar: _profileName
@property (readonly, nonatomic) NSString *renderOriginatingAssetIdentifier;
@property (readonly, nonatomic) NSNumber *sampleRate; // ivar: _sampleRate
@property (readonly, nonatomic) NSNumber *semanticStylePreset;
@property (readonly, nonatomic) NSNumber *semanticStyleRenderingVersion;
@property (readonly, nonatomic) NSNumber *semanticStyleSceneBias;
@property (readonly, nonatomic) NSNumber *semanticStyleWarmthBias;
@property (readonly, nonatomic) NSString *spatialOverCaptureIdentifier;
@property (retain, nonatomic) NSNumber *speed; // ivar: _speed
@property (readonly, nonatomic) NSString *speedRef;
@property (readonly, nonatomic) ? stillImageDisplayTime;
@property (readonly, nonatomic) NSDictionary *syndicationProperties;
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSDate *timeZoneAdjustedCreationDate; // ivar: _timeZoneAdjustedCreationDate
@property (retain, nonatomic) NSString *timeZoneAdjustedCreationDateString; // ivar: _timeZoneAdjustedCreationDateString
@property (readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup; // ivar: _timeZoneLookup
@property (readonly, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) NSNumber *timeZoneOffset;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSNumber *trackFormat; // ivar: _trackFormat
@property (readonly, nonatomic) NSNumber *trackFormatFlags; // ivar: _trackFormatFlags
@property (readonly, nonatomic) CGSize unorientedPixelSize;
@property (readonly, nonatomic) NSString *userComment;
@property (retain, nonatomic) NSString *videoCodecName; // ivar: _videoCodecName
@property (readonly, nonatomic) ? videoComplementDuration;
@property (readonly, nonatomic) NSNumber *videoDataRate;
@property (readonly, nonatomic) NSNumber *videoDynamicRange;
@property (retain, nonatomic) NSNumber *whiteBalance; // ivar: _whiteBalance
@property (retain, nonatomic) NSNumber *whiteBalanceIndex; // ivar: _whiteBalanceIndex


+(BOOL)_canEncodeInPropertyList:(id)arg0 ;
+(BOOL)parseISO6709String:(id)arg0 outLatitude:(*CGFloat)arg1 outLongitude:(*CGFloat)arg2 ;
+(id)_defaultOptionsForCGImageSource;
+(id)_encodedDataWithPropertyListObject:(id)arg0 ;
+(id)_filterArray:(id)arg0 block:(id)arg1 ;
+(id)_filterDictionary:(id)arg0 block:(id)arg1 ;
+(id)_filterPropertyList:(id)arg0 block:(id)arg1 ;
+(id)_filterPropertyListNoData:(id)arg0 ;
+(id)_propertyListObjectFromEncodedData:(id)arg0 expectedClass:(Class)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)_proxyPropertyListForAVAsset:(id)arg0 reduceMetadata:(BOOL)arg1 ;
+(id)defaultOptionsForCGImageSource;
-(BOOL)_computeCodecPropertiesForAssetTrack:(id)arg0 ;
-(BOOL)_convertGPSString:(id)arg0 toLatitude:(*CGFloat)arg1 longitude:(*CGFloat)arg2 ;
-(BOOL)_convertTimeZoneOffsetString:(id)arg0 toSeconds:(*CGFloat)arg1 ;
-(BOOL)_hasFFCDimensions;
-(NSInteger)_audioVideoProxyPropertyListForAsset:(id)arg0 performExport:(BOOL)arg1 propertyList:(*id)arg2 error:(*id)arg3 ;
-(NSUInteger)_stillImageProcessingFlags;
-(NSUInteger)stillImageProcessingFlags;
-(id)_dateTimeOffsetOriginalForSyndicationProperties;
-(id)_dateTimeOriginalForSyndicationProperties;
-(id)_dateTimeSubsecOriginalForSyndicationProperties;
-(id)_encodedDataReduceIfLargerThan:(NSUInteger)arg0 ;
-(id)_exifTimezoneOffsetFromDateString:(id)arg0 offsetInSeconds:(*NSInteger)arg1 ;
-(id)_formatValue:(id)arg0 withFormat:(id)arg1 ;
-(id)_imagePropertyValueForKey:(struct __CFString *)arg0 fromDictionary:(struct __CFString *)arg1 ;
-(id)_makeDateTimePropertiesForAsset:(id)arg0 ;
-(id)_makeDateTimePropertiesForSyndicationProperties:(id)arg0 ;
-(id)_makeGPSPropertiesForAsset:(id)arg0 ;
-(id)_primaryAudioTrack;
-(id)_primaryVideoTrack;
-(id)_timeZoneOffsetStringFromTimeZoneOffsetSeconds:(id)arg0 ;
-(id)audioBitsPerChannel;
-(id)audioBytesPerFrame;
-(id)audioBytesPerPacket;
-(id)audioChannelsPerFrame;
-(id)audioFormat;
-(id)audioFormatFlags;
-(id)audioFramesPerPacket;
-(id)audioSampleRate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodedData;
-(id)imageCaptureRequestIdentifier;
-(id)initForLimitedPropertiesWithPath:(id)arg0 ;
-(id)initForLimitedPropertiesWithPath:(id)arg0 contentType:(id)arg1 isImage:(BOOL)arg2 ;
-(id)initWithAVAsset:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithAVPropertiesDictionary:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)initWithAVProxyData:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)initWithAVURL:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithEncodedImagePropertyData:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageCaptureMovieProperties:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageData:(id)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 cacheImageData:(BOOL)arg6 ;
-(id)initWithImageProperties:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 ;
-(id)initWithImageURL:(id)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 cacheImageData:(BOOL)arg6 ;
-(id)initWithImageURL:(id)arg0 options:(id)arg1 detail:(unsigned char)arg2 timeZoneLookup:(id)arg3 cacheImageSource:(BOOL)arg4 cacheImageData:(BOOL)arg5 ;
-(id)initWithMediaURL:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 shouldCache:(BOOL)arg3 ;
-(id)initWithSyndicationProperties:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)jsonDictionary;
-(id)jsonFormattedDescriptionWithError:(*id)arg0 ;
-(id)photoProcessingIdentifier;
-(id)software;
-(id)sourceType;
-(struct AudioStreamBasicDescription )_mASBD;
-(struct opaqueCMFormatDescription *)_formatDescription;
-(void)_commonInitWithTimeZoneLookup:(id)arg0 ;
-(void)_computeAudioVideoAttributesForAVAsset:(id)arg0 ;
-(void)_computeCameraSerialNumber;
-(void)_computeCodecProperties;
-(void)_computeDateTimeValues;
-(void)_computeDateTimeValuesFromProperties:(id)arg0 ;
-(void)_computeDurationValue;
-(void)_computeDurationValueForAsset:(id)arg0 ;
-(void)_computeExposureTime;
-(void)_computeFNumberValue;
-(void)_computeGPSLocation;
-(void)_computeGPSValues;
-(void)_computeGPSValuesFromProperties:(id)arg0 ;
-(void)_computeISOSetting;
-(void)_computeIsProRes;
-(void)_computeOrientationValue;
-(void)_computePixelWidthAndHeightValue;
-(void)_computePixelWidthAndHeightValueForTrack:(id)arg0 ;
-(void)_computePortraitInLandscapeCameraValue;
-(void)_computeWhiteBalanceValue;
-(void)_enumerateTracksOfType:(unsigned int)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)fixupGPSWithDate:(id)arg0 time:(id)arg1 ;
-(void)inDictionary:(id)arg0 setKeysAndValues:(id)arg1 ;


@end


#endif