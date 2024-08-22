// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMNLUPREPROCESSGRAPH_H
#define CDMNLUPREPROCESSGRAPH_H



#import "CDMServiceGraph.h"

@interface CDMNLUPreprocessGraph : CDMServiceGraph



+(id)requiredDAGServices;
-(Class)supportedGraphInputType;
-(void)buildGraph;


@end


#endif