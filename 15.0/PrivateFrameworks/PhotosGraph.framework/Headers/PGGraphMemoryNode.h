// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHMEMORYNODE_H
#define PGGRAPHMEMORYNODE_H

@class NSString;
@protocol PGMemoryNodeProtocol;


#import "PGGraphOptimizedNode.h"
#import "PGGraphMemoryNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphMemoryNode : PGGraphOptimizedNode <PGMemoryNodeProtocol>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphMemoryNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger memoryCategory;
@property (readonly, nonatomic) NSUInteger memoryCategorySubcategory; // ivar: _memoryCategorySubcategory
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier; // ivar: _uniqueMemoryIdentifier


+(id)allMemoryTypeStrings;
+(id)featureOfMemory;
+(id)filter;
+(id)filterWithMemoryCategories:(id)arg0 ;
+(id)filterWithMemoryCategory:(NSUInteger)arg0 ;
+(id)filterWithUniqueMemoryIdentifier:(id)arg0 ;
+(id)filterWithUniqueMemoryIdentifierArray:(id)arg0 ;
+(id)filterWithUniqueMemoryIdentifiers:(id)arg0 ;
+(id)fullMemoryTypeStringWithMemoryCategorySubcategory:(NSUInteger)arg0 featureNodes:(id)arg1 ;
+(id)fullyQualifiedMemoryTypeForMemoryType:(id)arg0 withPrefix:(id)arg1 ;
+(id)momentOfMemory;
+(id)uniqueMemoryIdentifierWithMemoryLabel:(id)arg0 featureNodes:(id)arg1 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLabel:(id)arg0 memoryCategorySubcategory:(NSUInteger)arg1 uniqueMemoryIdentifier:(id)arg2 ;
-(id)label;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif