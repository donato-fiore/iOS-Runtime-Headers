// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMETADATAIMAGE_H
#define PFMETADATAIMAGE_H

@class NSString, NSDictionary, NSNumber, NSData;


#import "PFMetadataCore.h"

@interface PFMetadataImage : PFMetadataCore {
    *CGImageMetadata _cgImageMetadata;
    id *_hdrGainMap;
}


@property (retain, nonatomic) NSString *cameraSerialNumber; // ivar: _cameraSerialNumber
@property (retain, nonatomic) NSDictionary *cgImageProperties; // ivar: _cgImageProperties
@property (retain, nonatomic) NSNumber *exposureTime; // ivar: _exposureTime
@property (retain, nonatomic) NSNumber *fNumber; // ivar: _fNumber
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) *CGImageSource imageSource; // ivar: _imageSource
@property (retain, nonatomic) NSNumber *iso; // ivar: _iso
@property (retain, nonatomic) NSNumber *whiteBalance; // ivar: _whiteBalance


+(id)defaultOptionsForCGImageSource;
-(BOOL)_configureWithImageData:(id)arg0 options:(id)arg1 cacheImageSource:(BOOL)arg2 cacheImageData:(BOOL)arg3 ;
-(BOOL)_configureWithImageProperties:(id)arg0 ;
-(BOOL)_configureWithImageSource:(struct CGImageSource *)arg0 options:(id)arg1 cacheImageSource:(BOOL)arg2 ;
-(BOOL)_configureWithImageURL:(id)arg0 options:(id)arg1 cacheImageSource:(BOOL)arg2 cacheImageData:(BOOL)arg3 ;
-(BOOL)_hasFFCDimensions;
-(BOOL)_hasScreenshotDimensions;
-(BOOL)configureWithMetadataPlist:(id)arg0 ;
-(BOOL)flashFired;
-(BOOL)isDeferredPhotoProxy;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFrontFacingCamera;
-(BOOL)isHDR;
-(BOOL)isImage;
-(BOOL)isMonoskiMedia;
-(BOOL)isPhotoBooth;
-(BOOL)isPortrait;
-(BOOL)isSDOF;
-(BOOL)isScreenshot;
-(BOOL)isSpatialOverCapture;
-(NSInteger)customRendered;
-(NSUInteger)photoProcessingFlags;
-(id)GIFDelayTime;
-(id)HEICSDelayTime;
-(id)_formatValue:(id)arg0 withPrecision:(NSUInteger)arg1 ;
-(id)_makeDateTimeProperties;
-(id)_makeGPSProperties;
-(id)_makeGeometryProperties;
-(id)altitudeRef;
-(id)artworkContentDescription;
-(id)brightness;
-(id)burstUuid;
-(id)cameraMake;
-(id)cameraModel;
-(id)captionAbstract;
-(id)ciffDictionary;
-(id)colorSpace;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deferredPhotoProcessingIdentifier;
-(id)digitalZoomRatio;
-(id)exifAuxDictionary;
-(id)exifDictionary;
-(id)exposureBias;
-(id)firmware;
-(id)flashCompensation;
-(id)flashValue;
-(id)focalLength;
-(id)focalLengthIn35mm;
-(id)focusDistance;
-(id)focusMode;
-(id)focusPoints;
-(id)gifDictionary;
-(id)gpsDictionary;
-(id)gpsHPositioningError;
-(id)groupingUuid;
-(id)hdrGain;
-(id)hdrGainMap;
-(id)hdrGainMapPercentageValue;
-(id)imageCaptureRequestIdentifier;
-(id)imageDirection;
-(id)imageDirectionRef;
-(id)initWithEncodedImagePropertyData:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageData:(id)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 cacheImageData:(BOOL)arg6 ;
-(id)initWithImageProperties:(id)arg0 contentType:(id)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 ;
-(id)initWithImageURL:(id)arg0 contentType:(id)arg1 options:(id)arg2 detail:(unsigned char)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(BOOL)arg5 cacheImageData:(BOOL)arg6 ;
-(id)iptcDictionary;
-(id)keywords;
-(id)lensMake;
-(id)lensMaximumMM;
-(id)lensMinimumMM;
-(id)lensModel;
-(id)lightSource;
-(id)livePhotoPairingIdentifier;
-(id)makerAppleDictionary;
-(id)makerCanonDictionary;
-(id)makerNikonDictionary;
-(id)meteringMode;
-(id)originatingAssetIdentifier;
-(id)ownerName;
-(id)photoProcessingIdentifier;
-(id)playbackVariation;
-(id)plistForEncoding;
-(id)portraitInLandscapeCamera;
-(id)profileName;
-(id)renderOriginatingAssetIdentifier;
-(id)semanticStylePreset;
-(id)semanticStyleRenderingVersion;
-(id)semanticStyleToneBias;
-(id)semanticStyleWarmthBias;
-(id)software;
-(id)spatialOverCaptureIdentifier;
-(id)speedRef;
-(id)syndicationProperties;
-(id)tiffDictionary;
-(id)title;
-(id)userComment;
-(struct CGImageMetadata *)cgImageMetadata;
-(void)_computeCameraSerialNumber;
-(void)_computeExposureTime;
-(void)_computeFNumberValue;
-(void)_computeISOSetting;
-(void)_computeWhiteBalanceValue;
-(void)dealloc;
-(void)fixupGPSWithDate:(id)arg0 time:(id)arg1 ;
-(void)setCgImageMetadata:(struct CGImageMetadata *)arg0 ;
-(void)setKeysAndValues:(id)arg0 inDictionary:(id)arg1 ;


@end


#endif