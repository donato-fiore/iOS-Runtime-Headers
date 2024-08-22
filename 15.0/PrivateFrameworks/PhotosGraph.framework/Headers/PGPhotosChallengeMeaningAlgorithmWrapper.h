// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPHOTOSCHALLENGEMEANINGALGORITHMWRAPPER_H
#define PGPHOTOSCHALLENGEMEANINGALGORITHMWRAPPER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGPhotosChallengeMeaningAlgorithmWrapper : NSObject

@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)debugInformationForMeaningIdentifier:(id)arg0 assetUUID:(id)arg1 ;
-(id)initWithEvaluationContext:(id)arg0 ;
-(unsigned short)predictQuestionStateForMeaningIdentifier:(id)arg0 assetUUID:(id)arg1 ;


@end


#endif