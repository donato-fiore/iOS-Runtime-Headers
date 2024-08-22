// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNOWLEDGEGRAPHTESTENVIRONMENT_H
#define KNOWLEDGEGRAPHTESTENVIRONMENT_H


#import <Foundation/Foundation.h>

#import "KGStoredGraph.h"

@interface KnowledgeGraphTestEnvironment : NSObject

@property (readonly, nonatomic) KGStoredGraph *graph; // ivar: _graph


+(id)environmentWithTestDBWithStoreType:(Class)arg0 extraOptions:(NSUInteger)arg1 ;
+(id)matisseGraphs;
+(id)temporaryURLWithFileExtension:(id)arg0 ;
+(id)testEnvironmentsForExistingStores;
+(id)testEnvironmentsForOnDiskExistingStores;
-(BOOL)deleteEdge:(id)arg0 ;
-(BOOL)deleteNode:(id)arg0 ;
-(NSUInteger)edgeCount;
-(NSUInteger)nodeCount;
-(id)addEdgeWithLabels:(id)arg0 properties:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)addNodeWithLabels:(id)arg0 properties:(id)arg1 ;
-(id)initWithKGGraph:(id)arg0 ;
-(id)placeholderEdgeWithLabels:(id)arg0 properties:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)placeholderNodeWithLabels:(id)arg0 properties:(id)arg1 ;
-(id)refetchEdge:(id)arg0 ;
-(id)refetchNode:(id)arg0 ;
-(void)closeAndDeleteEnvironment;
-(void)populateGraph;


@end


#endif