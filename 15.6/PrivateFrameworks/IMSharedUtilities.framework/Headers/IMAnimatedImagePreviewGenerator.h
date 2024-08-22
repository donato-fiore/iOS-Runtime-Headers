// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMANIMATEDIMAGEPREVIEWGENERATOR_H
#define IMANIMATEDIMAGEPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMPreviewGenerator.h"

@interface IMAnimatedImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)writesToDisk;
+(id)UTITypes;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg0 balloonBundleID:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 outSize:(struct CGSize *)arg3 error:(*id)arg4 ;
-(BOOL)__im_ff_animatedImagesBlastDoorEnabled;


@end


#endif