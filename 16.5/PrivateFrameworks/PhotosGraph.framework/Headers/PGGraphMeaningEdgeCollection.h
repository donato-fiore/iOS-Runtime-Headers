// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHMEANINGEDGECOLLECTION_H
#define PGGRAPHMEANINGEDGECOLLECTION_H



#import "PGGraphEdgeCollection.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphMeaningEdgeCollection : PGGraphEdgeCollection

@property (readonly) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly) PGGraphMomentNodeCollection *momentNodes;


+(Class)edgeClass;


@end


#endif