// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHSEASONNODE_H
#define PGGRAPHSEASONNODE_H

@class NSString, NSArray, MANodeFilter;
@protocol PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature, MAUniquelyIdentifiableNode;


#import "PGGraphOptimizedNode.h"
#import "PGGraphSeasonNodeCollection.h"

@interface PGGraphSeasonNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature, MAUniquelyIdentifiableNode>



@property (readonly, nonatomic) PGGraphSeasonNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;


+(id)_localizationKeyForSeasonNode:(id)arg0 ;
+(id)dateOfSeason;
+(id)filter;
+(id)filterForSeasonName:(id)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithName:(id)arg0 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(unsigned short)domain;


@end


#endif