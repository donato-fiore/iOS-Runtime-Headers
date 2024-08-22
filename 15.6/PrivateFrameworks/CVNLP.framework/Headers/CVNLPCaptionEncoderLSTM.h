// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCAPTIONENCODERLSTM_H
#define CVNLPCAPTIONENCODERLSTM_H



#import "CVNLPCaptionEncoder.h"

@interface CVNLPCaptionEncoderLSTM : CVNLPCaptionEncoder {
    *void encoderPlan;
    *void encoderCtx;
    ? encoderNet;
    ? meanFeatsBlob;
    ? attFeatsBlob;
    ? pAttFeatsBlob;
    BOOL meanFeaturesPresent;
}




-(id)initWithOptions:(id)arg0 runTimeParams:(id)arg1 ;
-(void)_run:(struct vImage_Buffer *)arg0 meanFeatures:(*id)arg1 attnFeatures:(*id)arg2 projectedAttnFeatures:(*id)arg3 ;
-(void)computeCaptionForImage:(struct vImage_Buffer *)arg0 outputs:(*id)arg1 ;
-(void)dealloc;


@end


#endif