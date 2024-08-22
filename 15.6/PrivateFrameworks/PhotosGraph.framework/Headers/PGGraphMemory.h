// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMEMORY_H
#define PGGRAPHMEMORY_H

@class NSString;
@protocol PGMemoryNodeProtocol;

#import <Foundation/Foundation.h>

#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphMemory : NSObject <PGMemoryNodeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (readonly, nonatomic) NSUInteger memoryCategorySubcategory; // ivar: _memoryCategorySubcategory
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes; // ivar: _memoryFeatureNodes
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes; // ivar: _memoryMomentNodes
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier;


-(id)initWithMemoryCategory:(NSUInteger)arg0 memoryCategorySubcategory:(NSUInteger)arg1 momentNodes:(id)arg2 featureNodes:(id)arg3 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif