// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOMPOSITIONEXPORTERIMAGEOPTIONS_H
#define PICOMPOSITIONEXPORTERIMAGEOPTIONS_H

@class NUImageExportFormat;


#import "PICompositionExporterOptions.h"

@interface PICompositionExporterImageOptions : PICompositionExporterOptions

@property CGFloat JPEGCompressionQuality; // ivar: _JPEGCompressionQuality
@property BOOL applyImageOrientationAsMetadata; // ivar: _applyImageOrientationAsMetadata
@property (copy) NUImageExportFormat *imageExportFormat; // ivar: _imageExportFormat
@property (copy) id *metadataProcessor; // ivar: _metadataProcessor
@property BOOL optimizeForBackgroundProcessing; // ivar: _optimizeForBackgroundProcessing
@property BOOL optimizeForSharing; // ivar: _optimizeForSharing


-(id)imageExportFormatForURL:(id)arg0 ;
-(id)init;


@end


#endif