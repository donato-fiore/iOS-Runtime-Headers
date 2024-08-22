// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEANINGFULEVENTMEMORYGENERATOR_H
#define PGMEANINGFULEVENTMEMORYGENERATOR_H

@class NSDate, NSString;


#import "PGFeaturedMemoryGenerator.h"

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (retain, nonatomic) NSDate *lowerBoundLocalDate; // ivar: _lowerBoundLocalDate
@property (nonatomic) NSUInteger meaning; // ivar: _meaning
@property (retain, nonatomic) NSString *meaningfulEventUUID; // ivar: _meaningfulEventUUID
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (nonatomic) BOOL skipsCollectionTitle; // ivar: _skipsCollectionTitle


+(id)_invalidMeaningLabelsForMemories;
-(id)generateAllPotentialMemoriesWithGraph:(id)arg0 progressBlock:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;


@end


#endif