// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCAPTIONENCODER_H
#define CVNLPCAPTIONENCODER_H



#import "CVNLPCaptionModelBase.h"

@interface CVNLPCaptionEncoder : CVNLPCaptionModelBase {
    NSUInteger data_dim;
}




-(NSUInteger)_blob_size:(struct ? )arg0 ;
-(void)_fill_blob_data:(struct ? )arg0 with:(float)arg1 ;
-(void)computeCaptionForImage:(struct vImage_Buffer *)arg0 outputs:(*id)arg1 ;
-(void)computeCaptionForPixelBuffer:(struct __CVBuffer *)arg0 outputs:(*id)arg1 ;


@end


#endif