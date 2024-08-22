// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMAPPREVIEWGENERATOR_H
#define IMMAPPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMContactCardPreviewGenerator.h"

@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)supportsBlastDoor;
+(BOOL)writesToDisk;
+(id)UTITypes;
+(id)mapSnapshotterQueue;
+(id)titleBarMaskImageForWidth:(CGFloat)arg0 constraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(id)vCardDataForURL:(id)arg0 ;
+(id)vCardURLSForData:(id)arg0 ;
+(id)valueForKey:(id)arg0 forURLComponents:(id)arg1 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 interfaceStyle:(NSInteger)arg2 error:(*id)arg3 ;
+(struct CGSize )mapThumbnailFillSizeForWidth:(CGFloat)arg0 ;
+(struct CGSize )sizePreviewAtSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CLLocationCoordinate2D )_legacyCoordinateForvCardURL:(id)arg0 ;
+(struct CLLocationCoordinate2D )coordinateForvCardURL:(id)arg0 ;


@end


#endif