// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHLOCATIONEDGE_H
#define PGGRAPHLOCATIONEDGE_H

@class MAEdgeFilter;
@protocol MAUniquelyIdentifiableEdge;


#import "PGGraphPropertylessEdge.h"

@interface PGGraphLocationEdge : PGGraphPropertylessEdge <MAUniquelyIdentifiableEdge>



@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;


+(id)filter;


@end


#endif