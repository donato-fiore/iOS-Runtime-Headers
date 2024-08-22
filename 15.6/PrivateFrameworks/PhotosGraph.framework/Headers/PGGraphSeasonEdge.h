// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSEASONEDGE_H
#define PGGRAPHSEASONEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphSeasonEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromDateNode:(id)arg0 toSeasonNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif