// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGINFREQUENTCITYMEMORYNODEFEATUREEXTRACTOR_H
#define PGINFREQUENTCITYMEMORYNODEFEATUREEXTRACTOR_H



#import "PGGraphMemoryNodeFeatureExtractor.h"

@interface PGInfrequentCityMemoryNodeFeatureExtractor : PGGraphMemoryNodeFeatureExtractor



-(id)initWithError:(*id)arg0 ;
-(id)initWithFrequentCityLabels:(id)arg0 version:(NSInteger)arg1 graph:(id)arg2 cityManager:(id)arg3 error:(*id)arg4 ;
-(id)initWithFrequentCityLabels:(id)arg0 version:(NSInteger)arg1 graph:(id)arg2 error:(*id)arg3 ;
-(id)initWithVersion:(NSInteger)arg0 graph:(id)arg1 error:(*id)arg2 ;
-(id)labelsForVersion:(NSInteger)arg0 ;


@end


#endif