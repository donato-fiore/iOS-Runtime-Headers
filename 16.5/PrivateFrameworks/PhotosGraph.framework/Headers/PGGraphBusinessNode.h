// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHBUSINESSNODE_H
#define PGGRAPHBUSINESSNODE_H

@class NSSet, NSString, PPNamedEntity;
@protocol PGGraphPortraitNamedEntity, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphBusinessNodeCollection.h"

@interface PGGraphBusinessNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity, PGAssetCollectionFeature>



@property (readonly, nonatomic) NSSet *businessCategories;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *collection;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinates; // ivar: _coordinates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly, nonatomic) NSSet *publicEventNodes;
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger venueCapacity; // ivar: _venueCapacity


+(id)categoryOfBusiness;
+(id)filter;
+(id)filterWithMuid:(NSUInteger)arg0 ;
+(id)momentOfBusiness;
+(id)publicEventOfBusiness;
-(BOOL)hasProperties:(id)arg0 ;
-(id)UUID;
-(id)associatedNodesForRemoval;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithMuid:(NSUInteger)arg0 name:(id)arg1 venueCapacity:(NSInteger)arg2 coordinates:(struct CLLocationCoordinate2D )arg3 radius:(CGFloat)arg4 ;
-(id)keywordDescription;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateBusinessCategoryNodesUsingBlock:(id)arg0 ;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif