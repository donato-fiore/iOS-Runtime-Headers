// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARCELLULAREXPANDEDITEM_H
#define _UISTATUSBARCELLULAREXPANDEDITEM_H

@class UIStatusBarCellularItem;


#import "_UIStatusBarBadgeView.h"

@interface _UIStatusBarCellularExpandedItem : UIStatusBarCellularItem

@property (retain, nonatomic) _UIStatusBarBadgeView *badgeView; // ivar: _badgeView


+(id)badgeDisplayIdentifier;
+(id)groupWithHighPriority:(NSInteger)arg0 lowPriority:(NSInteger)arg1 typeClass:(Class)arg2 allowDualNetwork:(BOOL)arg3 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif