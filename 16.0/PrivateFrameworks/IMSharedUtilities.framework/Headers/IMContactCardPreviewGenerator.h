// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCONTACTCARDPREVIEWGENERATOR_H
#define IMCONTACTCARDPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMImagePreviewGenerator.h"

@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)supportsBlastDoor;
+(CGFloat)contactMonogramDiameter;
+(id)UTITypes;
+(id)contactCardPreviewPayloadFileURLFrom:(id)arg0 previewURL:(id)arg1 withFileExtension:(id)arg2 ;
+(id)contactCardPreviewPayloadsDirectoryFrom:(id)arg0 previewURL:(id)arg1 ;
+(id)generateContactPlistFrom:(id)arg0 previewURL:(id)arg1 error:(*id)arg2 ;
+(id)vCardDataForURL:(id)arg0 ;
+(struct CGImage *)monogramForFirstName:(id)arg0 lastName:(id)arg1 ;
+(struct CGImage *)newContactCardPreviewFrom:(id)arg0 previewURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 error:(*id)arg3 ;
+(struct CGImage *)newMonogramImageForData:(id)arg0 constraints:(struct IMPreviewConstraints )arg1 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 previewURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 error:(*id)arg3 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;


@end


#endif