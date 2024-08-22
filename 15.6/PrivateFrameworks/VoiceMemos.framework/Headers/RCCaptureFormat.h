// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCCAPTUREFORMAT_H
#define RCCAPTUREFORMAT_H


#import <Foundation/Foundation.h>


@interface RCCaptureFormat : NSObject



+(id)AVAssetAuthoringMetadataWithComposition:(id)arg0 ;
+(id)AVAssetAuthoringMetadataWithCreationDate:(id)arg0 title:(id)arg1 uniqueID:(id)arg2 ;
+(id)AVAssetAuthoringMetadataWithCreationDate:(id)arg0 title:(id)arg1 uniqueID:(id)arg2 musicMemoMetadata:(id)arg3 ;
+(id)AVAssetAuthoringMetadataWithRecordingMetadata:(id)arg0 ;
+(id)AVAssetExportPresetForExportingToExtension:(id)arg0 preferredFormat:(unsigned int)arg1 ;
+(id)AVFileTypeUTIForFileExtension:(id)arg0 ;
+(id)AVMediaTypeForFileExtension:(id)arg0 ;
+(id)fileExtensionForAssetExport;
+(id)fileExtensionForIntermediateAssetCapture;
+(id)fileExtensionsSupported;
+(id)fileFormatsDirectlyImportable;
+(void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg0 inputFormat:(unsigned int)arg1 preferredOutputExtension:(id)arg2 preferredFormat:(unsigned int)arg3 completionHandler:(id)arg4 ;
+(void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg0 inputFormat:(unsigned int)arg1 outputExtensionWithFallbacks:(id)arg2 preferredFormat:(unsigned int)arg3 completionHandler:(id)arg4 ;


@end


#endif