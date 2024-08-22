// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNHANDKEYPOINTSDETECTORESPRESSO_H
#define VCPCNNHANDKEYPOINTSDETECTORESPRESSO_H



#import "VCPCNNHandKeypointsDetector.h"
#import "VCPCNNModelEspresso.h"

@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector {
    *float _inputData;
    BOOL _forceCPU;
    VCPCNNModelEspresso *_modelEspresso;
}




-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 offset:(*float)arg4 ;
-(id)init:(BOOL)arg0 sharedModel:(BOOL)arg1 modelName:(id)arg2 ;
-(int)generateHandKeypoints:(struct CGPoint *)arg0 keypointConfidence:(*float)arg1 offset:(float)arg2 ;
-(void)dealloc;


@end


#endif