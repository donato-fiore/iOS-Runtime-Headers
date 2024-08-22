// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDIMAGEADJUSTER_H
#define TSDIMAGEADJUSTER_H

@class TSDImageAdjustments;

#import <Foundation/Foundation.h>


@interface TSDImageAdjuster : NSObject {
    TSDImageAdjustments *mImageAdjustments;
}




-(?)newFilteredImageForImageenhancedImage;
-(id)init;
-(id)initWithImageAdjustments:(id)arg0 ;
-(struct CGImage *)p_newImageFromCIImage:(id)arg0 underlyingImage:(struct CGImage *)arg1 ;
-(void)dealloc;


@end


#endif