// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGRIDGRAPHNODE_H
#define GKGRIDGRAPHNODE_H



#import "GKGraphNode.h"

@interface GKGridGraphNode : GKGraphNode {
    *void _cGridGraphNode;
}


@property ? gridPosition;


+(id)nodeWithGridPosition;
-(float)costToNode:(id)arg0 ;
-(float)estimatedCostToNode:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGridPosition;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif