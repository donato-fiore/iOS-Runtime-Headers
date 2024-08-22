// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMETADATASYNDICATION_H
#define PFMETADATASYNDICATION_H

@class NSDictionary;


#import "PFMetadataCore.h"

@interface PFMetadataSyndication : PFMetadataCore {
    NSDictionary *_syndicationProperties;
}




-(BOOL)configureWithMetadataPlist:(id)arg0 ;
-(BOOL)hasHDRGainMap;
-(BOOL)isCinematicVideo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFrontFacingCamera;
-(BOOL)isImage;
-(BOOL)isMovie;
-(BOOL)isPhotoBooth;
-(BOOL)isProRes;
-(BOOL)isSyndicationOriginated;
-(NSInteger)customRendered;
-(NSInteger)orientation;
-(NSUInteger)fileSize;
-(NSUInteger)photoProcessingFlags;
-(id)GIFDelayTime;
-(id)_makeDateTimeProperties;
-(id)_timeZoneOffsetStringFromTimeZoneOffsetSeconds:(id)arg0 ;
-(id)altitude;
-(id)audioDataRate;
-(id)audioSampleRate;
-(id)audioTrackFormat;
-(id)burstUuid;
-(id)cameraMake;
-(id)cameraModel;
-(id)captureMode;
-(id)codecFourCharCode;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)digitalZoomRatio;
-(id)exposureBias;
-(id)exposureTime;
-(id)fNumber;
-(id)flashValue;
-(id)focalLength;
-(id)focalLengthIn35mm;
-(id)gpsDateTime;
-(id)gpsHPositioningError;
-(id)hdrGain;
-(id)hdrGainMap;
-(id)imageDirection;
-(id)imageDirectionRef;
-(id)initWithSyndicationProperties:(id)arg0 ;
-(id)iso;
-(id)latitude;
-(id)lensMake;
-(id)lensModel;
-(id)lightSource;
-(id)livePhotoPairingIdentifier;
-(id)longitude;
-(id)meteringMode;
-(id)montageString;
-(id)nominalFrameRate;
-(id)originalFileName;
-(id)originatingAssetIdentifer;
-(id)pixelHeight;
-(id)pixelWidth;
-(id)playbackVariation;
-(id)plistForEncoding;
-(id)profileName;
-(id)semanticStylePreset;
-(id)semanticStyleRenderingVersion;
-(id)semanticStyleToneBias;
-(id)semanticStyleWarmthBias;
-(id)spatialOverCaptureIdentifier;
-(id)speed;
-(id)speedRef;
-(id)syndicationProperties;
-(id)timeZoneOffset;
-(id)userComment;
-(id)videoDynamicRange;
-(id)whiteBalance;
-(id)whiteBalanceIndex;
-(struct ? )duration;
-(struct ? )stillImageDisplayTime;
-(struct ? )videoComplementDuration;


@end


#endif