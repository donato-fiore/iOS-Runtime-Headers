// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATUREEXTRACTORSCENEPRINT_H
#define PGFEATUREEXTRACTORSCENEPRINT_H



#import "PGAssetFeatureExtractor.h"

@interface PGFeatureExtractorSceneprint : PGAssetFeatureExtractor



-(NSInteger)featureLength;
-(id)_floatArrayFromSceneprint:(id)arg0 ;
-(id)featureNames;
-(id)featureValuesForAssets:(id)arg0 error:(*id)arg1 ;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)name;


@end


#endif