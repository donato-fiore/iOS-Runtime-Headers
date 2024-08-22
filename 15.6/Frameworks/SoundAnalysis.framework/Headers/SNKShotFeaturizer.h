// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNKSHOTFEATURIZER_H
#define SNKSHOTFEATURIZER_H


#import <Foundation/Foundation.h>


@interface SNKShotFeaturizer : NSObject



// +(BOOL)applyHallucinator:(id)arg0 foregroundAudio:(id)arg1 backgroundAudio:(id)arg2 repetitionCounter:(id)arg3 datasetIdentifier:(id)arg4 shiftAmount:(id)arg5 originalSegmentLength:(id)arg6 state:(id)arg7 handler:(id)arg8 error:(unk)arg9  ;
// +(BOOL)collectEmbeddingsAtOneTimeShift:(struct ? )arg0 forSegment:(id)arg1 numHallucinatedExamples:(NSUInteger)arg2 exemplarDuration:(struct ? )arg3 hallucinator:(id)arg4 negativeEmbeddingArray:(id)arg5 resultHandler:(id)arg6 randomNumberGenerator:(unk)arg7 error:(id)arg8  ;
// +(BOOL)emitTimeShiftsForManySegments:(id)arg0 shiftWindow:(struct ? )arg1 randomNumberGenerator:(id)arg2 numTimeShiftsPerSegment:(unk)arg3 datasetIdentifier:(NSUInteger)arg4 foregroundAudioLength:(id)arg5 handler:(struct ? )arg6 error:(id)arg7  ;
// +(BOOL)emitTimeShiftsForSegment:(id)arg0 shiftWindow:(struct ? )arg1 randomNumberGenerator:(id)arg2 count:(unk)arg3 datasetIdentifier:(NSUInteger)arg4 foregroundAudioLength:(id)arg5 handler:(struct ? )arg6 error:(id)arg7  ;
+(BOOL)ensureIsValidHallucinatorV1Model:(id)arg0 error:(*id)arg1 ;
+(BOOL)ensureIsValidHallucinatorV3Model:(id)arg0 error:(*id)arg1 ;
// +(BOOL)findBackgroundRegionsSurroundingForegroundSegment:(id)arg0 handler:(id)arg1 error:(unk)arg2  ;
// +(BOOL)findBackgroundRegionsSurroundingForegroundSegments:(id)arg0 handler:(id)arg1 error:(unk)arg2  ;
// +(BOOL)hallucinateOneTimeShiftedSegment:(id)arg0 hallucinator:(id)arg1 hallucinatorStateFetcher:(id)arg2 backgroundAudio:(unk)arg3 datasetIdentifier:(id)arg4 shiftAmount:(id)arg5 originalSegmentLength:(id)arg6 numRepetitionsPerTimeShift:(id)arg7 handler:(NSUInteger)arg8 error:(id)arg9  ;
// +(BOOL)selectBackgroundNoiseRegionsSurroundingSegment:(id)arg0 eligibleTimeSpanPrecedingSegment:(struct ? )arg1 eligibleTimeSpanFollowingSegment:(struct ? )arg2 handler:(id)arg3 error:(unk)arg4  ;
// +(BOOL)unpackageHallucinatorOutputs:(id)arg0 handler:(id)arg1 error:(unk)arg2  ;
+(id)clipSegmentToFileBoundaries:(id)arg0 error:(*id)arg1 ;
+(id)collectFeaturePrintsOfType:(NSInteger)arg0 fromSegment:(id)arg1 withWindowDuration:(id)arg2 withOverlapFactor:(id)arg3 error:(*id)arg4 ;
+(id)collectResultsForRequest:(id)arg0 fromSegment:(id)arg1 error:(*id)arg2 ;
+(id)defaultRandomNumberGenerator:(SEL)arg0 ;
+(id)ensureMinimumDuration:(struct ? )arg0 forSegment:(id)arg1 error:(*id)arg2 ;
+(id)extractBackgroundNoiseMatchingLength:(struct ? )arg0 fromSegments:(id)arg1 error:(*id)arg2 ;
+(id)featurizeFiles:(id)arg0 hallucinatorModelURL:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
// +(id)featurizeFiles:(id)arg0 randomNumberGenerator:(id)arg1 hallucinatorModelURL:(unk)arg2 cancellable:(id)arg3 error:(id)arg4  ;
// +(id)featurizeFiles:(id)arg0 randomNumberGenerator:(id)arg1 hallucinatorModelURL:(unk)arg2 error:(id)arg3  ;
// +(id)generateDatasetFrom:(id)arg0 numTimeShifts:(int)arg1 extendeExemplartLength:(int)arg2 secondsAugmentAroundSegment:(int)arg3 sampleRate:(int)arg4 hallucinator:(id)arg5 numHallucinatedExamples:(int)arg6 datasetIdentifier:(id)arg7 randomNumberGenerator:(id)arg8 cancellable:(unk)arg9 error:(id)arg10  ;
// +(id)generateDatasetUsingNewHallucinator:(id)arg0 segments:(id)arg1 exemplarLength:(struct ? )arg2 datasetIdentifier:(id)arg3 randomNumberGenerator:(id)arg4 error:(unk)arg5  ;
+(id)generateHallucinateFunctionWithHallucinator:(SEL)arg0 backgroundAudio:(id)arg1 numRepetitionsPerTimeShift:(id)arg2 handler:(NSUInteger)arg3 error:(id)arg4 ;
// +(id)generateNegativeEmbeddingFromPositiveSoundPrintEmbedding:(id)arg0 usingNegativeSoundPrintEmbeddingArray:(id)arg1 randomNumberGenerator:(id)arg2 error:(unk)arg3  ;
+(id)getFirstFeaturePrintOfType:(NSInteger)arg0 fromSegment:(id)arg1 withWindowDuration:(id)arg2 withOverlapFactor:(id)arg3 error:(*id)arg4 ;
+(id)hallucinateNewEmbeddingSimilarToSoundPrintEmbedding:(id)arg0 withHallucinator:(id)arg1 withHallucinationTokenGroup:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)packageHallucinatorInputFeaturesForegroundAudio:(id)arg0 backgroundAudio:(id)arg1 repetitionCounter:(id)arg2 datasetIdentifier:(id)arg3 shiftAmount:(id)arg4 originalSegmentLength:(id)arg5 state:(id)arg6 error:(*id)arg7 ;
+(id)performSegmentationRequest:(id)arg0 error:(*id)arg1 ;
+(id)pseudoRandomNumberGeneratorWithSeed:(SEL)arg0 ;
+(id)readNumRepetitionsPerTimeShiftFromHallucinator:(id)arg0 error:(*id)arg1 ;
+(id)readNumTimeShiftsPerSegmentFromHallucinator:(id)arg0 error:(*id)arg1 ;
+(id)resampleOneSegment:(id)arg0 toSampleRate:(int)arg1 ;
+(id)resampleSegments:(id)arg0 toSampleRate:(int)arg1 ;
+(id)resizeOneSegment:(id)arg0 toDuration:(struct ? )arg1 ;
+(id)resizeSegment:(id)arg0 toDuration:(struct ? )arg1 error:(*id)arg2 ;
+(id)resizeSegments:(id)arg0 toDuration:(struct ? )arg1 ;
+(id)shiftSegment:(id)arg0 byAmount:(struct ? )arg1 error:(*id)arg2 ;
+(int)recognizeHallucinatorModel:(id)arg0 error:(*id)arg1 ;
+(struct ? )generateRandomTimeInRange:(struct ? )arg0 randomNumberGenerator:(id)arg1 ;
+(struct ? )generateRandomTimeOffsetInRange:(struct ? )arg0 randomNumberGenerator:(id)arg1 ;
+(struct ? )randomlyShiftTimeRange:(struct ? )arg0 byAmountWithinWindow:(struct ? )arg1 randomNumberGenerator:(id)arg2 ;


@end


#endif