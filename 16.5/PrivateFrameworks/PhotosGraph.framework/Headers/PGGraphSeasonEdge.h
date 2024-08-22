// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHSEASONEDGE_H
#define PGGRAPHSEASONEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphSeasonEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromDateNode:(id)arg0 toSeasonNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)label;
-(unsigned short)domain;


@end


#endif