// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPHANDPOSEIMAGEREQUEST_H
#define VCPHANDPOSEIMAGEREQUEST_H



#import "VCPRequest.h"
#import "VCPImageHandsAnalyzer.h"

@interface VCPHandPoseImageRequest : VCPRequest {
    VCPImageHandsAnalyzer *_analyzer;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
}




-(BOOL)cleanupWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)processImage:(struct __CVBuffer *)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(int)parseResults:(id)arg0 observations:(id)arg1 ;
-(struct CGSize )preferredInputSizeWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)preferredPixelFormat;


@end


#endif