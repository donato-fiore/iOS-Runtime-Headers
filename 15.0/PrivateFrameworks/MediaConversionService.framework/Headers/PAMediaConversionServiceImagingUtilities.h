// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAMEDIACONVERSIONSERVICEIMAGINGUTILITIES_H
#define PAMEDIACONVERSIONSERVICEIMAGINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PAMediaConversionServiceImagingUtilities : NSObject



+(BOOL)_generatePosterFrameExportForVideoURL:(id)arg0 imageDestinationToAddToAndFinalize:(struct CGImageDestination *)arg1 maximumSize:(struct CGSize )arg2 error:(*id)arg3 ;
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg0 destinationURL:(id)arg1 maximumSize:(struct CGSize )arg2 outputFileType:(id)arg3 error:(*id)arg4 ;
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg0 outputData:(*id)arg1 maximumSize:(struct CGSize )arg2 outputFileType:(id)arg3 error:(*id)arg4 ;
+(id)imageDataForPassthroughConversionForSourceURL:(id)arg0 metadataPolicy:(id)arg1 outResultImageSize:(struct CGSize *)arg2 ;
+(id)imagePropertiesForFileAtURL:(id)arg0 ;


@end


#endif