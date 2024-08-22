// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATUREEXTRACTORPHOTOLIBRARYSIZE_H
#define PGFEATUREEXTRACTORPHOTOLIBRARYSIZE_H



#import "PGFeatureExtractor.h"

@interface PGFeatureExtractorPhotoLibrarySize : PGFeatureExtractor



+(BOOL)preCalculatePhotoLibrarySizeWithPhotoLibrary:(id)arg0 ;
+(NSUInteger)preCalculatedPhotoLibrarySize;
+(id)_allAssetsOfType:(NSInteger)arg0 withOptions:(id)arg1 ;
+(void)resetPreCalculatedPhotoLibrarySize;
+(void)setPreCalculatedPhotoLibrarySize:(NSUInteger)arg0 ;
-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)name;


@end


#endif