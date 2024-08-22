// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINFERENCESCHEDULERGRAPH_H
#define BWINFERENCESCHEDULERGRAPH_H

@class NSMapTable;
@protocol BWInferenceJobProvider;

#import <Foundation/Foundation.h>


@interface BWInferenceSchedulerGraph : NSObject {
    id<BWInferenceJobProvider> *_head;
    NSMapTable *_directedEdgesByNode;
}




-(id)initWithHeadNode:(id)arg0 directedEdges:(id)arg1 ;
-(void)_visitJob:(id)arg0 withEnRouteAccumulation:(id)arg1 block:(id)arg2 ;
-(void)dealloc;
-(void)enumerateVideoDestinationsFromJob:(id)arg0 withBlock:(id)arg1 ;
-(void)visitProvidersWithBlock:(id)arg0 ;


@end


#endif