// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPETNODE_H
#define PGGRAPHPETNODE_H

@class NSString;
@protocol PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphPetNodeCollection.h"

@interface PGGraphPetNode : PGGraphOptimizedNode <PGAssetCollectionFeature>

 {
    NSString *_localIdentifier;
    NSUInteger _petSpecies;
}


@property (readonly, nonatomic) PGGraphPetNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSUInteger petSpecies;
@property (readonly) Class superclass;


+(id)filter;
+(id)momentOfPet;
+(id)ownerOfPet;
+(id)stringFromPetSpecies:(NSUInteger)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLocalIdentifier:(id)arg0 petSpecies:(NSUInteger)arg1 ;
-(id)label;
-(id)ownerNodes;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateOwnerNodesUsingBlock:(id)arg0 ;


@end


#endif