// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMEMBEDDINGSERVICEGRAPH_H
#define CDMEMBEDDINGSERVICEGRAPH_H



#import "CDMServiceGraph.h"

@interface CDMEmbeddingServiceGraph : CDMServiceGraph



+(id)requiredDAGServices;
-(Class)supportedGraphInputType;
-(void)buildGraph;


@end


#endif