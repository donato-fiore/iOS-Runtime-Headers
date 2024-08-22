// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSOCIALGROUPEDGE_H
#define PGGRAPHSOCIALGROUPEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphSocialGroupEdge : PGGraphPropertylessEdge



+(id)filter;
-(id)initFromMomentNode:(id)arg0 toSocialGroupNode:(id)arg1 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif