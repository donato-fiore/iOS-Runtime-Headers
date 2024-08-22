// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPSCENEPROCESSINGIMAGEMANAGER_H
#define VCPSCENEPROCESSINGIMAGEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCPSceneProcessingImageManager : NSObject {
    NSMutableDictionary *_pixelBufferPools;
}




+(id)imageManager;
-(?)_createPixelBuffer:(?)arg0 withColorSpacefromPixelBuffer;
-(?)_createPixelBuffer:(?)arg0 withMinorDimensionfromFullPixelBuffer;
-(?)_createPixelBuffer:(?)arg0 withWidthandHeight;
-(?)_pooledPixelBufferwithDimension;
-(?)loadFullPixelBuffer:(?)arg0 scaledPixelBuffer299:(?)arg1 scaledPixelBuffer360:(?)arg2 fromImageURLabnormalDimension;
-(?)scalePixelBuffer:(?)arg0 toPixelBuffer:(?)arg1 widthheight;
-(id)init;
-(int)fullPixelBuffer:(struct __CVBuffer *)arg0 toScaledBuffer:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif