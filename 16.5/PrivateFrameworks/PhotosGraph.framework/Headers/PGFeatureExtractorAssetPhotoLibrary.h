// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREEXTRACTORASSETPHOTOLIBRARY_H
#define PGFEATUREEXTRACTORASSETPHOTOLIBRARY_H

@class MAFeatureExtractor;


#import "PGFeatureExtractor.h"

@interface PGFeatureExtractorAssetPhotoLibrary : PGFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *photoLibraryFeatureExtractor; // ivar: _photoLibraryFeatureExtractor


-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)initWithPhotoLibraryFeatureExtractor:(id)arg0 ;
-(id)name;


@end


#endif