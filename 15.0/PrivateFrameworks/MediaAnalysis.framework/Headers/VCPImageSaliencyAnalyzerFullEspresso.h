// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIMAGESALIENCYANALYZERFULLESPRESSO_H
#define VCPIMAGESALIENCYANALYZERFULLESPRESSO_H

@class NSString;


#import "VCPImageSaliencyAnalyzer.h"
#import "VCPCNNModelEspresso.h"

@interface VCPImageSaliencyAnalyzerFullEspresso : VCPImageSaliencyAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    *float _inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}




+(id)sharedModel:(id)arg0 ;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(int)getSalientRegions:(id)arg0 ;
-(int)prepareModelForSourceWidth:(int)arg0 andSourceHeight:(int)arg1 ;
-(void)dealloc;


@end


#endif