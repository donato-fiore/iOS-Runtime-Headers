// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPFLOWDECODER_H
#define VCPFLOWDECODER_H

@class NSArray, NSString;


#import "VCPEspressoModel.h"

@interface VCPFlowDecoder : VCPEspressoModel {
    NSArray *_inputBlobNames;
    NSString *_outpuBlobName;
}




-(id)initModule:(int)arg0 config:(id)arg1 cancel:(id)arg2 ;
-(int)bindWithBuffers:(struct __CVBuffer *)arg0 correlation:(struct __CVBuffer *)arg1 flow:(struct __CVBuffer *)arg2 outputFlow:(struct __CVBuffer *)arg3 ;
-(int)estimateFlow:(struct __CVBuffer *)arg0 correlation:(struct __CVBuffer *)arg1 flow:(struct __CVBuffer *)arg2 outputFlow:(struct __CVBuffer *)arg3 callback:(id)arg4 ;


@end


#endif