// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGRUNNER_H
#define PHAPRIVATEFEDERATEDLEARNINGRUNNER_H

@class NSArray, NSNumber, NSString, NSDictionary, PGManager, PHPhotoLibrary, PGFeatureTransformersForFeatureExtractors;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningRunner : NSObject

@property (retain, nonatomic) NSArray *attachmentURLs; // ivar: _attachmentURLs
@property (readonly, nonatomic) NSArray *augmenters; // ivar: _augmenters
@property (retain, nonatomic) NSNumber *clippingNorm; // ivar: _clippingNorm
@property (retain, nonatomic) NSString *datasetPolicy; // ivar: _datasetPolicy
@property (readonly, nonatomic) NSDictionary *filtersByDatasetName; // ivar: _filtersByDatasetName
@property (retain, nonatomic) NSString *fingerprintVersion; // ivar: _fingerprintVersion
@property (retain, nonatomic) PGManager *graphManager; // ivar: _graphManager
@property (retain, nonatomic) NSString *iCloudAggServiceKey; // ivar: _iCloudAggServiceKey
@property (retain, nonatomic) NSString *labelPolicy; // ivar: _labelPolicy
@property (retain, nonatomic) NSArray *layersToTrain; // ivar: _layersToTrain
@property (retain, nonatomic) NSNumber *learningRate; // ivar: _learningRate
@property (retain, nonatomic) NSString *lossName; // ivar: _lossName
@property (readonly, nonatomic) NSNumber *minProcessedRate; // ivar: _minProcessedRate
@property (retain, nonatomic) NSString *modelInputName; // ivar: _modelInputName
@property (retain, nonatomic) NSString *modelOutputName; // ivar: _modelOutputName
@property (retain, nonatomic) NSString *negativesDatasetName; // ivar: _negativesDatasetName
@property (retain, nonatomic) NSString *negativesSubsetName; // ivar: _negativesSubsetName
@property (retain, nonatomic) NSNumber *normBinCount; // ivar: _normBinCount
@property (nonatomic) NSUInteger numberOfEpochs; // ivar: _numberOfEpochs
@property (retain, nonatomic) NSString *optimizerName; // ivar: _optimizerName
@property (retain, nonatomic) NSNumber *oversamplingRate; // ivar: _oversamplingRate
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSString *positivesDatasetName; // ivar: _positivesDatasetName
@property (retain, nonatomic) NSString *positivesSubsetName; // ivar: _positivesSubsetName
@property (nonatomic) BOOL shouldAddNoise; // ivar: _shouldAddNoise
@property (nonatomic) BOOL shouldEncrypt; // ivar: _shouldEncrypt
@property (nonatomic) BOOL shouldValidateModel; // ivar: _shouldValidateModel
@property (nonatomic) BOOL skipInternalDeviceCheck; // ivar: _skipInternalDeviceCheck
@property (retain, nonatomic) NSNumber *totalNumberOfSamples; // ivar: _totalNumberOfSamples
@property (retain, nonatomic) NSString *trainingTask; // ivar: _trainingTask
@property (readonly, nonatomic) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors; // ivar: _transformersForFeatureExtractors


+(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(BOOL)_isInternalDevice;
+(id)_firstAttachmentURLWithSuffixOfName:(id)arg0 attachments:(id)arg1 error:(*id)arg2 ;
+(id)_generateEncryptionKeyFromICloudAggServiceKey:(id)arg0 error:(*id)arg1 ;
+(id)_mediaAnalysisProgressForPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(id)_prepareDatasetForTrainingTask:(id)arg0 fingerprintVersion:(id)arg1 datasetPolicy:(id)arg2 labelPolicy:(id)arg3 positivesDatasetName:(id)arg4 positivesSubsetName:(id)arg5 negativesDatasetName:(id)arg6 negativesSubsetName:(id)arg7 totalNumberOfSamples:(id)arg8 oversamplingRate:(id)arg9 photoLibrary:(id)arg10 graphManager:(id)arg11 modelInputName:(id)arg12 labelName:(id)arg13 attachments:(id)arg14 transformersForFeatureExtractors:(id)arg15 augmenters:(id)arg16 filtersByDatasetName:(id)arg17 error:(*id)arg18 ;
-(id)initWithAttachmentURLs:(id)arg0 layersToTrain:(id)arg1 numberOfEpochs:(NSUInteger)arg2 learningRate:(id)arg3 modelInputName:(id)arg4 modelOutputName:(id)arg5 lossName:(id)arg6 optimizerName:(id)arg7 iCloudAggServiceKey:(id)arg8 clippingNorm:(id)arg9 normBinCount:(id)arg10 trainingTask:(id)arg11 fingerprintVersion:(id)arg12 datasetPolicy:(id)arg13 labelPolicy:(id)arg14 positivesDatasetName:(id)arg15 positivesSubsetName:(id)arg16 negativesDatasetName:(id)arg17 negativesSubsetName:(id)arg18 totalNumberOfSamples:(id)arg19 oversamplingRate:(id)arg20 photoLibrary:(id)arg21 graphManager:(id)arg22 shouldAddNoise:(BOOL)arg23 shouldEncrypt:(BOOL)arg24 shouldValidateModel:(BOOL)arg25 skipInternalDeviceCheck:(BOOL)arg26 minProcessedRate:(id)arg27 transformersForFeatureExtractors:(id)arg28 augmenters:(id)arg29 filtersByDatasetName:(id)arg30 ;
-(id)runWithError:(*id)arg0 ;


@end


#endif