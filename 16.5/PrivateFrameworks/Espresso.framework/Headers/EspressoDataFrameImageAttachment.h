// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESPRESSODATAFRAMEIMAGEATTACHMENT_H
#define ESPRESSODATAFRAMEIMAGEATTACHMENT_H



#import "EspressoDataFrameAttachment.h"

@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment {
    vImage_Buffer buffer;
}


@property int nChannels; // ivar: _nChannels


+(struct __CVBuffer *)createCVPixelBufferFromvImage:(struct vImage_Buffer )arg0 withPixelFormat:(unsigned int)arg1 ;
-(struct vImage_Buffer )copyAsImageGrayscaleOrBGRA;
-(void)loadFromDict:(id)arg0 frameStorage:(id)arg1 ;


@end


#endif