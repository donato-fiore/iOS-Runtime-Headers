// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALMEMORY_H
#define PGPOTENTIALMEMORY_H

@class PHAssetCollection, NSString, NSSet, NSDate, CLLocation, NSDictionary;
@protocol PGGraphMemoryProtocol;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNodeCollection.h"
#import "PGGraphMomentNode.h"
#import "PGMemoryGenerator.h"
#import "PGPotentialMemory.h"

@interface PGPotentialMemory : NSObject <PGGraphMemoryProtocol>



@property (retain) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property NSUInteger category; // ivar: _category
@property CGFloat contentScore; // ivar: _contentScore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSSet *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (retain) NSDate *localDate; // ivar: _localDate
@property (readonly) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly) NSDate *localStartDate; // ivar: _localStartDate
@property (retain) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSUInteger memoryCategory;
@property (readonly, nonatomic) NSUInteger memoryCategorySubcategory; // ivar: _memoryCategorySubcategory
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly) NSSet *momentIDs; // ivar: _momentIDs
@property (retain) PGGraphMomentNode *momentNode; // ivar: _momentNode
@property (retain, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (readonly) NSDictionary *numberOfAssetsByMomentIDs; // ivar: _numberOfAssetsByMomentIDs
@property (retain) NSSet *peopleUUIDs; // ivar: _peopleUUIDs
@property CGFloat score; // ivar: _score
@property NSInteger sourceType; // ivar: _sourceType
@property NSUInteger subcategory; // ivar: _subcategory
@property (readonly) Class superclass;
@property (readonly) NSDate *universalEndDate; // ivar: _universalEndDate
@property (readonly) NSDate *universalStartDate; // ivar: _universalStartDate
@property (retain, nonatomic) PGMemoryGenerator *upgradedMemoryGenerator; // ivar: _upgradedMemoryGenerator
@property (retain, nonatomic) PGPotentialMemory *upgradedPotentialMemory; // ivar: _upgradedPotentialMemory


-(CGFloat)computeContentScoreUsingMemoryController:(id)arg0 ;
-(id)buildAssetCollectionUsingMemoryController:(id)arg0 withMinimumNumberOfAssets:(NSUInteger)arg1 ;
-(id)initWithCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 ;
-(id)initWithCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 momentNode:(id)arg2 ;
-(id)initWithCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 momentNodes:(id)arg2 sourceType:(NSInteger)arg3 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)_prepareForOverlapCheck;
-(void)_resetOverlapCheck;


@end


#endif