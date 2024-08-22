// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHADATASETBUILDER_H
#define PHADATASETBUILDER_H

@class NSArray, NSDictionary, PGManager, NSString, NSNumber, PHPhotoLibrary, PGFeatureTransformersForFeatureExtractors;

#import <Foundation/Foundation.h>

#import "PHACoreDuetDatasetStorage.h"

@interface PHADatasetBuilder : NSObject

@property (readonly, nonatomic) NSArray *augmenters; // ivar: _augmenters
@property (retain, nonatomic) PHACoreDuetDatasetStorage *datasetStore; // ivar: _datasetStore
@property (readonly, nonatomic) NSDictionary *filtersByDatasetName; // ivar: _filtersByDatasetName
@property (readonly, nonatomic) NSInteger fingerprintVersion; // ivar: _fingerprintVersion
@property (retain, nonatomic) PGManager *graphManager; // ivar: _graphManager
@property (readonly, nonatomic) NSString *inputName; // ivar: _inputName
@property (readonly, nonatomic) NSString *labelName; // ivar: _labelName
@property (readonly, nonatomic) NSInteger labelPolicy; // ivar: _labelPolicy
@property (retain, nonatomic) NSArray *negativeLocalIdentifiers; // ivar: _negativeLocalIdentifiers
@property (readonly, nonatomic) NSString *negativesDatasetName; // ivar: _negativesDatasetName
@property (readonly, nonatomic) NSString *negativesSubsetName; // ivar: _negativesSubsetName
@property (readonly, nonatomic) NSNumber *oversamplingRate; // ivar: _oversamplingRate
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (retain, nonatomic) NSArray *positiveLocalIdentifiers; // ivar: _positiveLocalIdentifiers
@property (readonly, nonatomic) NSString *positivesDatasetName; // ivar: _positivesDatasetName
@property (readonly, nonatomic) NSString *positivesSubsetName; // ivar: _positivesSubsetName
@property (readonly, nonatomic) NSNumber *totalNumberOfSamples; // ivar: _totalNumberOfSamples
@property (readonly, nonatomic) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors; // ivar: _transformersForFeatureExtractors


+(NSInteger)datasetBuilderPolicyForPolicyName:(id)arg0 ;
+(NSInteger)labelPolicyForLabelPolicyName:(id)arg0 ;
+(id)_randomIndicesWithUpperBound:(NSUInteger)arg0 count:(NSUInteger)arg1 ;
+(id)labelVectorsForLabelPolicy:(NSInteger)arg0 ;
-(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 underlyingError:(id)arg3 ;
-(BOOL)_isFeatureNameForAssetPredicateWithFeatureName:(id)arg0 ;
-(NSInteger)_validatePHObject:(id)arg0 withFeatureValidator:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_minAvailableNumberOfSamples;
-(id)_assetPropertiesPredicateForKeywordFromFeatureExtractorFilters:(id)arg0 ;
-(id)_currentFetchOptionPropertySet;
-(id)_datasetForLocalIdentifiers:(id)arg0 positiveFingerprints:(id)arg1 negativeFingerprints:(id)arg2 error:(*id)arg3 ;
-(id)_fetchObjectsForFingerprintVersion:(NSInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)_fetchObjectsForFingerprintVersion:(NSInteger)arg0 options:(id)arg1 localIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)_filterDataSamples:(id)arg0 filters:(id)arg1 numberOfSamples:(id)arg2 error:(*id)arg3 ;
-(id)_fingerprintsForDatasetName:(id)arg0 localIdentifiers:(id)arg1 labelName:(id)arg2 numberOfSamples:(id)arg3 filters:(id)arg4 error:(*id)arg5 ;
-(id)_fingerprintsForObjects:(id)arg0 fingerprintVersion:(NSInteger)arg1 error:(*id)arg2 ;
-(id)_localIdentifiersForCoreDuetDatasetName:(id)arg0 subsetName:(id)arg1 ;
-(id)_localIdentifiersToExcludeForLabel:(id)arg0 ;
-(id)_mergeLocalIdentifiersFromPositiveLocalIdentifiers:(id)arg0 negativeLocalIdentifiers:(id)arg1 numberOfPositiveSamples:(id)arg2 numberOfNegativeSamples:(id)arg3 error:(*id)arg4 ;
-(id)_numberOfSamplesPerClassWithError:(*id)arg0 ;
-(id)_performAugmentationsOnLabeledSamples:(id)arg0 error:(*id)arg1 ;
-(id)_randomSamplesOfCount:(NSUInteger)arg0 filterPredicateForKeyword:(id)arg1 labelName:(id)arg2 error:(*id)arg3 ;
-(id)_samplesOfCount:(NSUInteger)arg0 fromLocalIdentifiers:(id)arg1 filterPredicateForKeyword:(id)arg2 error:(*id)arg3 ;
-(id)datasetForEvaluationWithError:(*id)arg0 ;
-(id)datasetWithError:(*id)arg0 ;
-(id)initWithFingerprintVersion:(NSInteger)arg0 policy:(NSInteger)arg1 labelPolicy:(NSInteger)arg2 inputName:(id)arg3 labelName:(id)arg4 positivesDatasetName:(id)arg5 positivesSubsetName:(id)arg6 negativesDatasetName:(id)arg7 negativesSubsetName:(id)arg8 totalNumberOfSamples:(id)arg9 oversamplingRate:(id)arg10 photoLibrary:(id)arg11 graphManager:(id)arg12 transformersForFeatureExtractors:(id)arg13 augmenters:(id)arg14 filtersByDatasetName:(id)arg15 ;


@end


#endif