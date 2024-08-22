// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICOMPOSITIONEXPORTERVIDEOOPTIONS_H
#define PICOMPOSITIONEXPORTERVIDEOOPTIONS_H

@class NSString;


#import "PICompositionExporterOptions.h"

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions

@property (nonatomic) BOOL applyVideoOrientationAsMetadata; // ivar: _applyVideoOrientationAsMetadata
@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition; // ivar: _bypassOutputSettingsIfNoComposition
@property (nonatomic) BOOL computeDigest; // ivar: _computeDigest
@property (nonatomic) BOOL includeCinematicVideoTracks; // ivar: _includeCinematicVideoTracks
@property (nonatomic) BOOL increaseBitRateIfNecessary; // ivar: _increaseBitRateIfNecessary
@property (copy) id *metadataProcessor; // ivar: _metadataProcessor
@property (nonatomic) BOOL preserveSourceColorSpace; // ivar: _preserveSourceColorSpace
@property (nonatomic) BOOL requireHardwareEncoder; // ivar: _requireHardwareEncoder
@property (copy, nonatomic) NSString *videoCodecType; // ivar: _videoCodecType


-(id)description;
-(id)init;


@end


#endif