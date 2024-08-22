// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGINVARIANTPETMEMORYNODEFEATUREEXTRACTOR_H
#define PGINVARIANTPETMEMORYNODEFEATUREEXTRACTOR_H



#import "PGGraphMemoryNodeFeatureExtractor.h"

@interface PGInvariantPetMemoryNodeFeatureExtractor : PGGraphMemoryNodeFeatureExtractor



-(id)initWithError:(*id)arg0 ;
-(id)initWithVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(id)labelProcessingForPetNodeSpecies:(NSUInteger)arg0 ;
-(id)labelsForVersion:(NSInteger)arg0 ;
-(id)nodeProcessingForVersion:(NSInteger)arg0 node:(id)arg1 ;


@end


#endif