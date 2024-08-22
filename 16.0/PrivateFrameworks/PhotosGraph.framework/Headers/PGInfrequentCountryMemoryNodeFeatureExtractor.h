// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGINFREQUENTCOUNTRYMEMORYNODEFEATUREEXTRACTOR_H
#define PGINFREQUENTCOUNTRYMEMORYNODEFEATUREEXTRACTOR_H



#import "PGGraphMemoryNodeFeatureExtractor.h"

@interface PGInfrequentCountryMemoryNodeFeatureExtractor : PGGraphMemoryNodeFeatureExtractor



+(id)_labelsForVersion:(NSInteger)arg0 ;
+(id)inferredUserLanguageCodesFromGraph:(id)arg0 ;
-(id)initWithError:(*id)arg0 ;
-(id)initWithFrequentCountryLabels:(id)arg0 version:(NSInteger)arg1 graph:(id)arg2 error:(*id)arg3 ;
-(id)initWithVersion:(NSInteger)arg0 graph:(id)arg1 error:(*id)arg2 ;


@end


#endif