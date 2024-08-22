// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPERSONACTIVITYMEANINGEDGE_H
#define PGGRAPHPERSONACTIVITYMEANINGEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphPersonActivityMeaningEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toPersonActivityMeaningNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)label;
-(id)meaningLabel;
-(unsigned short)domain;


@end


#endif