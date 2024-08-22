// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFIMAGEMETADATA_H
#define PFIMAGEMETADATA_H


#import <Foundation/Foundation.h>


@interface PFImageMetadata : NSObject



+(BOOL)enumerateImageSourceIndexesOfFileAtURL:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
+(BOOL)metadataTypeRequiresImageSourceAuxiliaryImage:(unsigned char)arg0 ;
+(BOOL)queryImagePropertiesOfFileAtURL:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
+(BOOL)readMetadataType:(unsigned char)arg0 fromCGImageProperties:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
+(BOOL)readMetadataType:(unsigned char)arg0 fromFileURL:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
+(BOOL)readMetadataValueFromImageAtFileURL:(id)arg0 dictionaryKey:(*void)arg1 key:(*void)arg2 value:(*id)arg3 error:(*id)arg4 ;
+(BOOL)writeMetadataType:(unsigned char)arg0 value:(id)arg1 toCGImageProperties:(id)arg2 error:(*id)arg3 ;
+(id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+(id)auxiliaryImageRecordsToPreserveForDerivativesFromImageSource:(struct CGImageSource *)arg0 imageIndex:(NSUInteger)arg1 ;
+(id)auxiliaryImageRecordsToPreserveForDerivativesFromPrimaryImageInImageSource:(struct CGImageSource *)arg0 ;
+(id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(struct CGImageSource *)arg0 imageIndex:(NSUInteger)arg1 ;
+(id)cIImageFromAuxiliaryImageInfo:(id)arg0 applyingOrientation:(unsigned int)arg1 scaleFactor:(CGFloat)arg2 ;
+(id)cIImageFromPixelBuffer:(struct __CVBuffer *)arg0 applyingOrientation:(unsigned int)arg1 scaleFactor:(CGFloat)arg2 ;
+(id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(struct __CVBuffer *)arg0 metadata:(struct CGImageMetadata *)arg1 ;
+(id)imagePropertiesByRemovingKey:(*void)arg0 dictionaryKey:(*void)arg1 fromImageProperties:(id)arg2 ;
+(id)transformAuxiliaryImages:(id)arg0 scaleFactor:(CGFloat)arg1 applyingOrientation:(unsigned int)arg2 ;
+(id)valueFromCGImageProperties:(id)arg0 dictionaryKey:(*void)arg1 key:(*void)arg2 ;
+(struct CGImage *)createImageRefFromAuxiliaryImageInfo:(id)arg0 applyingOrientation:(unsigned int)arg1 scaleFactor:(CGFloat)arg2 ;
+(struct CGImage *)createImageRefFromAuxiliaryImagePixelBuffer:(struct __CVBuffer *)arg0 applyingOrientation:(unsigned int)arg1 scaleFactor:(CGFloat)arg2 ;
+(struct __CVBuffer *)createPixelBufferFromAuxiliaryImageInfo:(id)arg0 ;


@end


#endif