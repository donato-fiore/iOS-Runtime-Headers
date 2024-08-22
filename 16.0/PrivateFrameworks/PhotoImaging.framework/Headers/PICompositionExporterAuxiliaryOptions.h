// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICOMPOSITIONEXPORTERAUXILIARYOPTIONS_H
#define PICOMPOSITIONEXPORTERAUXILIARYOPTIONS_H

@class NUImageExportFormat, NSURL, NUAdjustment, NSString;


#import "PICompositionExporterOptions.h"

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions

@property BOOL applyImageOrientationAsMetadata; // ivar: _applyImageOrientationAsMetadata
@property BOOL applyVideoOrientationAsMetadata; // ivar: _applyVideoOrientationAsMetadata
@property (copy) NUImageExportFormat *imageExportFormat; // ivar: _imageExportFormat
@property (retain) NSURL *primaryURL; // ivar: _primaryURL
@property (retain) NUAdjustment *reframeCropAdjustment; // ivar: _reframeCropAdjustment
@property (retain) NUAdjustment *reframeVideoAdjustment; // ivar: _reframeVideoAdjustment
@property BOOL renderCompanionResources; // ivar: _renderCompanionResources
@property (copy, nonatomic) NSString *videoCodecType; // ivar: _videoCodecType
@property (retain) NSURL *videoComplementURL; // ivar: _videoComplementURL
@property (retain) NSURL *videoPosterFrameURL; // ivar: _videoPosterFrameURL




@end


#endif