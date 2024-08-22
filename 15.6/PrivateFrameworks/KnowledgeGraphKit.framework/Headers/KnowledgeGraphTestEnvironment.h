// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNOWLEDGEGRAPHTESTENVIRONMENT_H
#define KNOWLEDGEGRAPHTESTENVIRONMENT_H


#import <Foundation/Foundation.h>

#import "KGStoredGraph.h"

@interface KnowledgeGraphTestEnvironment : NSObject

@property (readonly, nonatomic) KGStoredGraph *graph; // ivar: _graph


+(id)environmentWithTestDBWithStoreType:(Class)arg0 ;
+(id)matisseGraphs;
+(id)temporaryURLWithFileExtension:(id)arg0 ;
+(id)testEnvironmentsForExistingStores;
+(id)testEnvironmentsForOnDiskExistingStores;
-(BOOL)deleteEdge:(id)arg0 ;
-(BOOL)deleteNode:(id)arg0 ;
-(NSUInteger)edgeCount;
-(NSUInteger)nodeCount;
-(id)addEdgeWithLabels:(id)arg0 weight:(float)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(id)addNodeWithLabels:(id)arg0 weight:(float)arg1 properties:(id)arg2 ;
-(id)initWithKGGraph:(id)arg0 ;
-(id)placeholderEdgeWithLabels:(id)arg0 weight:(float)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(id)placeholderNodeWithLabels:(id)arg0 weight:(float)arg1 properties:(id)arg2 ;
-(id)refetchEdge:(id)arg0 ;
-(id)refetchNode:(id)arg0 ;
-(void)closeAndDeleteEnvironment;
-(void)populateGraph;


@end


#endif