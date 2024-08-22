// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPUBLICEVENTCATEGORYEDGE_H
#define PGGRAPHPUBLICEVENTCATEGORYEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphPublicEventCategoryEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromPublicEventNode:(id)arg0 toCategoryNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)label;
-(unsigned short)domain;


@end


#endif