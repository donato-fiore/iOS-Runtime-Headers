// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMEANINGNODE_H
#define PGGRAPHMEANINGNODE_H

@class NSString, NSArray;
@protocol PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature;


#import "PGGraphPropertylessNode.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphMeaningNode.h"

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphMeaningNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger isVeryMeaningfulCachedValue; // ivar: _isVeryMeaningfulCachedValue
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly) PGGraphMeaningNode *parentMeaningNode;
@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVeryMeaningful) BOOL veryMeaningful;


+(id)childMeaningOfMeaning;
+(id)eventOfMeaning;
+(id)eventOfReliableMeaning;
+(id)filter;
+(id)filterWithMeaning:(NSUInteger)arg0 ;
+(id)momentOfMeaning;
+(id)momentOfReliableMeaning;
+(id)parentMeaningOfMeaning;
-(id)_localizationKeyForMeaningLabel:(id)arg0 ;
-(id)associatedNodesForRemoval;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(unsigned short)domain;
-(void)enumerateMeaningfulEventsUsingBlock:(id)arg0 ;
-(void)enumerateSubmeaningsUsingBlock:(id)arg0 ;
-(void)traverseParentMeaningHierarchyUsingBlock:(id)arg0 ;
-(void)traverseSubmeaningHierarchyUsingBlock:(id)arg0 ;


@end


#endif