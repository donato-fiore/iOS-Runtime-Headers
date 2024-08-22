// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSGROUPHISTORY_H
#define _UIFOCUSGROUPHISTORY_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface _UIFocusGroupHistory : NSObject {
    NSMapTable *_groupToItemMap;
}




-(id)init;
-(id)lastFocusedItemForGroupIdentifier:(id)arg0 ;
-(void)_uiktest_clearHistory;
-(void)setLastFocusedItem:(id)arg0 forGroupIdentifier:(id)arg1 ;


@end


#endif