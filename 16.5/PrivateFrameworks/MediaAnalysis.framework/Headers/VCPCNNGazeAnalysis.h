// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNGAZEANALYSIS_H
#define VCPCNNGAZEANALYSIS_H


#import <Foundation/Foundation.h>

#import "VCPCNNModelEspresso.h"

@interface VCPCNNGazeAnalysis : NSObject {
    *float _inputData;
    VCPCNNModelEspresso *_modelEspresso;
}




+(id)sharedModel:(id)arg0 ;
-(id)init;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 faceBounds:(struct CGRect )arg4 ;
-(int)detectEyeOpennessForFace:(struct CGRect )arg0 inBuffer:(struct __CVBuffer *)arg1 eyeOpenness:(*BOOL)arg2 ;
-(void)dealloc;


@end


#endif