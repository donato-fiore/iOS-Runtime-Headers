// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHACURARESHADOWEVALUATIONRUNNER_H
#define PHACURARESHADOWEVALUATIONRUNNER_H

@class NSString, NSDictionary, PGManager, NSArray, PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface PHACurareShadowEvaluationRunner : NSObject

@property (retain, nonatomic) NSString *datasetPolicy; // ivar: _datasetPolicy
@property (retain, nonatomic) NSDictionary *filtersByDatasetName; // ivar: _filtersByDatasetName
@property (retain, nonatomic) NSString *fingerprintVersion; // ivar: _fingerprintVersion
@property (retain, nonatomic) PGManager *graphManager; // ivar: _graphManager
@property (retain, nonatomic) NSString *labelPolicy; // ivar: _labelPolicy
@property (retain, nonatomic) NSString *lossName; // ivar: _lossName
@property (retain, nonatomic) NSArray *modelInfoArray; // ivar: _modelInfoArray
@property (retain, nonatomic) NSString *modelInputName; // ivar: _modelInputName
@property (retain, nonatomic) NSString *modelOutputName; // ivar: _modelOutputName
@property (retain, nonatomic) NSString *negativesDatasetName; // ivar: _negativesDatasetName
@property (retain, nonatomic) NSString *negativesSubsetName; // ivar: _negativesSubsetName
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSString *positivesDatasetName; // ivar: _positivesDatasetName
@property (retain, nonatomic) NSString *positivesSubsetName; // ivar: _positivesSubsetName
@property (retain, nonatomic) NSString *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (retain, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID


+(id)runnerLog;
-(BOOL)runWithError:(*id)arg0 ;
-(id)evaluateModel:(id)arg0 datasetDictionary:(id)arg1 error:(*id)arg2 ;
-(id)getDatasetWithError:(*id)arg0 ;
-(id)initWithModelInfoArray:(id)arg0 modelInputName:(id)arg1 modelOutputName:(id)arg2 lossName:(id)arg3 fingerprintVersion:(id)arg4 datasetPolicy:(id)arg5 labelPolicy:(id)arg6 positivesDatasetName:(id)arg7 positivesSubsetName:(id)arg8 negativesDatasetName:(id)arg9 negativesSubsetName:(id)arg10 photoLibrary:(id)arg11 graphManager:(id)arg12 filtersByDatasetName:(id)arg13 trialDeploymentID:(id)arg14 trialExperimentID:(id)arg15 trialTreatmentID:(id)arg16 ;
-(void)generateCAEventForResults:(id)arg0 ;


@end


#endif