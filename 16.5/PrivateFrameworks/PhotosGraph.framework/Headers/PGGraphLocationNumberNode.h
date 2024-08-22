// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHLOCATIONNUMBERNODE_H
#define PGGRAPHLOCATIONNUMBERNODE_H



#import "PGGraphNamedLocationNode.h"
#import "PGGraphLocationNumberNodeCollection.h"

@interface PGGraphLocationNumberNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationNumberNodeCollection *collection;


+(id)filter;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;


@end


#endif