// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMORDERPREVIEWGENERATOR_H
#define IMORDERPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMImagePreviewGenerator.h"

@interface IMOrderPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)generatesMetadata;
+(BOOL)generatesPreview;
+(BOOL)isSupported;
+(id)UTITypes;
+(id)_dictionaryRepresentationForColor:(id)arg0 ;
+(id)_dictionaryRepresentationForOrderText:(id)arg0 ;
+(id)generateAndPersistMetadataFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(id)metadataExtension;
+(id)previewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(id)temporaryDirectory;


@end


#endif