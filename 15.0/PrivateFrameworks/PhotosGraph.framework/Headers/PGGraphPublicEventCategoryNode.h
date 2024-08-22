// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPUBLICEVENTCATEGORYNODE_H
#define PGGRAPHPUBLICEVENTCATEGORYNODE_H

@class NSString, NSArray;
@protocol PGGraphLocalizable, PGGraphSynonymSupport;


#import "PGGraphOptimizedNode.h"

@interface PGGraphPublicEventCategoryNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport>

 {
    NSString *_label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly) Class superclass;


+(id)filter;
+(id)filterWithCategories:(id)arg0 ;
+(id)filterWithCategory:(id)arg0 ;
+(id)publicEventOfCategory;
-(BOOL)hasProperties:(id)arg0 ;
-(id)associatedNodesForRemoval;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLabel:(id)arg0 localizedName:(id)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif