// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIGESTUREGRAPHEDGE_H
#define UIGESTUREGRAPHEDGE_H



#import "UIGestureGraphElement.h"
#import "UIGestureGraphNode.h"

@interface UIGestureGraphEdge : UIGestureGraphElement

@property (readonly, nonatomic, getter=isDirected) BOOL directed; // ivar: _directed
@property (readonly, nonatomic, getter=isLoop) BOOL loop;
@property (readonly, nonatomic) UIGestureGraphNode *sourceNode; // ivar: _sourceNode
@property (readonly, nonatomic) UIGestureGraphNode *targetNode; // ivar: _targetNode


-(id)commonNode:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 directed:(BOOL)arg3 ;
-(id)oppositeNode:(id)arg0 ;


@end


#endif