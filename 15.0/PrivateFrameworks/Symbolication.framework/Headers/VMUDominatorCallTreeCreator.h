// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUDOMINATORCALLTREECREATOR_H
#define VMUDOMINATORCALLTREECREATOR_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "VMUDebugTimer.h"
#import "VMUCallTreeRoot.h"
#import "VMUClassPatternMatcher.h"
#import "VMUDominatorGraph.h"
#import "VMUProcessObjectGraph.h"

@interface VMUDominatorCallTreeCreator : NSObject {
    VMUDebugTimer *_debugTimer;
    *void _visitedNodes;
    BOOL _showRegionVirtualSize;
    BOOL _groupByType;
}


@property (retain) VMUCallTreeRoot *callTreeRoot; // ivar: _callTreeRoot
@property (retain) NSNumber *desiredAddress; // ivar: _desiredAddress
@property (retain) VMUClassPatternMatcher *desiredClassesPattern; // ivar: _desiredClassesPattern
@property (retain) VMUDominatorGraph *dominatorGraph; // ivar: _dominatorGraph
@property (retain) VMUProcessObjectGraph *processObjectGraph; // ivar: _processObjectGraph


-(*void)removeJunkNodes;
-(NSUInteger)sizeForNodeName:(unsigned int)arg0 nodeInfo:(struct ? )arg1 ;
-(id)_addNodeWithNodeName:(unsigned int)arg0 nodeInfo:(struct ? )arg1 callTreeParentNode:(id)arg2 parentNodeName:(unsigned int)arg3 parentNodeType:(unsigned int)arg4 reference:(struct ? *)arg5 ;
-(id)callTreeWithGraph:(id)arg0 groupByType:(BOOL)arg1 showRegionVirtualSize:(BOOL)arg2 debugTimer:(id)arg3 ;
-(id)groupByNodeNameForNode:(unsigned int)arg0 parentNodeName:(unsigned int)arg1 parentNodeType:(unsigned int)arg2 reference:(struct ? *)arg3 ;
-(id)groupByTypeNameForNode:(unsigned int)arg0 ;
-(id)referenceDecriptionForSourceNodeAddress:(NSUInteger)arg0 referenceInfo:(struct ? )arg1 ;
-(id)remainingNodeNames;
-(void)buildCallTreeWithNodeName:(unsigned int)arg0 callTreeParentNode:(id)arg1 parentNodeName:(unsigned int)arg2 parentNodeType:(unsigned int)arg3 reference:(struct ? *)arg4 rootNodeFilter:(id)arg5 ;
-(void)buildCallTreeWithRootNodeNames:(id)arg0 ;
-(void)removeJunkEdges;


@end


#endif