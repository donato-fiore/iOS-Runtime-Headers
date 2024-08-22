// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYMOMENTREQUIREMENTS_H
#define PGMEMORYMOMENTREQUIREMENTS_H


#import <Foundation/Foundation.h>


@interface PGMemoryMomentRequirements : NSObject

@property (nonatomic) CGFloat aboveContentScoreThreshold; // ivar: _aboveContentScoreThreshold
@property (nonatomic) BOOL filterMomentsWithNotEnoughScenesProcessed; // ivar: _filterMomentsWithNotEnoughScenesProcessed
@property (nonatomic) BOOL filterUninterestingForMemories; // ivar: _filterUninterestingForMemories
@property (nonatomic) BOOL filterUninterestingWithAlternateJunking; // ivar: _filterUninterestingWithAlternateJunking
@property (nonatomic) NSUInteger minimumNumberOfAssetsInExtendedCuration; // ivar: _minimumNumberOfAssetsInExtendedCuration
@property (nonatomic) NSUInteger minimumNumberOfPersons; // ivar: _minimumNumberOfPersons
@property (nonatomic) NSUInteger minimumNumberOfRelevantAssets; // ivar: _minimumNumberOfRelevantAssets




@end


#endif