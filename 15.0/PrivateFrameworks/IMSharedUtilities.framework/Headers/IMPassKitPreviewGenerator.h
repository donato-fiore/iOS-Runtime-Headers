// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMPASSKITPREVIEWGENERATOR_H
#define IMPASSKITPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMImagePreviewGenerator.h"

@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)hasFailed:(id)arg0 error:(id)arg1 ;
+(BOOL)passDataHasFailed:(id)arg0 error:(id)arg1 ;
+(BOOL)passHasFailed:(id)arg0 error:(id)arg1 ;
+(BOOL)passViewHasFailed:(id)arg0 ;
+(BOOL)writesToDisk;
+(id)UTITypes;
+(id)passDataForURL:(id)arg0 error:(*id)arg1 ;
+(id)passForPassData:(id)arg0 error:(*id)arg1 ;
+(id)passViewForPass:(id)arg0 ;
+(struct CGImage *)newCroppedAndRescaledImageFromPKPassView:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CGSize )sizePreviewAtSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;


@end


#endif