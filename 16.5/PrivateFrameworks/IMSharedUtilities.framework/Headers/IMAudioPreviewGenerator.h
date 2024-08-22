// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAUDIOPREVIEWGENERATOR_H
#define IMAUDIOPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMPreviewGenerator.h"

@interface IMAudioPreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)generatesMetadata;
+(BOOL)generatesPreview;
+(BOOL)writesToDisk;
+(id)UTITypes;
+(id)audioMedataForFileURL:(id)arg0 ;
+(id)generateAndPersistMetadataFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(id)metadataExtension;


@end


#endif