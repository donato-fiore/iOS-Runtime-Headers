// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHACURARESHADOWEVALUATIONDATASET_H
#define PHACURARESHADOWEVALUATIONDATASET_H


#import <Foundation/Foundation.h>


@interface PHACurareShadowEvaluationDataset : NSObject



+(id)prepareDatasetForEvaluationTaskWithFingerprintVersion:(id)arg0 datasetPolicy:(id)arg1 labelPolicy:(id)arg2 positivesDatasetName:(id)arg3 positivesSubsetName:(id)arg4 negativesDatasetName:(id)arg5 negativesSubsetName:(id)arg6 photoLibrary:(id)arg7 graphManager:(id)arg8 modelInputName:(id)arg9 labelName:(id)arg10 filtersByDatasetName:(id)arg11 coreDuetQuery:(id)arg12 error:(*id)arg13 ;


@end


#endif