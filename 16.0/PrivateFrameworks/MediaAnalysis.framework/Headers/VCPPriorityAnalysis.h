// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPRIORITYANALYSIS_H
#define VCPPRIORITYANALYSIS_H

@class NSArray, NSDate, NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPCNNHandsDetector.h"
#import "VCPCNNHandKeypointsDetector.h"
#import "VCPCNNFastGestureRecognition.h"

@interface VCPPriorityAnalysis : NSObject {
    float _prevComputedScore;
    int _rotationAngle;
    int _inputHeight;
    int _inputWidth;
    int _frameCounter;
    int _dominantHand;
    vector<int, std::allocator<int>> _handChiralityCounter;
    BOOL _handDetectedInPreviousFrame;
    *Rotator _rotator;
    VCPCNNHandsDetector *_handsDetector;
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;
    VCPCNNFastGestureRecognition *_fastGestureDetector;
    NSArray *_prevFrameHandKeypoint;
    NSDate *_prevTimeStampHandDetected;
    NSDate *_prevTimeSignLanguageDetected;
    NSDate *_frameEndTimeStamp;
    NSDate *_frameStartTimeStamp;
    NSMutableArray *_classIndexTracker;
    NSMutableArray *_handKeypointTracker;
    NSMutableArray *_leftHandKeypointTracker;
    NSMutableArray *_rightHandKeypointTracker;
    CGFloat _singleFrameExecutionTime;
    Scaler _scaler;
    CGPoint _prevHandCenter;
}




+(id)priorityAnalysis;
-(id)init;
-(int)addKeypointsToNSArray:(struct CGPoint *)arg0 keypointConfidence:(float)arg1 handBox:(id)arg2 keypointsArray:(id)arg3 ;
-(int)calculatePriorityScore:(*float)arg0 ofPixelBuffer:(struct __CVBuffer *)arg1 withMetadata:(id)arg2 ;
-(int)fastSignLanguageDetection:(*float)arg0 ofPixelBuffer:(struct __CVBuffer *)arg1 withMetadata:(id)arg2 ;
-(void)dealloc;


@end


#endif