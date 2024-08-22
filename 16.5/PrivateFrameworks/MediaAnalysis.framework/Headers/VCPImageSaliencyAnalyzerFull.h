// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPIMAGESALIENCYANALYZERFULL_H
#define VCPIMAGESALIENCYANALYZERFULL_H

@class NSURL;


#import "VCPImageSaliencyAnalyzer.h"
#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPImageSaliencyAnalyzerFull : VCPImageSaliencyAnalyzer {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}




-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(int)getSalientRegions:(id)arg0 ;
-(int)prepareModelForSourceWidth:(int)arg0 andSourceHeight:(int)arg1 ;


@end


#endif