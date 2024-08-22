// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHLOCATIONCOUNTYNODE_H
#define PGGRAPHLOCATIONCOUNTYNODE_H



#import "PGGraphNamedLocationNode.h"
#import "PGGraphLocationCountyNodeCollection.h"

@interface PGGraphLocationCountyNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *collection;


+(id)addressOfCounty;
+(id)filter;
+(id)momentOfCounty;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;


@end


#endif