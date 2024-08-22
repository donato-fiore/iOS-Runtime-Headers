// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHLOCATIONCOUNTRYEDGE_H
#define PGGRAPHLOCATIONCOUNTRYEDGE_H



#import "PGGraphLocationEdge.h"

@interface PGGraphLocationCountryEdge : PGGraphLocationEdge



+(id)filter;
-(id)initFromLocationNode:(id)arg0 toCountryNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif