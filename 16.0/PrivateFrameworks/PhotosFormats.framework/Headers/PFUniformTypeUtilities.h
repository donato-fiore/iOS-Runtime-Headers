// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUNIFORMTYPEUTILITIES_H
#define PFUNIFORMTYPEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFUniformTypeUtilities : NSObject



+(BOOL)filenameExtension:(id)arg0 conformsToOneOfTypes:(id)arg1 ;
+(BOOL)type:(id)arg0 conformsToOneOfTypes:(id)arg1 ;
+(BOOL)url:(id)arg0 conformsToOneOfTypes:(id)arg1 ;
+(BOOL)url:(id)arg0 conformsToType:(id)arg1 ;
+(id)adobeIllustratorType;
+(id)adobePhotoshopType;
+(id)apertureLibraryType;
+(id)avifType;
+(id)canonCR2RAWImageType;
+(id)canonCRWRAWImageType;
+(id)canonTIFFRAWImageType;
+(id)fujiRAWImageType;
+(id)hasselblad3FRRAWImageType;
+(id)hasselbladFFFRAWImageType;
+(id)heicSequenceType;
+(id)iPhotoLibraryType;
+(id)icoType;
+(id)imageTypesUnsupportedForImport;
+(id)jpeg2000Type;
+(id)leafamericaRAWImageType;
+(id)livePhotoBundlePrivateType;
+(id)livePhotoBundleType;
+(id)macPaintType;
+(id)nikonRAWImageType;
+(id)olympusRAWImageType;
+(id)panasonicRAWImageType;
+(id)panasonicRW2RAWImageType;
+(id)pentaxRAWImageType;
+(id)photosLibraryType;
+(id)pictType;
+(id)preferredOrFallbackFilenameExtensionForType:(id)arg0 ;
+(id)quicktimeImageType;
+(id)resourceModelTypeForFilenameExtension:(id)arg0 ;
+(id)samsungRAWImageType;
+(id)sonyARWRAWImageType;
+(id)supplementalResourceAAEType;
+(id)supplementalResourceXMPType;
+(id)supportedAudioTypes;
+(id)supportedImageTypes;
+(id)supportedMovieTypes;
+(id)typeForFilenameExtensionOrLastPathComponent:(id)arg0 ;
+(id)typeForHFSType:(unsigned int)arg0 ;
+(id)typeForHFSType:(unsigned int)arg0 conformingToType:(id)arg1 ;
+(id)typeForURL:(id)arg0 error:(*id)arg1 ;
+(id)typeWithFilenameExtension:(id)arg0 ;
+(id)typeWithFilenameExtension:(id)arg0 conformingToType:(id)arg1 ;
+(id)typeWithIdentifier:(id)arg0 ;
+(id)typesSupportedForImport;


@end


#endif