// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMETADATACORE_H
#define PFMETADATACORE_H

@class NSNumber, NSString, NSDictionary, UTType, NSDate, NSURL, NSArray, CLLocation, NSData, NSTimeZone;
@protocol PFMetadata, NSCopying;

#import <Foundation/Foundation.h>

#import "PFTimeZoneLookup.h"
#import "PFMetadataTypeVerifier.h"

@interface PFMetadataCore : NSObject <PFMetadata, NSCopying>

 {
    NSNumber *_pixelWidth;
    NSNumber *_pixelHeight;
}


@property (readonly, nonatomic) NSNumber *GIFDelayTime;
@property (readonly, nonatomic) NSNumber *HEICSDelayTime;
@property (retain, nonatomic) NSNumber *altitude; // ivar: _altitude
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
@property (retain, nonatomic) UTType *contentType; // ivar: _contentType
@property (readonly, nonatomic) UTType *contentTypeFromFastModernizeVideoMedia;
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) NSInteger creationDateSource; // ivar: _creationDateSource
@property (retain, nonatomic) NSString *creationDateString; // ivar: _creationDateString
@property (readonly, nonatomic) NSInteger customRendered;
@property (readonly, nonatomic) NSString *defaultProfileName;
@property (readonly, nonatomic) NSString *deferredPhotoProcessingIdentifier;
@property (nonatomic) unsigned char detail; // ivar: _detail
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
@property (readonly, nonatomic) NSNumber *hdrGainMapPercentageValue;
@property (readonly, nonatomic) NSString *imageCaptureRequestIdentifier;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSNumber *imageDirection;
@property (readonly, nonatomic) NSString *imageDirectionRef;
@property (readonly, nonatomic) *CGImageSource imageSource;
@property (readonly, nonatomic) BOOL isActionCam;
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
@property (retain, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (readonly, nonatomic) NSString *lensMake;
@property (readonly, nonatomic) NSNumber *lensMaximumMM;
@property (readonly, nonatomic) NSNumber *lensMinimumMM;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSNumber *lightSource;
@property (readonly, nonatomic) NSNumber *livePhotoMinimumClientVersion;
@property (readonly, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) float livePhotoVitalityScore;
@property (retain, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSString *montageString;
@property (readonly, nonatomic) NSNumber *nominalFrameRate;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
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
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (readonly, nonatomic) NSString *spatialOverCaptureIdentifier;
@property (retain, nonatomic) NSNumber *speed; // ivar: _speed
@property (readonly, nonatomic) NSString *speedRef;
@property (readonly, nonatomic) ? stillImageDisplayTime;
@property (readonly, nonatomic) NSDictionary *syndicationProperties;
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) PFTimeZoneLookup *timeZoneLookup; // ivar: _timeZoneLookup
@property (readonly, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) NSNumber *timeZoneOffset;
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) PFMetadataTypeVerifier *typeVerifier; // ivar: _typeVerifier
@property (readonly, nonatomic) NSString *userComment;
@property (retain, nonatomic) NSDate *utcCreationDate; // ivar: _utcCreationDate
@property (readonly, nonatomic) NSString *videoCodecName;
@property (readonly, nonatomic) NSNumber *videoDataRate;
@property (readonly, nonatomic) NSNumber *videoDynamicRange;
@property (readonly, nonatomic) NSNumber *whiteBalance;
@property (readonly, nonatomic) NSNumber *whiteBalanceIndex;


+(BOOL)_canEncodeInPropertyList:(id)arg0 ;
+(id)_filterArray:(id)arg0 ;
+(id)_filterDictionary:(id)arg0 ;
+(id)_filterPropertyListObject:(id)arg0 ;
+(id)encodedDataWithPropertyListObject:(id)arg0 ;
+(id)propertyListObjectFromEncodedData:(id)arg0 expectedClass:(Class)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_convertTimeZoneOffsetString:(id)arg0 toSeconds:(*CGFloat)arg1 ;
-(BOOL)configureWithMetadataPlist:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_stillImageProcessingFlags;
-(id)_dateTimeOffsetOriginalForSyndicationProperties;
-(id)_dateTimeOriginalForSyndicationProperties;
-(id)_dateTimeSubsecOriginalForSyndicationProperties;
-(id)_makeDateTimeProperties;
-(id)_makeGPSProperties;
-(id)_makeGeometryProperties;
-(id)audioBitsPerChannel;
-(id)audioBytesPerFrame;
-(id)audioBytesPerPacket;
-(id)audioChannelsPerFrame;
-(id)audioFramesPerPacket;
-(id)ciffDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)exifAuxDictionary;
-(id)exifDictionary;
-(id)gifDictionary;
-(id)gpsDictionary;
-(id)hdrGainFromValue:(id)arg0 ;
-(id)initWithContentType:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithMetadataPlist:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)iptcDictionary;
-(id)jsonDictionary;
-(id)makerAppleDictionary;
-(id)makerCanonDictionary;
-(id)makerNikonDictionary;
-(id)pixelHeight;
-(id)pixelWidth;
-(id)plistForEncoding;
-(id)software;
-(id)tiffDictionary;
-(void)_computeGPSLocation;
-(void)_computeOrientationValue;
-(void)computeDateTimeValues;
-(void)computeGPSValues;
-(void)computePixelWidthAndHeightValue;
-(void)fixupGPSWithDate:(id)arg0 time:(id)arg1 ;
-(void)setKeysAndValues:(id)arg0 inDictionary:(id)arg1 ;


@end


#endif