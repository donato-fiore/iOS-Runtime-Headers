// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAFLATTENFEATUREEXTRACTOR_H
#define MAFLATTENFEATUREEXTRACTOR_H

@class NSString, NSArray;


#import "MAFeatureExtractor.h"

@interface MAFlattenFeatureExtractor : MAFeatureExtractor {
    NSString *_name;
    NSArray *_featureNames;
}


@property (readonly, nonatomic) NSArray *featureExtractors; // ivar: _featureExtractors


-(id)defaultFloatVectorWithError:(*id)arg0 ;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)initWithName:(id)arg0 featureExtractors:(id)arg1 ;
-(id)name;


@end


#endif