// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKVIDEOTEXTRECOGNIZER_H
#define VKVIDEOTEXTRECOGNIZER_H

@class NSArray, VNTrackHomographyRequest;
@protocol OS_dispatch_queue, VKVideoTextRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface VKVideoTextRecognizer : NSObject {
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    NSObject<OS_dispatch_queue> *_homographyQueue;
    NSUInteger q_dataType;
    BOOL q_singleItemOnly;
    NSUInteger q_blockType;
    CGSize _dimensions;
    BOOL q_delegateWantsStability;
    BOOL q_paused;
    BOOL q_resetRequested;
    BOOL q_hasOutstandingRecognitionRequest;
    BOOL q_hasOutstandingHomographyRequest;
    BOOL q_usesAlternateLineGrouping;
    NSUInteger q_stabilityState;
    CGRect q_regionOfInterest;
    CGPoint q_comparisonPoint;
    NSArray *q_recognitionLanguages;
    CGFloat q_lastRecognition;
    CGFloat q_stabilityChangedStartMarker;
    CGFloat q_stabilityInitializationStartMarker;
    CGFloat q_stabilityInitializationThreshold;
    CGFloat q_stabilityGainedThreshold;
    CGFloat q_stabilityLostThreshold;
    CGFloat q_recognitionInterval;
    CGFloat q_defaultRecognitionInterval;
    CGFloat q_infrequentRecognitionInterval;
    VNTrackHomographyRequest *q_homographyRequest;
    ? q_warpTransformSinceLastRecognition;
}


@property (nonatomic) BOOL allowsFallbackWhenUsingDataTypes; // ivar: _allowsFallbackWhenUsingDataTypes
@property (nonatomic) CGPoint comparisonPoint; // ivar: _comparisonPoint
@property (nonatomic) CGFloat defaultRecognitionInterval; // ivar: _defaultRecognitionInterval
@property (weak, nonatomic) NSObject<VKVideoTextRecognizerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat infrequentRecognitionInterval; // ivar: _infrequentRecognitionInterval
@property (readonly, nonatomic) BOOL paused; // ivar: _paused
@property (copy, nonatomic) NSArray *recognitionLanguages; // ivar: _recognitionLanguages
@property (readonly, nonatomic) NSArray *recognizedItems; // ivar: _recognizedItems
@property (nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (nonatomic) CGFloat stabilityGainedThreshold; // ivar: _stabilityGainedThreshold
@property (nonatomic) CGFloat stabilityInitializationThreshold; // ivar: _stabilityInitializationThreshold
@property (nonatomic) CGFloat stabilityLostThreshold; // ivar: _stabilityLostThreshold
@property (readonly, nonatomic) NSUInteger stabilityState; // ivar: _stabilityState
@property (nonatomic) BOOL usesAlternateLineGrouping; // ivar: _usesAlternateLineGrouping


-(id)clockwiseLayerPointsFromObservation:(id)arg0 ;
-(id)initUsingSingleItemRecognition:(BOOL)arg0 singleLine:(BOOL)arg1 dataType:(NSUInteger)arg2 ;
-(id)initWithVideoOrientation:(NSInteger)arg0 dimensions:(struct CGSize )arg1 ;
-(id)layerQuadFromObservation:(id)arg0 ;
-(id)lineGeometriesFromTextBlock:(id)arg0 ;
-(void)delegateVideoTextRecognizer:(id)arg0 added:(id)arg1 updated:(id)arg2 removed:(id)arg3 bufferTimestamp:(struct ? )arg4 ;
-(void)pauseWithCompletion:(id)arg0 ;
-(void)q_performReset;
-(void)q_recognizeTextFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 bufferTimestamp:(struct ? )arg1 orientation:(unsigned int)arg2 ;
-(void)q_trackTextFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 bufferTimestamp:(struct ? )arg1 orientation:(unsigned int)arg2 ;
-(void)q_updateFromHomographyResult:(struct ? )arg0 bufferTimestamp:(struct ? )arg1 ;
-(void)q_updateStabilityFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)q_updateStabilityState:(NSUInteger)arg0 ;
-(void)reset;
-(void)resumeWithCompletion:(id)arg0 ;
-(void)updateFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)updateFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 orientation:(unsigned int)arg1 ;
-(void)updateItemsFromRecognitionResults:(id)arg0 blockType:(NSUInteger)arg1 transform:(struct ? )arg2 bufferTimestamp:(struct ? )arg3 ;
-(void)updateItemsTransform;
-(void)updateSingleItemFromRecognitionResults:(id)arg0 blockType:(NSUInteger)arg1 transform:(struct ? )arg2 bufferTimestamp:(struct ? )arg3 ;
-(void)updateSingleItemFromRecognitionResults:(id)arg0 dataType:(NSUInteger)arg1 blockType:(NSUInteger)arg2 transform:(struct ? )arg3 bufferTimestamp:(struct ? )arg4 ;
-(void)updateSingleItemFromTextBlockObservation:(id)arg0 transform:(struct ? )arg1 bufferTimestamp:(struct ? )arg2 ;


@end


#endif