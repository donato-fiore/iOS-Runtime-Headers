// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETWRITERINPUTCONFIGURATIONSTATE_H
#define AVASSETWRITERINPUTCONFIGURATIONSTATE_H

@class NSString, NSArray, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVOutputSettings.h"

@interface AVAssetWriterInputConfigurationState : NSObject

@property (nonatomic) short alternateGroupID; // ivar: _alternateGroupID
@property (nonatomic) BOOL expectsMediaDataInRealTime; // ivar: _expectsMediaDataInRealTime
@property (copy, nonatomic) NSString *extendedLanguageTag; // ivar: _extendedLanguageTag
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) NSInteger layer; // ivar: _layer
@property (nonatomic) BOOL marksOutputTrackAsEnabled; // ivar: _marksOutputTrackAsEnabled
@property (nonatomic) BOOL maximizePowerEfficiency; // ivar: _maximizePowerEfficiency
@property (copy, nonatomic) NSString *mediaDataLocation; // ivar: _mediaDataLocation
@property (nonatomic) int mediaTimeScale; // ivar: _mediaTimeScale
@property (copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSArray *metadataItems; // ivar: _metadataItems
@property (nonatomic) CGSize naturalSize; // ivar: _naturalSize
@property (copy, nonatomic) AVOutputSettings *outputSettings; // ivar: _outputSettings
@property (nonatomic) BOOL performsMultiPassEncodingIfSupported; // ivar: _performsMultiPassEncodingIfSupported
@property (nonatomic) NSInteger preferredMediaChunkAlignment; // ivar: _chunkAlignment
@property (nonatomic) ? preferredMediaChunkDuration; // ivar: _chunkDuration
@property (nonatomic) NSInteger preferredMediaChunkSize; // ivar: _chunkSize
@property (nonatomic) float preferredVolume; // ivar: _preferredVolume
@property (nonatomic) short provisionalAlternateGroupID; // ivar: _provisionalAlternateGroupID
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL; // ivar: _sampleReferenceBaseURL
@property (retain, nonatomic) *opaqueCMFormatDescription sourceFormatHint; // ivar: _sourceFormatHint
@property (copy, nonatomic) NSDictionary *sourcePixelBufferAttributes; // ivar: _sourcePixelBufferAttributes
@property (nonatomic) int trackID; // ivar: _trackID
@property (copy, nonatomic) NSDictionary *trackReferences; // ivar: _trackReferences
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


-(void)dealloc;


@end


#endif