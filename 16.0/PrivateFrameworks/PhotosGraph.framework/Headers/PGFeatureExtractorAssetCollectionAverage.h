// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATUREEXTRACTORASSETCOLLECTIONAVERAGE_H
#define PGFEATUREEXTRACTORASSETCOLLECTIONAVERAGE_H

@class NSString, MAFeatureExtractor, NSArray;


#import "PGAssetCollectionFeatureExtractor.h"

@interface PGFeatureExtractorAssetCollectionAverage : PGAssetCollectionFeatureExtractor {
    NSString *_name;
}


@property (readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor; // ivar: _assetFeatureExtractor
@property (readonly, nonatomic) NSArray *assetFetchOptionPropertySet; // ivar: _assetFetchOptionPropertySet


-(BOOL)_generateError:(*id)arg0 code:(NSInteger)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)initWithAssetFeatureExtractor:(id)arg0 assetFetchOptionPropertySet:(id)arg1 name:(id)arg2 ;
-(id)name;


@end


#endif