// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENULINKEDLIST_H
#define _UICONTEXTMENULINKEDLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIContextMenuNode.h"

@interface _UIContextMenuLinkedList : NSObject

@property (readonly, nonatomic) _UIContextMenuNode *current;
@property (readonly, nonatomic) _UIContextMenuNode *first;
@property (retain, nonatomic) NSMutableArray *nodes; // ivar: _nodes


-(id)description;
-(id)nodeForMenu:(id)arg0 ;
-(id)popNode;
-(id)removeNode:(id)arg0 ;
// -(void)_enumerateNodes:(id)arg0 inReverse:(unk)arg1  ;
-(void)addNode:(id)arg0 ;
-(void)enumerateNodes:(id)arg0 ;
-(void)reverseEnumerateNodes:(id)arg0 ;


@end


#endif