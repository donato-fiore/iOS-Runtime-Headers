// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMETADATALEGACYMOVIEPROPERTIES_H
#define PFMETADATALEGACYMOVIEPROPERTIES_H

@class NSDictionary;


#import "PFMetadataCore.h"

@interface PFMetadataLegacyMovieProperties : PFMetadataCore {
    NSDictionary *_audioVideoProperties;
}




-(BOOL)configureWithMetadataPlist:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMovie;
-(BOOL)isSloMo;
-(BOOL)isTimelapse;
-(id)_makeDateTimeProperties;
-(id)_makeGPSProperties;
-(id)_makeGeometryProperties;
-(id)_primaryAudioTrack;
-(id)_primaryVideoTrack;
-(id)audioDataRate;
-(id)audioSampleRate;
-(id)audioTrackFormat;
-(id)audioTrackFormatFlags;
-(id)cameraMake;
-(id)cameraModel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)durationTimeInterval;
-(id)initWithAVProxyData:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)initWithMetadataPlist:(id)arg0 timeZoneLookup:(id)arg1 ;
-(id)nominalFrameRate;
-(id)plistForEncoding;
-(id)software;
-(id)videoCodecName;
-(id)videoDataRate;
-(struct opaqueCMFormatDescription *)_formatDescription;
-(void)_enumerateTracksOfType:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif