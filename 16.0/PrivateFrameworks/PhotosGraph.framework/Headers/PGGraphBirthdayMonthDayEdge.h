// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHBIRTHDAYMONTHDAYEDGE_H
#define PGGRAPHBIRTHDAYMONTHDAYEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphBirthdayMonthDayEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromPersonNode:(id)arg0 toMonthDayNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)label;
-(unsigned short)domain;


@end


#endif