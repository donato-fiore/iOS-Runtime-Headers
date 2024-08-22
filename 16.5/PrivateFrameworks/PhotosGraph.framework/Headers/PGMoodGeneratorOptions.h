// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMOODGENERATOROPTIONS_H
#define PGMOODGENERATOROPTIONS_H

@class NSSet, NSArray, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "PGMoodGenerationContext.h"

@interface PGMoodGeneratorOptions : NSObject

@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (nonatomic) NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (retain) NSSet *momentIDs; // ivar: _momentIDs
@property (retain, nonatomic) PGMoodGenerationContext *moodGenerationContext; // ivar: _moodGenerationContext
@property (retain, nonatomic) NSArray *moodHistory; // ivar: _moodHistory
@property (retain) NSArray *prefetchedAssets; // ivar: _prefetchedAssets
@property (retain) NSDate *referenceDate; // ivar: _referenceDate
@property (retain) NSDictionary *sceneIdentifiersByMomentNodeIdentifier; // ivar: _sceneIdentifiersByMomentNodeIdentifier




@end


#endif