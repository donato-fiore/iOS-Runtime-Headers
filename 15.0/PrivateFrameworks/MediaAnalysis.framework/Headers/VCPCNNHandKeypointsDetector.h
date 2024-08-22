// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNHANDKEYPOINTSDETECTOR_H
#define VCPCNNHANDKEYPOINTSDETECTOR_H


#import <Foundation/Foundation.h>


@interface VCPCNNHandKeypointsDetector : NSObject {
    float _std;
    float _mean;
}




+(id)detector:(BOOL)arg0 sharedModel:(BOOL)arg1 modelName:(id)arg2 ;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 offset:(*float)arg4 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 box:(id)arg4 ;
-(int)cvtHeatmaps2Keypoints:(*float)arg0 outHeight:(int)arg1 outWidth:(int)arg2 inHeight:(int)arg3 inWidth:(int)arg4 outChannel:(int)arg5 keypoints:(struct CGPoint *)arg6 keypointConfidence:(*float)arg7 offset:(float)arg8 ;
-(int)generateHandKeypoints:(struct CGPoint *)arg0 keypointConfidence:(*float)arg1 offset:(float)arg2 ;
-(int)handKeypointsDetection:(struct __CVBuffer *)arg0 box:(id)arg1 keypoints:(struct CGPoint )arg2 keypointConfidence:(float)arg3 forGFT:(BOOL)arg4 ;


@end


#endif