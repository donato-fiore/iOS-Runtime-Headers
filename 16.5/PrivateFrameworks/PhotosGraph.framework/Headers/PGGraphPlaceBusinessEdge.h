// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPLACEBUSINESSEDGE_H
#define PGGRAPHPLACEBUSINESSEDGE_H



#import "PGGraphBusinessEdge.h"

@interface PGGraphPlaceBusinessEdge : PGGraphBusinessEdge



+(id)filter;
-(id)initFromMomentNode:(id)arg0 toBusinessNode:(id)arg1 confidence:(CGFloat)arg2 hasRoutineInfo:(BOOL)arg3 universalStartDate:(id)arg4 universalEndDate:(id)arg5 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)label;
-(unsigned short)domain;


@end


#endif