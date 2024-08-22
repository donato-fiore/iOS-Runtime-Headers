// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREEXTRACTORLOCALE_H
#define PGFEATUREEXTRACTORLOCALE_H

@class NSLocale;


#import "PGFeatureExtractor.h"

@interface PGFeatureExtractorLocale : PGFeatureExtractor

@property (retain, nonatomic) NSLocale *currentLocale; // ivar: _currentLocale


-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)name;


@end


#endif