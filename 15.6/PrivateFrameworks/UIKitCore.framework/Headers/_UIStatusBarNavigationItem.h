// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARNAVIGATIONITEM_H
#define _UISTATUSBARNAVIGATIONITEM_H



#import "UIStatusBarItem.h"
#import "_UIStatusBarStringView.h"

@interface _UIStatusBarNavigationItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *nameView; // ivar: _nameView


-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg0 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif