// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFEATUREEXTRACTORFREQUENTPEOPLE_H
#define PGFEATUREEXTRACTORFREQUENTPEOPLE_H

@class PHFetchResult;


#import "PGAssetFeatureExtractor.h"

@interface PGFeatureExtractorFrequentPeople : PGAssetFeatureExtractor

@property (retain, nonatomic) PHFetchResult *frequencySortedPersons; // ivar: _frequencySortedPersons
@property (readonly, nonatomic) NSUInteger numberOfFrequentPeopleToExtract; // ivar: _numberOfFrequentPeopleToExtract


-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)initWithNumberOfFrequentPeopleToExtract:(NSUInteger)arg0 ;
-(id)name;


@end


#endif