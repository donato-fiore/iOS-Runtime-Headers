// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATUREEXTRACTORFACEAGETYPE_H
#define PGFEATUREEXTRACTORFACEAGETYPE_H



#import "PGFaceFeatureExtractor.h"

@interface PGFeatureExtractorFaceAgeType : PGFaceFeatureExtractor



-(NSInteger)featureLength;
-(id)_floatVectorForFaceAgeType:(unsigned short)arg0 ;
-(id)defaultFloatVectorWithError:(*id)arg0 ;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)name;


@end


#endif