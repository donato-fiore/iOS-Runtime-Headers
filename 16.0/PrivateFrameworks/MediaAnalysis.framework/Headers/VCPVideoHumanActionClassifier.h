// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOHUMANACTIONCLASSIFIER_H
#define VCPVIDEOHUMANACTIONCLASSIFIER_H

@class NSString, NSMutableArray;


#import "VCPVideoAnalyzer.h"
#import "VCPCNNModelEspresso.h"
#import "VCPHumanPoseImageRequest.h"

@interface VCPVideoHumanActionClassifier : VCPVideoAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    *float _inputData;
    NSString *_resConfig;
    int _inputWidth;
    int _inputHeight;
    int _inputChannels;
    int _inputSize;
    NSString *_action;
    float _confidence;
    VCPHumanPoseImageRequest *_poseRequest;
    NSMutableArray *_bodyArray;
    BOOL _valid;
    NSMutableArray *_results;
    NSMutableArray *_keyPersonResults;
}




-(id)analyzeBodyArray:(id)arg0 ;
-(id)init;
-(id)keypointsFromObservations:(id)arg0 ;
-(id)privateResults;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)createModel;
-(int)detect;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)prepareData:(id)arg0 ;
-(void)dealloc;


@end


#endif