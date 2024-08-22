// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERACTIONEDITORITEMMANAGER_H
#define HUTRIGGERACTIONEDITORITEMMANAGER_H

@class HFSimpleItemManager;


#import "HUTriggerHeaderItem.h"
#import "HUButtonItem.h"
#import "HUViewControllerTableViewItem.h"

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager

@property (retain, nonatomic) HUTriggerHeaderItem *addShortcutHeader; // ivar: _addShortcutHeader
@property (retain, nonatomic) HUButtonItem *addShortcutItem; // ivar: _addShortcutItem
@property (retain, nonatomic) HUViewControllerTableViewItem *gridItem; // ivar: _gridItem


-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 showShortcutItem:(BOOL)arg1 ;


@end


#endif