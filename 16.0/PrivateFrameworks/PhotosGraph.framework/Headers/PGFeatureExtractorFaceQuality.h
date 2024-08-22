// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATUREEXTRACTORFACEQUALITY_H
#define PGFEATUREEXTRACTORFACEQUALITY_H



#import "PGFaceFeatureExtractor.h"

@interface PGFeatureExtractorFaceQuality : PGFaceFeatureExtractor



-(NSInteger)featureLength;
-(id)defaultFloatVectorWithError:(*id)arg0 ;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)name;


@end


#endif