// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHANNIVERSARYEVENTEDGE_H
#define PGGRAPHANNIVERSARYEVENTEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphAnniversaryEventEdge : PGGraphPropertylessEdge {
    float _weight;
}




+(id)filter;
-(float)weight;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toPersonNode:(id)arg1 weight:(float)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif