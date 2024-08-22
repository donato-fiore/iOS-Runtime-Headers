// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSOCIALGROUPNODE_H
#define PGGRAPHSOCIALGROUPNODE_H

@class NSNumber, NSString, NSSet, NSArray;
@protocol PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphSocialGroupNodeCollection.h"

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode <PGAssetCollectionFeature>

 {
    NSNumber *_uuid;
    float _weight;
}


@property (readonly, nonatomic) PGGraphSocialGroupNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFrequentSocialGroup;
@property (readonly) NSUInteger numberOfMomentNodes;
@property (readonly) NSUInteger numberOfPersonNodes;
@property (readonly, nonatomic) NSSet *personNodes;
@property (readonly) NSInteger socialGroupID;
@property (readonly, nonatomic) NSString *socialGroupName;
@property (readonly, nonatomic) NSArray *sortedPersonNodes;
@property (readonly) Class superclass;


+(NSInteger)identifierForPersonNodes:(id)arg0 ;
+(id)filter;
+(id)momentOfSocialGroup;
+(id)personOfSocialGroup;
+(id)weightSortDescriptors;
-(BOOL)hasProperties:(id)arg0 ;
-(NSUInteger)rankInGraph:(id)arg0 ;
-(float)weight;
-(id)UUID;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithWeight:(float)arg0 uuid:(id)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumeratePersonEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePersonNodesUsingBlock:(id)arg0 ;


@end


#endif