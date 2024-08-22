// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPUBLICEVENTNODE_H
#define PGGRAPHPUBLICEVENTNODE_H

@class NSSet, NSString, PPNamedEntity;
@protocol PGGraphPortraitNamedEntity;


#import "PGGraphOptimizedNode.h"
#import "PGGraphBusinessNode.h"
#import "PGGraphPublicEventNodeCollection.h"

@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity>



@property (readonly, nonatomic) PGGraphBusinessNode *businessNode;
@property (readonly, nonatomic) NSSet *categories;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger expectedAttendance; // ivar: _expectedAttendance
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *localizedCategories;
@property (readonly, nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSSet *performers;
@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly, nonatomic) NSSet *preciseLocalizedCategoryNames;
@property (readonly) Class superclass;


+(id)businessOfPublicEvent;
+(id)categoryOfPublicEvent;
+(id)filter;
+(id)momentOfPublicEvent;
+(id)performerOfPublicEvent;
+(id)unsupportedCategoriesForTitles;
-(BOOL)hasProperties:(id)arg0 ;
-(id)associatedNodesForRemoval;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithMUID:(NSUInteger)arg0 name:(id)arg1 expectedAttendance:(NSInteger)arg2 ;
-(id)keywordDescription;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateLocalizedSubcategoryNodesUsingBlock:(id)arg0 ;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePerformerEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePerformerNodesUsingBlock:(id)arg0 ;
-(void)enumeratePublicEventCategoryEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePublicEventCategoryNodesUsingBlock:(id)arg0 ;


@end


#endif