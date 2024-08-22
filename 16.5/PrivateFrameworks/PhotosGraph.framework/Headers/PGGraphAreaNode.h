// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHAREANODE_H
#define PGGRAPHAREANODE_H

@class NSString;
@protocol PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature, PGGraphLocationOrAreaNodeCollection;


#import "PGGraphOptimizedNode.h"
#import "PGGraphAreaNodeCollection.h"
#import "PGGraphLocationNode.h"

@interface PGGraphAreaNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature>



@property (nonatomic) CLLocationCoordinate2D centroidCoordinate; // ivar: _centroidCoordinate
@property (readonly, nonatomic) PGGraphAreaNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSString *fullname;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isBlocked; // ivar: _isBlocked
@property (readonly, nonatomic) NSObject<PGGraphLocationOrAreaNodeCollection> *locationOrAreaNodeCollection;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property (readonly) Class superclass;


+(id)addressOfArea;
+(id)blockedFilter;
+(id)filter;
+(id)filterWithName:(id)arg0 ;
+(id)filterWithNames:(id)arg0 ;
+(id)nonBlockedFilter;
+(id)propertiesWithIsBlocked:(BOOL)arg0 ;
+(id)propertiesWithName:(id)arg0 isBlocked:(BOOL)arg1 ;
-(BOOL)diameterIsLargerThanDiameter:(CGFloat)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)addressNodes;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithName:(id)arg0 isBlocked:(BOOL)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)shortenedNameWithLocationHelper:(id)arg0 ;
-(struct CLLocationCoordinate2D )coordinate;
-(unsigned short)domain;


@end


#endif