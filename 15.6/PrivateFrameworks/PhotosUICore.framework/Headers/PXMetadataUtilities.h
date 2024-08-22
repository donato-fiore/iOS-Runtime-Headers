// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMETADATAUTILITIES_H
#define PXMETADATAUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXMetadataUtilities : NSObject



+(NSUInteger)codecTypeForItem:(id)arg0 ;
+(NSUInteger)fileTypeForItem:(id)arg0 ;
+(NSUInteger)fileTypeForItem:(id)arg0 type:(NSUInteger)arg1 ;
+(NSUInteger)flashTypeForItem:(id)arg0 ;
+(NSUInteger)meteringModeTypeForItem:(id)arg0 ;
+(NSUInteger)whiteBalanceTypeForItem:(id)arg0 ;
+(id)_accessibilityDescriptionForFileType:(NSUInteger)arg0 ;
+(id)_apertureStringFromString:(id)arg0 ;
+(id)_fileTypeImageForType:(NSUInteger)arg0 ;
+(id)_focalLengthFromString:(id)arg0 ;
+(id)_focalLengthStringFromString:(id)arg0 ;
+(id)_formattedApertureStringWithString:(id)arg0 ;
+(id)_formattedDeviceDescriptionForItem:(id)arg0 ;
+(id)_formattedLensDescriptionForItem:(id)arg0 ;
+(id)_loadImageWithName:(id)arg0 ;
+(id)_loadImageWithSystemName:(id)arg0 ;
+(id)ax_megaPixelsStringForItem:(id)arg0 ;
+(id)cameraSettingsDisplayStringsForItem:(id)arg0 ;
+(id)cameraSettingsForItem:(id)arg0 ;
+(id)fileTypeImageForType:(NSUInteger)arg0 ;
+(id)flashImageForType:(NSUInteger)arg0 ;
+(id)hardwareDisplayStringsForItem:(id)arg0 ;
+(id)localizedFileFormatForItem:(id)arg0 ;
+(id)megaPixelsDisplayStringForItem:(id)arg0 ;
+(id)meteringModeImageForType:(NSUInteger)arg0 ;
+(id)originalCreationDateForItem:(id)arg0 ;
+(id)originalLocationForItem:(id)arg0 ;
+(id)originalTimeZoneForItem:(id)arg0 ;
+(id)resolutionDisplayStringForItem:(id)arg0 ;
+(id)semanticStylesDisplayStringForItem:(id)arg0 ;
+(id)semanticStylesIdentifierForItem:(id)arg0 ;
+(id)symbolSystemNamesForItem:(id)arg0 ;
+(id)whiteBalanceImageForType:(NSUInteger)arg0 ;
// +(void)processExifMetadataForItem:(id)arg0 resultHandler:(id)arg1 callbackQueue:(unk)arg2  ;
+(void)requestExifMetadataProcessingIfNeededForItem:(id)arg0 onProcessingQueue:(id)arg1 withResultHandler:(id)arg2 ;


@end


#endif