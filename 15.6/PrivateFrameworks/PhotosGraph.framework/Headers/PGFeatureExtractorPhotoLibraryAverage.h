// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATUREEXTRACTORPHOTOLIBRARYAVERAGE_H
#define PGFEATUREEXTRACTORPHOTOLIBRARYAVERAGE_H

@class MAFeatureExtractor, NSArray;


#import "PGFeatureExtractor.h"

@interface PGFeatureExtractorPhotoLibraryAverage : PGFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor; // ivar: _assetFeatureExtractor
@property (readonly, nonatomic) NSArray *assetFetchOptionPropertySet; // ivar: _assetFetchOptionPropertySet
@property (readonly, nonatomic) NSArray *featureNames; // ivar: _featureNames


+(BOOL)preCalculateFeatureVectorWithPhotoLibrary:(id)arg0 assetFeatureExtractor:(id)arg1 assetFetchOptionPropertySet:(id)arg2 error:(*id)arg3 ;
+(id)preCalculatedFloatVector;
+(void)resetPreCalculatedFeatureVector;
+(void)setPreCalculatedFloatVector:(id)arg0 ;
-(NSInteger)featureLength;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)initWithAssetFeatureExtractor:(id)arg0 assetFetchOptionPropertySet:(id)arg1 ;
-(id)name;


@end


#endif