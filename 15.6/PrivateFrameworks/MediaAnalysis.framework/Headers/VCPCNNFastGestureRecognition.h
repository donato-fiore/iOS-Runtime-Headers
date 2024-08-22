// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNFASTGESTURERECOGNITION_H
#define VCPCNNFASTGESTURERECOGNITION_H


#import <Foundation/Foundation.h>

#import "VCPCNNModelEspresso.h"

@interface VCPCNNFastGestureRecognition : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    *float _inputData;
}




+(id)detector;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(id)init;
-(int)createInput:(*float)arg0 keypoints:(id)arg1 ;
-(int)gestureDetection:(id)arg0 score:(*float)arg1 ;
-(int)getDetectionScore:(*float)arg0 ;
-(int)planDestroy;
-(void)dealloc;


@end


#endif