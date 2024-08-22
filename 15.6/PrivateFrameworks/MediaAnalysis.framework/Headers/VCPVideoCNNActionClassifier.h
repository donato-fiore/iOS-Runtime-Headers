// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOCNNACTIONCLASSIFIER_H
#define VCPVIDEOCNNACTIONCLASSIFIER_H

@class NSMutableDictionary, NSMutableArray, NSArray;


#import "VCPVideoCNNTask.h"
#import "VCPCNNModelEspresso.h"

@interface VCPVideoCNNActionClassifier : VCPVideoCNNTask {
    NSMutableDictionary *_actions;
    NSMutableArray *_results;
    NSArray *_taxonomy;
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    vector<float *, std::allocator<float *>> _inputsData;
    NSMutableArray *_phFaces;
}




+(id)sharedModel:(id)arg0 inputNames:(id)arg1 properties:(id)arg2 ;
-(id)initWithPHFaces:(id)arg0 ;
-(id)results;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)run:(id)arg0 withPersons:(id)arg1 andRegionCrop:(struct CGRect )arg2 atTime:(struct ? )arg3 andDuration:(struct ? )arg4 ;


@end


#endif