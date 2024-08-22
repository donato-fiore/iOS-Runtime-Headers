// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUNODE_H
#define _UICONTEXTMENUNODE_H


#import <Foundation/Foundation.h>

#import "_UIContextMenuListView.h"
#import "UIMenu.h"
#import "_UIContextMenuNode.h"

@interface _UIContextMenuNode : NSObject

@property (retain, nonatomic) _UIContextMenuListView *listView; // ivar: _listView
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (weak, nonatomic) _UIContextMenuNode *next; // ivar: _next
@property (weak, nonatomic) _UIContextMenuNode *previous; // ivar: _previous


-(id)description;


@end


#endif