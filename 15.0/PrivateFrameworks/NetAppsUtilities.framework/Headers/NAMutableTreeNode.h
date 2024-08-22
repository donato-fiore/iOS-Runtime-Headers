// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAMUTABLETREENODE_H
#define NAMUTABLETREENODE_H

@class NSSet;


#import "NATreeNode.h"

@interface NAMutableTreeNode : NATreeNode

@property (copy, nonatomic) NSSet *childNodes;
@property (retain, nonatomic) id *representedObject;


-(void)addChild:(id)arg0 ;
-(void)addChildren:(id)arg0 ;
-(void)removeChild:(id)arg0 ;
-(void)removeChildrenPassingTest:(id)arg0 ;


@end


#endif