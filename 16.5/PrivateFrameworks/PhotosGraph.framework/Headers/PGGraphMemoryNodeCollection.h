// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHMEMORYNODECOLLECTION_H
#define PGGRAPHMEMORYNODECOLLECTION_H

@class NSArray, NSSet;


#import "PGGraphNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphMemoryNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodes;
@property (readonly, nonatomic) NSArray *memoryCategorySubcategories;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) NSSet *uniqueMemoryIdentifiers;


+(Class)nodeClass;
+(id)memoryNodeAsCollectionWithUniqueIdentifier:(id)arg0 inGraph:(id)arg1 ;
+(id)memoryNodesOfCategories:(id)arg0 inGraph:(id)arg1 ;
+(id)memoryNodesOfCategory:(NSUInteger)arg0 inGraph:(id)arg1 ;
+(id)memoryNodesWithUniqueIdentifierArray:(id)arg0 inGraph:(id)arg1 ;
+(id)memoryNodesWithUniqueIdentifiers:(id)arg0 inGraph:(id)arg1 ;
-(id)subsetWithMemoryCategories:(id)arg0 ;
-(id)subsetWithMemoryCategory:(NSUInteger)arg0 ;
-(void)enumerateMemoryCategorySubcategoriesUsingBlock:(id)arg0 ;


@end


#endif