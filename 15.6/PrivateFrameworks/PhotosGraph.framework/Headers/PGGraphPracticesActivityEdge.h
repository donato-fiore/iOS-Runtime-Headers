// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPRACTICESACTIVITYEDGE_H
#define PGGRAPHPRACTICESACTIVITYEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphPracticesActivityEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromPersonNode:(id)arg0 toActivityNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif