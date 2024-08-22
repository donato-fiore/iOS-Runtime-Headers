// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATUREEXTRACTORSTANDARDASPECTRATIO_H
#define PGFEATUREEXTRACTORSTANDARDASPECTRATIO_H



#import "PGAssetFeatureExtractor.h"

@interface PGFeatureExtractorStandardAspectRatio : PGAssetFeatureExtractor



-(BOOL)_generateError:(*id)arg0 withCode:(NSInteger)arg1 andMessage:(id)arg2 ;
-(NSInteger)featureLength;
-(NSInteger)standardAspectRatioFromFloatVector:(id)arg0 ;
-(float)precisionEpsilon;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)name;


@end


#endif