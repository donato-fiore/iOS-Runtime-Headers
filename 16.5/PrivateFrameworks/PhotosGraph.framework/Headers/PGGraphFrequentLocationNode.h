// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHFREQUENTLOCATIONNODE_H
#define PGGRAPHFREQUENTLOCATIONNODE_H

@class NSDateInterval, NSString, NSDate, NSArray;
@protocol PLFrequentLocationProtocol, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphAddressNode.h"
#import "PGGraphFrequentLocationNodeCollection.h"

@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PLFrequentLocationProtocol, PGAssetCollectionFeature>



@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly, nonatomic) PGGraphFrequentLocationNodeCollection *collection;
@property (readonly) CLLocationCoordinate2D coordinate;
@property (readonly) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSDateInterval *localDateInterval; // ivar: _localDateInterval
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSArray *sortedMoments;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)addressOfFrequentLocation;
+(id)filter;
+(id)momentOfFrequentLocation;
-(BOOL)hasProperties:(id)arg0 ;
-(NSUInteger)numberOfMomentNodes;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLocalDateInterval:(id)arg0 ;
-(id)label;
-(id)name;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif