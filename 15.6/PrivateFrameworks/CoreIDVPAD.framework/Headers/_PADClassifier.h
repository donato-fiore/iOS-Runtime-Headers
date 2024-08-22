// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PADCLASSIFIER_H
#define _PADCLASSIFIER_H

@class NSMutableArray, NSString;
@protocol PADClassifier, PADModelLoader, PADAlgorithms, PADFaceActionSequenceClassifier, PADTrajectoryAnalyzer, PADPrintReplayDetector, PADSelfieAnalyzer;

#import <Foundation/Foundation.h>


@interface _PADClassifier : NSObject <PADClassifier>

 {
    id<PADModelLoader> *_models;
    id<PADAlgorithms> *_algorithms;
    id<PADFaceActionSequenceClassifier> *_facModule;
    id<PADTrajectoryAnalyzer> *_taModule;
    id<PADPrintReplayDetector> *_prdModule;
    id<PADSelfieAnalyzer> *_selfieModule;
    BOOL _isFACProcessing;
    NSMutableArray *_facFramesToProcess;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_prepareResultWithLabel:(NSInteger)arg0 ;
-(id)init;
-(void)_addNotificationCenterObservers;
-(void)_facDidFinishProcessing;
-(void)_performSpoofClassificationWithCompletion:(id)arg0 ;
-(void)_refreshQueuedFACFrames;
-(void)_sendFrameProcessingCompleteNotification;
-(void)_startProcessingNextFACFrameIfAvailable;
-(void)cancelWithCompletion:(id)arg0 ;
-(void)finishLivenessWithSelfie:(id)arg0 completion:(id)arg1 ;
-(void)finishLivenessWithSelfie:(id)arg0 idMatchingFaceprints:(id)arg1 completion:(id)arg2 ;
-(void)pauseLiveness;
-(void)prepareToResumeLiveness;
-(void)processLivenessFrame:(id)arg0 withOptions:(struct PADClassifierFrameOptions )arg1 taOptions:(NSInteger)arg2 ;
-(void)processRecordedLivenessFrame:(id)arg0 withPRD:(BOOL)arg1 FAC:(BOOL)arg2 ;
-(void)restartLivenessGesture;
-(void)resumeLiveness;
-(void)skipLivenessGesture:(BOOL)arg0 ;
-(void)skipRecordedLivenessGesture;
// -(void)startLiveness:(id)arg0 onGestureStart:(id)arg1 onIncorrectGestureDetected:(unk)arg2 onGesturesFinished:(id)arg3  ;
// -(void)startLivenessVideoProcessing:(id)arg0 onGestureStart:(id)arg1 onGesturesFinished:(unk)arg2  ;


@end


#endif