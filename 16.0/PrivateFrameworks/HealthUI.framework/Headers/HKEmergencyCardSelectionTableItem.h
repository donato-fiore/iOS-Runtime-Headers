// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKEMERGENCYCARDSELECTIONTABLEITEM_H
#define HKEMERGENCYCARDSELECTIONTABLEITEM_H

@class UITableViewCell;
@protocol HKEmergencyCardSelectionTableItemDelegate;


#import "HKEmergencyCardTableItem.h"

@interface HKEmergencyCardSelectionTableItem : HKEmergencyCardTableItem {
    UITableViewCell *_cell;
}


@property (weak, nonatomic) NSObject<HKEmergencyCardSelectionTableItemDelegate> *selectionDelegate; // ivar: _selectionDelegate


-(BOOL)hasPresentableData;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(void)tableView:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;


@end


#endif