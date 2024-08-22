// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHLOCATIONDISTRICTNODE_H
#define PGGRAPHLOCATIONDISTRICTNODE_H



#import "PGGraphNamedLocationNode.h"
#import "PGGraphLocationDistrictNodeCollection.h"

@interface PGGraphLocationDistrictNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationDistrictNodeCollection *collection;


+(id)filter;
-(NSUInteger)featureType;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;


@end


#endif