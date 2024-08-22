// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATUREEXTRACTORFACEEYESSTATE_H
#define PGFEATUREEXTRACTORFACEEYESSTATE_H



#import "PGFaceFeatureExtractor.h"

@interface PGFeatureExtractorFaceEyesState : PGFaceFeatureExtractor



-(NSInteger)featureLength;
-(id)_floatVectorForFaceEyesState:(unsigned short)arg0 ;
-(id)defaultFloatVectorWithError:(*id)arg0 ;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)name;


@end


#endif