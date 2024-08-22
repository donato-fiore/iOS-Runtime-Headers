// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONCONTEXTMENUITEMMANAGER_H
#define WBSWEBEXTENSIONCONTEXTMENUITEMMANAGER_H

@class NSMutableOrderedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionContextMenuItemManager : NSObject {
    NSMutableOrderedSet *_topLevelEntries;
    NSMutableDictionary *_entriesByIdentifier;
}




-(id)_itemToShowForEntry:(id)arg0 inContext:(id)arg1 inheritedContextTypes:(id)arg2 ;
-(id)_radioGroupForEntry:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)init;
-(id)itemsToShowInContext:(id)arg0 ;
-(void)_radioEntryDidMoveToGroup:(id)arg0 ;
-(void)_radioEntryWillBeRemovedFromGroup:(id)arg0 ;
-(void)_radioGroupWillBeSplitByEntry:(id)arg0 ;
-(void)_toggleCheckedStateOfEntry:(id)arg0 ;
-(void)_updateNeighboringRadioGroupsForItemBeingRemoved:(id)arg0 ;
-(void)addItem:(id)arg0 outErrorMessage:(*id)arg1 ;
-(void)removeAllItems;
-(void)removeItemWithIdentifier:(id)arg0 outErrorMessage:(*id)arg1 ;
-(void)updateItemWithIdentifier:(id)arg0 properties:(id)arg1 outErrorMessage:(*id)arg2 ;


@end


#endif