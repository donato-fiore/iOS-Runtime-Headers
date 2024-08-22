// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEEPFUSIONPROCESSORINPUT_H
#define BWDEEPFUSIONPROCESSORINPUT_H

@class NSDictionary, NSArray;
@protocol BWDeepFusionProcessorInputDelegate;


#import "BWStillImageProcessorInput.h"

@interface BWDeepFusionProcessorInput : BWStillImageProcessorInput {
    NSDictionary *_evZeroReferenceFrameAttachments;
    ? _evZeroReferenceFramePTS;
    *void _skinMask;
    *void _skyMask;
    *void _lowResPersonMask;
    id *_lowResPersonInstanceMasks;
    id *_lowResPersonInstanceConfidences;
    id *_lowResPersonInstanceBoundingBoxes;
    id *_skinToneClassifications;
    id *_faceObservations;
    *__CVBuffer _personMask;
}


@property (retain, nonatomic) NSObject<BWDeepFusionProcessorInputDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *evZeroReferenceFrameAttachments;
@property (nonatomic) ? evZeroReferenceFramePTS;
@property (readonly, nonatomic) NSArray *faceObservations;
@property (readonly, nonatomic) *__CVBuffer gainMap; // ivar: _gainMap
@property (retain, nonatomic) NSDictionary *inferenceAttachedMediaMetadata; // ivar: _inferenceAttachedMediaMetadata
@property (readonly, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceConfidences;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceMasks;
@property (readonly, nonatomic) *__CVBuffer lowResPersonMask;
@property (readonly, nonatomic) *__CVBuffer personMask;
@property (retain, nonatomic) NSArray *providedInferenceAttachedMedia; // ivar: _providedInferenceAttachedMedia
@property (readonly, nonatomic) *__CVBuffer skinMask;
@property (readonly, nonatomic) NSArray *skinToneClassifications;
@property (readonly, nonatomic) *__CVBuffer skyMask;
@property (readonly, nonatomic) *__CVBuffer syntheticLong; // ivar: _syntheticLong
@property (readonly, nonatomic) *__CVBuffer syntheticLongFusionMap; // ivar: _syntheticLongFusionMap
@property (readonly, nonatomic) NSDictionary *syntheticLongFusionMapMetadata; // ivar: _syntheticLongFusionMapMetadata
@property (readonly, nonatomic) NSDictionary *syntheticLongMetadata; // ivar: _syntheticLongMetadata
@property (readonly, nonatomic) *__CVBuffer syntheticRealLongFusionMap; // ivar: _syntheticRealLongFusionMap
@property (readonly, nonatomic) NSDictionary *syntheticRealLongFusionMapMetadata; // ivar: _syntheticRealLongFusionMapMetadata
@property (readonly, nonatomic) *__CVBuffer syntheticReference; // ivar: _syntheticReference
@property (readonly, nonatomic) *__CVBuffer syntheticReferenceFusionMap; // ivar: _syntheticReferenceFusionMap
@property (readonly, nonatomic) NSDictionary *syntheticReferenceFusionMapMetadata; // ivar: _syntheticReferenceFusionMapMetadata
@property (readonly, nonatomic) NSDictionary *syntheticReferenceMetadata; // ivar: _syntheticReferenceMetadata


-(BOOL)receivedAllInferences;
-(id)description;
-(void)addBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 type:(NSUInteger)arg2 ;
-(void)addPersonMask:(struct __CVBuffer *)arg0 ;
-(void)addSkinMask:(*void)arg0 skyMask:(*void)arg1 lowResPersonMask:(*void)arg2 lowResPersonInstanceMasks:(id)arg3 lowResPersonInstanceConfidences:(id)arg4 lowResPersonInstanceBoundingBoxes:(id)arg5 skinToneClassifications:(id)arg6 faceObservations:(id)arg7 ;
-(void)dealloc;


@end


#endif