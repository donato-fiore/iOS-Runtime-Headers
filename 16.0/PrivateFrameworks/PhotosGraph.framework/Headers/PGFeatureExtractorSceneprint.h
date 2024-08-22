// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATUREEXTRACTORSCENEPRINT_H
#define PGFEATUREEXTRACTORSCENEPRINT_H



#import "PGAssetFeatureExtractor.h"

@interface PGFeatureExtractorSceneprint : PGAssetFeatureExtractor



-(BOOL)_generateError:(*id)arg0 code:(NSInteger)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
-(NSInteger)featureLength;
-(id)featureNames;
-(id)featureValuesForAssets:(id)arg0 error:(*id)arg1 ;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)name;


@end


#endif