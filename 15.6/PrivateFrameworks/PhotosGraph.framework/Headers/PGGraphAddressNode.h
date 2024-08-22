// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHADDRESSNODE_H
#define PGGRAPHADDRESSNODE_H

@class NSString, CLLocation, PPLocationNamedEntities, MANodeFilter;
@protocol PGGraphPortraitLocationNamedEntity, MAUniquelyIdentifiableNode;


#import "PGGraphLocationNode.h"
#import "PGGraphAddressNodeCollection.h"

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity, MAUniquelyIdentifiableNode>

 {
    NSInteger _locationMode;
    NSString *_name;
}


@property (readonly, nonatomic) PGGraphAddressNodeCollection *collection;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCoarse;
@property (readonly, nonatomic) BOOL isImproved;
@property (readonly, nonatomic) BOOL isOcean;
@property (readonly, nonatomic) BOOL isPrecise;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSInteger locationMode;
@property (readonly, nonatomic) PPLocationNamedEntities *pg_locationNamedEntity;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;
@property (readonly) NSString *uuid; // ivar: _uuid


+(id)areaOfAddress;
+(id)cityOfAddress;
+(id)countryOfAddress;
+(id)countyOfAddress;
+(id)districtOfAddress;
+(id)filter;
+(id)homeOfAddress;
+(id)homeWorkOfAddress;
+(id)impreciseFilter;
+(id)languageOfAddress;
+(id)momentOfAddress;
+(id)numberOfAddress;
+(id)preciseFilter;
+(id)stateOfAddress;
+(id)streetOfAddress;
+(id)workOfAddress;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)isPersonHomeOrWorkAddress;
-(NSUInteger)featureType;
-(id)featureIdentifier;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLocationMode:(NSInteger)arg0 coordinate:(struct CLLocationCoordinate2D )arg1 name:(id)arg2 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(unsigned short)domain;
-(void)enumerateAreaEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif