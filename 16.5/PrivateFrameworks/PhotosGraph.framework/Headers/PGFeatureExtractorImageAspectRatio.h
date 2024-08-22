// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREEXTRACTORIMAGEASPECTRATIO_H
#define PGFEATUREEXTRACTORIMAGEASPECTRATIO_H



#import "PGAssetFeatureExtractor.h"

@interface PGFeatureExtractorImageAspectRatio : PGAssetFeatureExtractor



-(BOOL)_generateError:(*id)arg0 withCode:(NSInteger)arg1 andMessage:(id)arg2 ;
-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)name;


@end


#endif