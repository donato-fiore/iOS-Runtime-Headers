// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHISCARETAKEROFBABYEDGE_H
#define PGGRAPHISCARETAKEROFBABYEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphIsCaretakerOfBabyEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromPersonNode:(id)arg0 toBabyNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif