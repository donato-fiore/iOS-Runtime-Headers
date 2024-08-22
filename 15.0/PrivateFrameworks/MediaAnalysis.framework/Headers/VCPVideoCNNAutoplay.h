// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPVIDEOCNNAUTOPLAY_H
#define VCPVIDEOCNNAUTOPLAY_H

@class NSMutableDictionary, NSArray;


#import "VCPVideoCNNTask.h"
#import "VCPCNNModelEspresso.h"

@interface VCPVideoCNNAutoplay : VCPVideoCNNTask {
    NSMutableDictionary *_summaryResults;
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    vector<float *, std::allocator<float *>> _inputsData;
    *float _analysisInput;
    BOOL _skip;
}




-(id)init;
-(id)results;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)loadAnalysisResults:(id)arg0 audioResults:(id)arg1 ;
-(int)run:(id)arg0 ;
-(void)dealloc;


@end


#endif