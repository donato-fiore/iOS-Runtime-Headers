// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHLOCATIONCITYNODE_H
#define PGGRAPHLOCATIONCITYNODE_H



#import "PGGraphNamedLocationNode.h"
#import "PGGraphLocationCityNodeCollection.h"

@interface PGGraphLocationCityNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *collection;


+(id)addressOfCity;
+(id)countryOfCity;
+(id)countyOfCity;
+(id)filter;
+(id)momentInCity;
+(id)stateOfCity;
-(NSUInteger)featureType;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;


@end


#endif