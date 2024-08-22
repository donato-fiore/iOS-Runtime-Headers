// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTRIGGEREDMEMORY_H
#define PGTRIGGEREDMEMORY_H

@class NSArray, NSDate, NSString, NSIndexSet, NSDictionary;
@protocol PGTriggeredMemoryProtocol;

#import <Foundation/Foundation.h>

#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGTriggeredMemory : NSObject <PGTriggeredMemoryProtocol>



@property (retain, nonatomic) NSArray *blockableFeatures; // ivar: _blockableFeatures
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat electionScore; // ivar: _electionScore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (readonly, nonatomic) NSUInteger memoryCategorySubcategory; // ivar: _memoryCategorySubcategory
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes; // ivar: _memoryFeatureNodes
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes; // ivar: _memoryMomentNodes
@property (readonly, nonatomic) NSInteger photosGraphVersion; // ivar: _photosGraphVersion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSIndexSet *triggerTypes; // ivar: _triggerTypes
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier; // ivar: _uniqueMemoryIdentifier
@property (readonly, nonatomic) NSDictionary *validityIntervalByTriggerType; // ivar: _validityIntervalByTriggerType


-(id)initWithMemoryCategory:(NSUInteger)arg0 memoryCategorySubcategory:(NSUInteger)arg1 memoryMomentNodes:(id)arg2 memoryFeatureNodes:(id)arg3 validityIntervalByTriggerType:(id)arg4 creationDate:(id)arg5 uniqueMemoryIdentifier:(id)arg6 ;
-(id)initWithMemoryCategory:(NSUInteger)arg0 memoryCategorySubcategory:(NSUInteger)arg1 memoryMomentNodes:(id)arg2 memoryFeatureNodes:(id)arg3 validityIntervalByTriggerType:(id)arg4 creationDate:(id)arg5 uniqueMemoryIdentifier:(id)arg6 photosGraphVersion:(NSInteger)arg7 ;
-(id)initWithMemoryNode:(id)arg0 validityIntervalByTriggerType:(id)arg1 creationDate:(id)arg2 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif