// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMEMORYFEATURESEDGE_H
#define PGGRAPHMEMORYFEATURESEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphMemoryFeaturesEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromMemoryNode:(id)arg0 toFeatureNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif