// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHLOCATIONSTREETNODE_H
#define PGGRAPHLOCATIONSTREETNODE_H



#import "PGGraphNamedLocationNode.h"
#import "PGGraphLocationStreetNodeCollection.h"

@interface PGGraphLocationStreetNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationStreetNodeCollection *collection;


+(id)filter;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;


@end


#endif