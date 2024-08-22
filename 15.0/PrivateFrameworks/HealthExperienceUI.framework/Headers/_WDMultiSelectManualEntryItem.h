// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WDMULTISELECTMANUALENTRYITEM_H
#define _WDMULTISELECTMANUALENTRYITEM_H

@class NSArray;


#import "WDAddDataManualEntryItem.h"

@interface _WDMultiSelectManualEntryItem : WDAddDataManualEntryItem {
    NSArray *_tableViewCells;
}


@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (retain, nonatomic) NSArray *titles; // ivar: _titles


-(id)generateValue;
-(id)tableViewCells;
-(void)cellForItemTapped:(id)arg0 ;


@end


#endif