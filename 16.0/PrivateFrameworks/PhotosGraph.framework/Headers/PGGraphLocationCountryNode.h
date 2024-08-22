// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHLOCATIONCOUNTRYNODE_H
#define PGGRAPHLOCATIONCOUNTRYNODE_H



#import "PGGraphNamedLocationNode.h"
#import "PGGraphLocationCountryNodeCollection.h"

@interface PGGraphLocationCountryNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *collection;


+(id)addressOfCountry;
+(id)filter;
+(id)languageOfCountry;
+(id)momentInCountry;
-(NSUInteger)featureType;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;


@end


#endif