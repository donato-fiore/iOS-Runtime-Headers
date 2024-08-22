// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMOTIONFLOWREQUEST_H
#define VCPMOTIONFLOWREQUEST_H



#import "VCPRequest.h"
#import "VCPModelR2D2.h"

@interface VCPMotionFlowRequest : VCPRequest {
    VCPModelR2D2 *_model;
    int _numLevels;
    int _startLevel;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    *__CVBuffer _firstBuffer;
    *__CVBuffer _secondBuffer;
    *__CVBuffer _outputFlow;
}




-(BOOL)cleanupWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)estimateMotionBetweenFirstImage:(struct __CVBuffer *)arg0 andSecondImage:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(int)allocateInputAndOutputBuffers;
-(int)copyImage:(struct __CVBuffer *)arg0 toBuffer:(struct __CVBuffer *)arg1 withChannels:(int)arg2 ;
-(int)createInput:(struct __CVBuffer *)arg0 withImage:(struct __CVBuffer *)arg1 modelInputHeight:(int)arg2 modelInputWidth:(int)arg3 ;
-(int)releaseInputAndOutputBuffers;
-(struct CGSize )preferredInputSizeWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)preferredPixelFormat;
-(void)dealloc;


@end


#endif