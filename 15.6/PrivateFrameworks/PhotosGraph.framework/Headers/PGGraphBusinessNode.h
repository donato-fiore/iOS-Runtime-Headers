// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHBUSINESSNODE_H
#define PGGRAPHBUSINESSNODE_H

@class NSString, NSSet, PPNamedEntity;
@protocol PGGraphPortraitNamedEntity, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphBusinessNodeCollection.h"

@interface PGGraphBusinessNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity, PGAssetCollectionFeature>



@property (readonly, nonatomic) NSString *UUID; // ivar: _uuid
@property (readonly, nonatomic) NSSet *businessCategories;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *collection;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly, nonatomic) NSSet *publicEventNodes;
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger venueCapacity; // ivar: _venueCapacity


+(id)categoryOfBusiness;
+(id)filter;
+(id)momentOfBusiness;
+(id)publicEventOfBusiness;
-(BOOL)hasProperties:(id)arg0 ;
-(id)associatedNodesForRemoval;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 venueCapacity:(NSInteger)arg2 latitude:(CGFloat)arg3 longitude:(CGFloat)arg4 radius:(CGFloat)arg5 ;
-(id)keywordDescription;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateBusinessCategoryNodesUsingBlock:(id)arg0 ;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif