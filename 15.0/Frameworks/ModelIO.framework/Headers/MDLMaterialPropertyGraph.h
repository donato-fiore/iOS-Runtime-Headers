// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLMATERIALPROPERTYGRAPH_H
#define MDLMATERIALPROPERTYGRAPH_H

@class NSMutableArray, NSArray;


#import "MDLMaterialPropertyNode.h"

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {
    NSMutableArray *_finalNodes;
}


@property (readonly, nonatomic) NSArray *connections; // ivar: _connections
@property (readonly, nonatomic) NSArray *nodes; // ivar: _nodes


-(id)initWithNodes:(id)arg0 connections:(id)arg1 ;
-(void)evaluate;


@end


#endif