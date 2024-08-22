// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PADFACEACTIONSEQUENCECLASSIFIER_H
#define _PADFACEACTIONSEQUENCECLASSIFIER_H

@class NSMutableArray, NSArray, NSMutableDictionary, NSNumber, NSString;
@protocol PADFaceActionSequenceClassifier, PADFaceActionModuleDelegate, PADFaceActionClassifier, PADAlgorithms;

#import <Foundation/Foundation.h>

#import "PADModelLoader.h"

@interface _PADFaceActionSequenceClassifier : NSObject <PADFaceActionSequenceClassifier, PADFaceActionModuleDelegate>

 {
    NSUInteger _currentGestureIdx;
    NSUInteger _minRequiredGestures;
    NSUInteger _detectedGestures;
    NSMutableArray *_gestureTypesToSkip;
    NSArray *_gestureTypes;
    id<PADFaceActionClassifier> *_monitor;
    id<PADAlgorithms> *_algorithms;
    PADModelLoader *_models;
    id *_onGesturesFinished;
    id *_onGestureStart;
    id *_onIncorrectGestureDetected;
    BOOL _processSingleBuffer;
    BOOL _accessibilityOptionsEnabled;
    NSUInteger _consecutiveBuffersNotDetected;
    BOOL _wasGestureSkippedWithAccessibility;
    BOOL _wasSequenceSkippedWithAccessibility;
    NSMutableDictionary *_scoresByGesture;
    NSUInteger _currentGestureBufferCount;
}


@property (readonly, nonatomic) NSNumber *assessment;
@property (retain, nonatomic) NSMutableArray *assessmentsFAC; // ivar: _assessmentsFAC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *faceprintsID; // ivar: _faceprintsID
@property (retain, nonatomic) NSMutableArray *gestureSequence; // ivar: _gestureSequence
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *timestampsFAC; // ivar: _timestampsFAC
@property (retain, nonatomic) NSMutableArray *timestampsID; // ivar: _timestampsID


-(BOOL)_shouldSkipAttentionAwareGestureAtIndex:(NSInteger)arg0 ;
-(BOOL)_shouldSkipGestureAtIndex:(NSInteger)arg0 ;
-(NSInteger)_detectedGestures;
-(id)init:(id)arg0 models:(id)arg1 ;
-(void)_createNewFACClassiferForGesture:(NSInteger)arg0 ;
-(void)_handleGestureMonitorResult:(id)arg0 ;
-(void)_startNextGesture;
-(void)enableAccessibilityOptions;
-(void)faceActionModuleDidFinishGestureDetectionWithAssessment:(id)arg0 ;
-(void)processFrame:(id)arg0 ;
-(void)restartGesture;
-(void)setFACOption:(NSInteger)arg0 ;
-(void)skipGesture;
-(void)skipRecordedGesture;
// -(void)startLivenessCheck:(id)arg0 gestureTypes:(id)arg1 minNumberOfGestures:(NSUInteger)arg2 processSingleBuffer:(BOOL)arg3 onGestureStart:(id)arg4 onIncorrectGestureDetected:(unk)arg5 onGesturesFinished:(id)arg6  ;
-(void)waitForCurrentFrameProcessingWithCompletion:(id)arg0 ;


@end


#endif