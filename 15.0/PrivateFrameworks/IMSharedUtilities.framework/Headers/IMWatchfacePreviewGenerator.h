// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMWATCHFACEPREVIEWGENERATOR_H
#define IMWATCHFACEPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMImagePreviewGenerator.h"

@interface IMWatchfacePreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)_isAvailable;
+(BOOL)decorateWatchfacePreview:(id)arg0 andWriteToURL:(id)arg1 imagePxSize:(struct CGSize *)arg2 ;
+(BOOL)writesToDisk;
+(Class)greenfieldUtilitiesClass;
+(id)UTITypes;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg0 balloonBundleID:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 outSize:(struct CGSize *)arg3 error:(*id)arg4 ;


@end


#endif