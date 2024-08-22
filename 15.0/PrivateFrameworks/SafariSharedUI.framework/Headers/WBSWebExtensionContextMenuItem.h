// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONCONTEXTMENUITEM_H
#define WBSWEBEXTENSIONCONTEXTMENUITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionContextMenuContext.h"
#import "WBSWebExtensionContextMenuItemInfo.h"

@interface WBSWebExtensionContextMenuItem : NSObject

@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) WBSWebExtensionContextMenuContext *context; // ivar: _context
@property (readonly, nonatomic) WBSWebExtensionContextMenuItemInfo *info; // ivar: _info


+(id)itemWithInfo:(id)arg0 children:(id)arg1 context:(id)arg2 ;


@end


#endif