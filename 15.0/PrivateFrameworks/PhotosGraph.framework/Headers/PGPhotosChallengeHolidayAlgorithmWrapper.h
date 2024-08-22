// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPHOTOSCHALLENGEHOLIDAYALGORITHMWRAPPER_H
#define PGPHOTOSCHALLENGEHOLIDAYALGORITHMWRAPPER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGPhotosChallengeHolidayAlgorithmWrapper : NSObject

@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)debugInformationForHolidayName:(id)arg0 assetUUID:(id)arg1 ;
-(id)initWithEvaluationContext:(id)arg0 ;
-(unsigned short)predictedQuestionStateForAssetUUID:(id)arg0 holidayName:(id)arg1 ;


@end


#endif