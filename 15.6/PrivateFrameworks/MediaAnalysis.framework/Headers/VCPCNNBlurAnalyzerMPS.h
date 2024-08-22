// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNBLURANALYZERMPS_H
#define VCPCNNBLURANALYZERMPS_H

@class NSURL;


#import "VCPCNNBlurAnalyzer.h"
#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPCNNBlurAnalyzerMPS : VCPCNNBlurAnalyzer {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}




-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(id)init;
-(int)computeSharpnessScore:(*float)arg0 textureness:(char *)arg1 contrast:(float)arg2 imgWidth:(int)arg3 cancel:(id)arg4 ;
-(int)prepareModelForSourceWidth:(int)arg0 andSourceHeight:(int)arg1 ;


@end


#endif