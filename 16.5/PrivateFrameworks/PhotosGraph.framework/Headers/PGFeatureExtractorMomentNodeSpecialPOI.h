// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREEXTRACTORMOMENTNODESPECIALPOI_H
#define PGFEATUREEXTRACTORMOMENTNODESPECIALPOI_H

@class MAFeatureExtractor;



@interface PGFeatureExtractorMomentNodeSpecialPOI : MAFeatureExtractor



-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)name;


@end


#endif