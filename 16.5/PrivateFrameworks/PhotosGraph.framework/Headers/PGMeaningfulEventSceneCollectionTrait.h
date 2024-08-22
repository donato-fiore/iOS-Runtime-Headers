// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGFULEVENTSCENECOLLECTIONTRAIT_H
#define PGMEANINGFULEVENTSCENECOLLECTIONTRAIT_H



#import "PGMeaningfulEventCollectionTrait.h"

@interface PGMeaningfulEventSceneCollectionTrait : PGMeaningfulEventCollectionTrait

@property (nonatomic) BOOL accumulateHighConfidenceAssetCounts; // ivar: _accumulateHighConfidenceAssetCounts
@property (nonatomic) NSUInteger minimumNumberOfHighConfidenceAssets; // ivar: _minimumNumberOfHighConfidenceAssets
@property (nonatomic) NSUInteger minimumNumberOfNegativeHighConfidenceAssets; // ivar: _minimumNumberOfNegativeHighConfidenceAssets
@property (nonatomic) CGFloat minimumRatioOfHighConfidenceAssets; // ivar: _minimumRatioOfHighConfidenceAssets


-(id)debugDescriptionWithMomentNode:(id)arg0 ;
-(id)initWithNodes:(id)arg0 ;
-(id)initWithNodes:(id)arg0 negativeNodes:(id)arg1 ;


@end


#endif