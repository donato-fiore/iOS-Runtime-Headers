// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKTOPTICALFLOWCPU_H
#define LKTOPTICALFLOWCPU_H



#import "LKTOpticalFlow.h"

@interface LKTOpticalFlowCPU : LKTOpticalFlow {
    unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> _opticalFlow;
    *__CVBuffer _uv_user_ref;
}




-(BOOL)estimateFlowFromReference:(struct __CVBuffer *)arg0 target:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(BOOL)estimateFlowStream:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)setOutputUV:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 numScales:(int)arg2 ;


@end


#endif