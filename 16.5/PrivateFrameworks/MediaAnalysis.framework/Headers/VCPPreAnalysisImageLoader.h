// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPPREANALYSISIMAGELOADER_H
#define VCPPREANALYSISIMAGELOADER_H


#import <Foundation/Foundation.h>

#import "VCPSceneProcessingImageManager.h"
#import "VCPPoolBasedPixelBufferCreator.h"

@interface VCPPreAnalysisImageLoader : NSObject {
    VCPSceneProcessingImageManager *_imageManager;
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;
    CF<OpaqueVTPixelTransferSession *> _transferSession;
}




-(?)_convertFromBuffer:(?)arg0 toLumaPixelBufferabnormalDimension;
-(?)_createPixelBufferWithWidth:(?)arg0 height:(?)arg1 pixelFormatpixelBuffer;
-(?)loadImageURL:(?)arg0 abnormalDimension:(?)arg1 withNonPanoPreWarmSizes:(?)arg2 toColorPixelBuffer:(?)arg3 lumaPixelBufferandImage;
-(id)initWithMonochromeBufferCreator:(id)arg0 ;


@end


#endif