// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMETADATAMOVIE_H
#define PFMETADATAMOVIE_H

@class AVAsset, NSDictionary, NSString, AVAssetTrack, NSNumber;


#import "PFMetadataCore.h"
#import "PFMetadataStateHandler.h"

@interface PFMetadataMovie : PFMetadataCore {
    AVAsset *_asset;
    NSDictionary *_stillImageDisplayTimeDictionary;
    NSDictionary *_originalAssetDateProperties;
    NSString *_identifyingTagClass;
    AVAssetTrack *_primaryVideoTrack;
    AVAssetTrack *_primaryAudioTrack;
    NSNumber *_isProRes;
    PFMetadataStateHandler *_stateHandler;
    NSString *_codecFourCharCode;
    NSString *_videoCodecName;
    ? _duration;
}




+(BOOL)parseISO6709String:(id)arg0 outLatitude:(*CGFloat)arg1 outLongitude:(*CGFloat)arg2 ;
+(id)exifTimezoneOffsetFromDateString:(id)arg0 offsetInSeconds:(*NSInteger)arg1 ;
+(id)primaryAudioTrackForAsset:(id)arg0 ;
+(id)primaryVideoTrackForAsset:(id)arg0 ;
+(struct AudioStreamBasicDescription )audioStreamBasicDescriptionForAsset:(id)arg0 ;
+(struct opaqueCMFormatDescription *)videoFormatDescriptionForAsset:(id)arg0 ;
+(void)_enumerateTracksOfType:(unsigned int)arg0 onAsset:(id)arg1 withBlock:(id)arg2 ;
-(BOOL)_configureWithAVAsset:(id)arg0 ;
-(BOOL)_configureWithAVProxyData:(id)arg0 ;
-(BOOL)_configureWithAVURL:(id)arg0 ;
-(BOOL)configureWithMetadataPlist:(id)arg0 ;
-(BOOL)isAutoLivePhoto;
-(BOOL)isCinematicVideo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHDR;
-(BOOL)isMonoskiMedia;
-(BOOL)isMovie;
-(BOOL)isProRes;
-(BOOL)isSloMo;
-(BOOL)isSpatialOverCapture;
-(BOOL)isTimelapse;
-(NSInteger)_audioVideoProxyPropertyListForAsset:(id)arg0 propertyList:(*id)arg1 error:(*id)arg2 ;
-(NSInteger)orientation;
-(float)livePhotoVitalityScore;
-(id)_exifTimezoneOffsetFromDateString:(id)arg0 offsetInSeconds:(*NSInteger)arg1 ;
-(id)_makeDateTimeProperties;
-(id)_makeDateTimePropertiesForAsset:(id)arg0 ;
-(id)_makeGPSProperties;
-(id)_makeGeometryProperties;
-(id)_primaryAudioTrack;
-(id)_primaryVideoTrack;
-(id)altitude;
-(id)artworkContentDescription;
-(id)audioBitsPerChannel;
-(id)audioBytesPerFrame;
-(id)audioBytesPerPacket;
-(id)audioChannelsPerFrame;
-(id)audioDataRate;
-(id)audioFramesPerPacket;
-(id)audioSampleRate;
-(id)audioTrackFormat;
-(id)audioTrackFormatFlags;
-(id)author;
-(id)cameraMake;
-(id)cameraModel;
-(id)captionAbstract;
-(id)captureMode;
-(id)codecFourCharCode;
-(id)contentTypeFromFastModernizeVideoMedia;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)gpsHPositioningError;
-(id)imageDirection;
-(id)initWithAVAsset:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 ;
-(id)initWithAVProxyData:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)initWithAVURL:(id)arg0 detail:(unsigned char)arg1 timeZoneLookup:(id)arg2 ;
-(id)keywords;
-(id)livePhotoMinimumClientVersion;
-(id)livePhotoPairingIdentifier;
-(id)montageString;
-(id)nominalFrameRate;
-(id)originatingAssetIdentifier;
-(id)playbackVariation;
-(id)plistForEncoding;
-(id)renderOriginatingAssetIdentifier;
-(id)software;
-(id)spatialOverCaptureIdentifier;
-(id)speed;
-(id)title;
-(id)videoCodecName;
-(id)videoDataRate;
-(id)videoDynamicRange;
-(struct ? )duration;
-(struct ? )stillImageDisplayTime;
-(struct AudioStreamBasicDescription )_audioStreamBasicDescription;
-(struct opaqueCMFormatDescription *)_videoFormatDescription;
-(void)_computeAudioVideoAttributes;
-(void)_computeCodecProperties;
-(void)_computeIsProRes;
-(void)_computeStillImageDisplayTimeValue;


@end


#endif