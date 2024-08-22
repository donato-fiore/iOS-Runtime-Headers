// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFEATUREEXTRACTORFACESMILETYPE_H
#define PGFEATUREEXTRACTORFACESMILETYPE_H



#import "PGFaceFeatureExtractor.h"

@interface PGFeatureExtractorFaceSmileType : PGFaceFeatureExtractor



-(NSInteger)featureLength;
-(id)_floatVectorForFaceSmileType:(unsigned short)arg0 ;
-(id)defaultFloatVectorWithError:(*id)arg0 ;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)name;


@end


#endif