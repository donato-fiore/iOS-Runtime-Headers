// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGINVARIANTPETFEATUREEXTRACTOR_H
#define PGINVARIANTPETFEATUREEXTRACTOR_H



#import "PGGraphFeatureExtractor.h"

@interface PGInvariantPetFeatureExtractor : PGGraphFeatureExtractor



-(id)initWithError:(*id)arg0 ;
-(id)initWithVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(id)labelProcessingForPetNodeSpecies:(NSUInteger)arg0 ;
-(id)labelsForVersion:(NSInteger)arg0 ;
-(id)nodeProcessingForVersion:(NSInteger)arg0 node:(id)arg1 ;


@end


#endif