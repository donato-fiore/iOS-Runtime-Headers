// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMASPECTCROPUTILITIES_H
#define CAMASPECTCROPUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMAspectCropUtilities : NSObject



+(id)cropFilterForAspectRatio:(NSInteger)arg0 imageSize:(struct CGSize )arg1 ;
+(struct CGRect )cropRectForAspectRatio:(NSInteger)arg0 inImageBounds:(struct CGRect )arg1 ;
+(struct CGSize )finalExpectedSizeWithCaptureDimensions:(struct ? )arg0 orientation:(int)arg1 aspectRatio:(NSInteger)arg2 ;
+(struct CGSize )finalExpectedSizeWithPhotoMetadata:(id)arg0 aspectRatio:(NSInteger)arg1 ;


@end


#endif