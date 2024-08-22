// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFEATUREEXTRACTORPOTENTIALLANDMARK_H
#define PGFEATUREEXTRACTORPOTENTIALLANDMARK_H



#import "PGAssetFeatureExtractor.h"

@interface PGFeatureExtractorPotentialLandmark : PGAssetFeatureExtractor



-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)name;


@end


#endif